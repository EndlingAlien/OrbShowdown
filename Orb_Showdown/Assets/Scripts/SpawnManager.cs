using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{

    [SerializeField] GameObject bodyguardPrefab;
    [SerializeField] GameObject bossPrefab;
    [SerializeField] GameObject brutePrefab;
    [SerializeField] GameObject henchmanPrefab;
    [SerializeField] GameObject miniBossPrefab;
    [SerializeField] GameObject minionPrefab;

    [SerializeField] GameObject[] commonPickUps;
    [SerializeField] GameObject[] uncommonPickUps;
    [SerializeField] GameObject[] rarePickUps;
    [SerializeField] List<GameObject> activeEnemies = new List<GameObject>();
    [SerializeField] List<GameObject> activePickup = new List<GameObject>();


    [SerializeField] int overallRoundNum = 1;
    [SerializeField] int bruteRoundNum = 1;
    [SerializeField] int bossRoundNum = 0;
    [SerializeField] int miniBossRoundNum = 0;

    //for pickups
    [SerializeField] int randomNum;
    [SerializeField] int randomIndex;

    float spawnRange = 9.0f;

    float timeSinceLastPickupSpawn = 0;
    GameObject newpickUp;
    GameObject oldPickup;


    void Start()
    {
        //SpawnEnemyWave(bruteRoundNum, brutePrefab);
    }



    void Update()
    {
        timeSinceLastPickupSpawn += Time.deltaTime;

        if (timeSinceLastPickupSpawn > 5)
        {
            timeSinceLastPickupSpawn = 0;
            PickUpProbability();
        }

        // if (activeEnemies.Count == 0)
        // {
        //     overallRoundNum++;

        //     if (overallRoundNum % 10 == 0)
        //     {
        //         ActivateBossFight();
        //     }
        //     else if (overallRoundNum % 5 == 0)
        //     {
        //         ActivateMiniBossFight();
        //     }
        //     else
        //     {
        //         ActivateBruteEnemy();
        //     }
        // }
    }

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
    }

    #endregion

    Vector3 GenerateSpawnPos()
    {
        float spawnPosX = Random.Range(-spawnRange, spawnRange);
        float spawnPosZ = Random.Range(-spawnRange, spawnRange);

        Vector3 spawnPos = new Vector3(spawnPosX, 0, spawnPosZ);

        return spawnPos;
    }

    void PickUpProbability()
    {
        randomNum = Random.Range(1, 101);

        if (randomNum <= 70)
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
        //this probability is not good
        //for ex: will spawn 3 red potions in a row
        //pretty sure PickUpProbability works good, but its the choice of picking within the index that usually repeats 
        //check highway mayhem spawn manager to go against duplicates
        randomIndex = Random.Range(0, pickupList.Length);
        newpickUp = Instantiate(pickupList[randomIndex], GenerateSpawnPos(), Quaternion.identity);
        activePickup.Add(newpickUp);
    }

    void RemovePickUpFromList()
    {
        Destroy(activePickup[0]);
        activePickup.Clear();
    }

    public void RemoveEnemyFromList(GameObject enemyToRemove)
    {
        activeEnemies.Remove(enemyToRemove);
    }



}

