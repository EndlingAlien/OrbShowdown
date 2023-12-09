using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    #region Variables

    [Header("Sapwn Configuration")]
    [Space(5)]

    [Header("Enemy Prefabs")]
    [SerializeField] GameObject bodyguardPrefab;
    [SerializeField] GameObject bossPrefab;
    [SerializeField] GameObject brutePrefab;
    [SerializeField] GameObject henchmanPrefab;
    [SerializeField] GameObject miniBossPrefab;
    [SerializeField] GameObject minionPrefab;
    [Space(10)]

    [Header("Pickup Arrays")]
    [Tooltip("Place all Common pickups here, 65% chance")]
    [SerializeField] GameObject[] commonPickUps;
    [Tooltip("Place all Uncommon pickups here, 25% chance")]
    [SerializeField] GameObject[] uncommonPickUps;
    [Tooltip("Place all Rare pickups here, 10% chance")]
    [SerializeField] GameObject[] rarePickUps;
    [Space(10)]

    bool playerChoosingPowerup;
    public bool PlayerChoosingPowerup { set { playerChoosingPowerup = value; } }

    bool playerDied;

    List<GameObject> activeEnemies = new List<GameObject>();
    List<GameObject> activePickup = new List<GameObject>();

    //Script refrences
    UIController uiController;
    GameManager gameManager;
    PlayerController playerController;
    PickUps pickups;

    //enemy rounds
    [SerializeField] int overallRoundNum = 0;
    public int OverallRoundNum { get { return overallRoundNum; } }
    int bruteRoundNum = 0;
    int bossRoundNum = 0;
    int miniBossRoundNum = 0;

    //range for spawning enemies and pickups
    float spawnRange = 9.0f;

    //pickups variables
    GameObject newpickUp;
    bool pauseTime;
    float timeSinceLastPickupSpawn = 0;

    //pickup randomization variables
    int randomNum;
    int randomIndex;
    Queue<int> pickupHistory = new Queue<int>();
    int maxHistoryLength = 3;
    int previousIndex = -1;

    #endregion

    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        uiController = FindObjectOfType<UIController>();
        playerController = FindObjectOfType<PlayerController>();
        pickups = FindObjectOfType<PickUps>();

        playerChoosingPowerup = true;
        playerDied = false;
    }

    void Update()
    {
        if (!playerDied)
        {
            if (activeEnemies.Count == 0 && gameManager.IsPlaying)
            {
                pauseTime = true;
                playerController.ResetPlayerPosition();
                ShowCorrectCanvas();
            }
            else
            {
                pauseTime = false;
            }

            if (!pauseTime && gameManager.IsPlaying)
            {
                PickupTimer();
            }

            if (!playerChoosingPowerup)
            {
                InstantiateCorrectEnemy();
            }
        }
        else
        {
            CheckForActive();
        }
    }

    #region Update Methods

    void ShowCorrectCanvas()
    {
        if (!uiController.PlayerInMenu)
        {
            if (overallRoundNum % 5 == 0 && overallRoundNum != 0)
            {
                uiController.ActivateCorrectCanvas(1, true);
            }
            else if (overallRoundNum != 0)
            {
                uiController.ActivateCorrectCanvas(2, true);
            }
        }
    }

    void PickupTimer()
    {
        timeSinceLastPickupSpawn += Time.deltaTime;

        if (timeSinceLastPickupSpawn > 15)
        {
            timeSinceLastPickupSpawn = 0;
            PickUpProbability();
        }
    }

    void InstantiateCorrectEnemy()
    {
        if (activeEnemies.Count == 0)
        {
            overallRoundNum++;
            StartCoroutine(UpdateRound());
        }
    }

    IEnumerator UpdateRound()
    {
        playerChoosingPowerup = true;
        uiController.UpdateRoundNum(overallRoundNum);

        yield return new WaitForSeconds(5);

        if (overallRoundNum % 10 == 0)
        {
            ActivateBossFight();
        }
        else if (overallRoundNum % 5 == 0)
        {
            ActivateMiniBossFight();
        }
        else
        {
            ActivateBruteEnemy();
        }
    }

    void CheckForActive()
    {
        if (activeEnemies.Count > 0)
        {
            foreach (GameObject enemy in activeEnemies)
            {
                Destroy(enemy);
            }
        }

        if (activePickup.Count > 0)
        {
            foreach (GameObject pickup in activePickup)
            {
                Destroy(pickup);
            }
        }
    }

    #endregion

    #region Enemy Spawn Config

    void ActivateBossFight()
    {
        bossRoundNum++;
        miniBossRoundNum++;

        int bossNum = 1;
        int bodyguardNum = 2;
        int minionsNum = 7;

        SpawnEnemyWave(bossNum * bossRoundNum, bossPrefab);
        SpawnEnemyWave(bodyguardNum * bossRoundNum, bodyguardPrefab);
        SpawnEnemyWave(minionsNum * bossRoundNum, minionPrefab);
    }

    void ActivateMiniBossFight()
    {
        miniBossRoundNum++;

        int miniBossNum = 1;
        int henchmanNum = 1;
        int minionsNum = 3;

        SpawnEnemyWave(miniBossNum * miniBossRoundNum, miniBossPrefab);
        SpawnEnemyWave(henchmanNum * miniBossRoundNum, henchmanPrefab);
        SpawnEnemyWave(minionsNum * miniBossRoundNum, minionPrefab);
    }

    void ActivateBruteEnemy()
    {
        int lastDigit = overallRoundNum % 10;
        bruteRoundNum = lastDigit;

        SpawnEnemyWave(bruteRoundNum, brutePrefab);
    }

    void SpawnEnemyWave(int enemiesToSpawn, GameObject prefab)
    {
        for (int i = 0; i < enemiesToSpawn; i++)
        {
            if (prefab == brutePrefab)
            {
                GameObject bruteEnemy = Instantiate(prefab, GenerateSpawnPos(), Quaternion.identity);
                bruteEnemy.GetComponent<EnemyController>().MoveSpeed += 0.08f * bossRoundNum;
                activeEnemies.Add(bruteEnemy);
            }
            else
            {
                GameObject newEnemy = Instantiate(prefab, GenerateSpawnPos(), Quaternion.identity);
                if (newEnemy.GetComponent<EnemyCollisionDetection>() != null)
                {
                    newEnemy.GetComponent<EnemyCollisionDetection>().PushForce = bossRoundNum;
                }
                activeEnemies.Add(newEnemy);
            }

        }
        playerChoosingPowerup = true;
    }

    #endregion

    #region Pickup Spawn Config

    void PickUpProbability()
    {
        randomNum = Random.Range(1, 101);

        if (randomNum <= 65)
        {
            SpawnPickUp(commonPickUps);
        }
        else if (randomNum <= 90)
        {
            SpawnPickUp(uncommonPickUps);
        }
        else if (randomNum <= 100)
        {
            SpawnPickUp(rarePickUps);
        }
    }

    void SpawnPickUp(GameObject[] pickupList)
    {
        if (activePickup.Count >= 2)
        {
            RemovePickUpFromList();
        }
        AvoidRepetetiveChoice(pickupList);
    }

    void AvoidRepetetiveChoice(GameObject[] pickupList)
    {
        int maxAttempts = pickupList.Length;
        int currentAttempt = 0;

        do
        {
            randomIndex = Random.Range(0, pickupList.Length);

            if (randomIndex != previousIndex)
            {
                if (!pickupHistory.Contains(randomIndex))
                {
                    pickupHistory.Enqueue(randomIndex);
                    if (pickupHistory.Count > maxHistoryLength)
                    {
                        pickupHistory.Dequeue();
                    }
                    previousIndex = randomIndex;
                    break;
                }
            }
            currentAttempt++;
        }
        while (currentAttempt < maxAttempts);

        if (currentAttempt >= maxAttempts)
        {
            pickupHistory.Clear();
            previousIndex = -1;
        }
        newpickUp = Instantiate(pickupList[randomIndex], GenerateSpawnPos(), Quaternion.identity);
        activePickup.Add(newpickUp);
    }

    void RemovePickUpFromList()
    {
        if (activePickup.Count > 0)
        {
            Destroy(activePickup[0]);
            activePickup.Clear();
        }
    }

    #endregion

    Vector3 GenerateSpawnPos()
    {
        float spawnPosX = Random.Range(-spawnRange, spawnRange);
        float spawnPosZ = Random.Range(-spawnRange, spawnRange);

        Vector3 spawnPos = new Vector3(spawnPosX, 0, spawnPosZ);

        return spawnPos;
    }

    #region For Scripts

    public void RemoveEnemyFromList(GameObject enemyToRemove)
    {
        activeEnemies.Remove(enemyToRemove);
    }

    public void PlayerDeath()
    {
        playerDied = true;
        foreach (GameObject enemy in activeEnemies)
        {
            Destroy(enemy);
        }
        activeEnemies.Clear();
        GameObject ghost = new GameObject("GhostEnemy");
        activeEnemies.Add(ghost);
        RemovePickUpFromList();
    }

    #endregion

    #region Trophy Pickup

    public void StartDeletingEnemies()
    {
        StartCoroutine(DeleteEnemiesRoutine());
    }

    IEnumerator DeleteEnemiesRoutine()
    {
        while (activeEnemies.Count > 0)
        {
            yield return new WaitForSeconds(0.1f);
            KillOne();
        }

        pickups.HasPickup = false;
    }

    void KillOne()
    {
        if (activeEnemies.Count > 0)
        {
            GameObject enemy = activeEnemies[0];
            activeEnemies.RemoveAt(0);
            Destroy(enemy);
        }
    }

    #endregion

}