using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    public GameObject[] enemyPrefab;
    public GameObject[] powerupPrefab;
    public GameObject bossPrefab;
    public GameObject miniPrefab;

    private float spawnRange = 9.0f;

    public int enemyCount;
    public int basicEnemyCount;
    public int hardEnemyCount;
    public int bossEnemyCount;

    public int waveNum = 1;

    public bool bossActive = false;
    private float spawnDelay = 1.0f;
    private float spawnRepeat = 3.0f;


    // Start is called before the first frame update
    void Start()
    {
        SpawnEnemyWave(waveNum);
        //SpawnPowerup();
    }

    // Update is called once per frame
    void Update()
    {
        //enemyCount = FindObjectsOfType<Enemy>().Length;
        basicEnemyCount = FindObjectsOfType<Enemy>().Length;
        hardEnemyCount = FindObjectsOfType<HardEnemy>().Length;
        bossEnemyCount = FindObjectsOfType<BossEnemy>().Length;
       
        enemyCount = basicEnemyCount + hardEnemyCount + bossEnemyCount;

        if (bossEnemyCount == 0)
        {
            bossActive = false;
            CancelInvoke("SpawnMinions");
        }

        if (enemyCount == 0)
        {

            waveNum++;
            SpawnEnemyWave(waveNum);
            SpawnPowerup();
        }
    }

    void SpawnEnemyWave(int enemiesToSpawn)
    {
        for (int i = 0; i < enemiesToSpawn; i++)
        {
            int enemyIndex = Random.Range(0, enemyPrefab.Length);
            Instantiate(enemyPrefab[enemyIndex], GenerateSpawnPos(), enemyPrefab[enemyIndex].transform.rotation);
        }

        if (enemiesToSpawn % 5 == 0 && enemiesToSpawn > 0)
        {
            bossActive = true;
            SpawnBossBattle();
            
        }
    }

    void SpawnPowerup()
    {
        int powerupIndex = Random.Range(0, powerupPrefab.Length);
        Instantiate(powerupPrefab[powerupIndex], GenerateSpawnPos(), powerupPrefab[powerupIndex].transform.rotation);
        
    }

    private Vector3 GenerateSpawnPos()
    {
        float spawnPosX = Random.Range(-spawnRange, spawnRange);
        float spawnPosZ = Random.Range(-spawnRange, spawnRange);

        Vector3 spawnPos = new Vector3(spawnPosX, 0, spawnPosZ);

        return spawnPos;
    }

    void SpawnBossBattle()
    {
        Instantiate(bossPrefab, GenerateSpawnPos(), bossPrefab.transform.rotation);

        if (bossActive == true)
        {
            InvokeRepeating("SpawnMinions", spawnDelay, spawnRepeat);
            
        }
    }

    void SpawnMinions()
    {
        Instantiate(miniPrefab, GenerateSpawnPos(), miniPrefab.transform.rotation);
    }
}

