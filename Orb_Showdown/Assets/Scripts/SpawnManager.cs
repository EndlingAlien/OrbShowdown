using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    #region Variables

    [Header("Spawn Configuration")]
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

    // Script references
    UIController uiController;
    GameManager gameManager;
    PlayerController playerController;
    PickUps pickups;

    // Enemy rounds
    [SerializeField] int overallRoundNum = 0;
    public int OverallRoundNum { get { return overallRoundNum; } }
    int bruteRoundNum = 0;
    int bossRoundNum = 0;
    int miniBossRoundNum = 0;

    // Range for spawning enemies and pickups
    float spawnRange = 9.0f;

    // Pickup variables
    GameObject newPickUp;
    bool pauseTime;
    float timeSinceLastPickupSpawn = 0;

    // Pickup randomization variables
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

    // Show the appropriate canvas based on the game state
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

    // Timer for spawning pickups periodically
    void PickupTimer()
    {
        timeSinceLastPickupSpawn += Time.deltaTime;

        if (timeSinceLastPickupSpawn > 15)
        {
            timeSinceLastPickupSpawn = 0;
            PickUpProbability();
        }
    }

    // Instantiate enemies based on the game round
    void InstantiateCorrectEnemy()
    {
        if (activeEnemies.Count == 0)
        {
            overallRoundNum++;
            StartCoroutine(UpdateRound());
        }
    }

    // Coroutine to update the round and introduce different enemy types
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

    // Check for active enemies and pickups to clear them
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

    // Activate a boss fight with increasing numbers of bosses, bodyguards, and minions
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

    // Activate a mini-boss fight with increasing numbers of mini-bosses, henchmen, and minions
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

    // Activate brute enemies with increasing numbers based on the game round
    void ActivateBruteEnemy()
    {
        int lastDigit = overallRoundNum % 10;
        bruteRoundNum = lastDigit;

        SpawnEnemyWave(bruteRoundNum, brutePrefab);
    }

    // Spawn a wave of enemies with a specified prefab
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

    // Determine the probability of spawning a pickup and initiate the spawn
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

    // Spawn a pickup from the provided list, avoiding repetition
    void SpawnPickUp(GameObject[] pickupList)
    {
        if (activePickup.Count >= 2)
        {
            RemovePickUpFromList();
        }
        AvoidRepetitiveChoice(pickupList);
    }

    // Avoid repetitive pickup choices based on history
    void AvoidRepetitiveChoice(GameObject[] pickupList)
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
        newPickUp = Instantiate(pickupList[randomIndex], GenerateSpawnPos(), Quaternion.identity);
        activePickup.Add(newPickUp);
    }

    // Remove the oldest pickup from the list
    void RemovePickUpFromList()
    {
        if (activePickup.Count > 0)
        {
            Destroy(activePickup[0]);
            activePickup.Clear();
        }
    }

    #endregion

    // Generate a random spawn position within the specified range
    Vector3 GenerateSpawnPos()
    {
        float spawnPosX = Random.Range(-spawnRange, spawnRange);
        float spawnPosZ = Random.Range(-spawnRange, spawnRange);

        Vector3 spawnPos = new Vector3(spawnPosX, 0, spawnPosZ);

        return spawnPos;
    }

    #region For Scripts

    // Remove an enemy from the active list
    public void RemoveEnemyFromList(GameObject enemyToRemove)
    {
        activeEnemies.Remove(enemyToRemove);
    }

    // Handle player death by clearing enemies and initiating ghost enemy creation
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

    // Start the routine to delete enemies one by one
    public void StartDeletingEnemies()
    {
        StartCoroutine(DeleteEnemiesRoutine());
    }

    // Coroutine to delete enemies one by one
    IEnumerator DeleteEnemiesRoutine()
    {
        while (activeEnemies.Count > 0)
        {
            yield return new WaitForSeconds(0.1f);
            KillOne();
        }

        pickups.HasPickup = false;
    }

    // Kill one enemy from the list
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