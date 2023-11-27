using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    public GameObject[] activeEnemies;

    [SerializeField] GameObject[] powerupPrefabs;
    [SerializeField] GameObject[] powerupIndicators;
    
    [SerializeField] GameObject bossPrefab;
    [SerializeField] GameObject miniPrefab;

     float spawnRange = 9.0f;

    public int waveNum = 1;


    void Start()
    {

    }

    void Update()
    {

    }

    void SpawnEnemyWave(int enemiesToSpawn)
    {
        for (int i = 0; i < enemiesToSpawn; i++)
        {
            int enemyIndex = Random.Range(0, activeEnemies.Length);
            Instantiate(activeEnemies[enemyIndex], GenerateSpawnPos(), activeEnemies[enemyIndex].transform.rotation);
        }

    }

    private Vector3 GenerateSpawnPos()
    {
        float spawnPosX = Random.Range(-spawnRange, spawnRange);
        float spawnPosZ = Random.Range(-spawnRange, spawnRange);

        Vector3 spawnPos = new Vector3(spawnPosX, 0, spawnPosZ);

        return spawnPos;
    }

}

