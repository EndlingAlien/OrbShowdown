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

    [Header("Script Refrence")]
    [SerializeField] UIController uiController;

    bool playerChoosingPowerup = false;
    public bool PlayerChoosingPowerup { set { playerChoosingPowerup = value; } }

    List<GameObject> activeEnemies = new List<GameObject>();
    List<GameObject> activePickup = new List<GameObject>();

    //enemy rounds
    int overallRoundNum = 0;
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

    void Update()
    {

        if (activeEnemies.Count == 0)
        {
            pauseTime = true;
            ShowCorrectCanvas();
        }
        else
        {
            pauseTime = false;
        }

        if (!pauseTime)
        {
            PickupTimer();
        }

        if (!playerChoosingPowerup)
        {
            InstantiateCorrectEnemy();
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
            GameObject newEnemy = Instantiate(prefab, GenerateSpawnPos(), Quaternion.identity);
            activeEnemies.Add(newEnemy);
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
        if (activePickup.Count >= 1)
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

        // Clear history and reset previous lane if the maximum attempts are reached
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
        Destroy(activePickup[0]);
        activePickup.Clear();
    }

    #endregion

    Vector3 GenerateSpawnPos()
    {
        float spawnPosX = Random.Range(-spawnRange, spawnRange);
        float spawnPosZ = Random.Range(-spawnRange, spawnRange);

        Vector3 spawnPos = new Vector3(spawnPosX, 0, spawnPosZ);

        return spawnPos;
    }

    public void RemoveEnemyFromList(GameObject enemyToRemove)
    {
        activeEnemies.Remove(enemyToRemove);
    }

}