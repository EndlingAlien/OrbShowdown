using UnityEngine;

public class BruteEnemySpeed : MonoBehaviour
{
//use this to change speed of brute enemy after boss rounds
    [SerializeField] float speed = 0;
    public float Speed { get { return speed; } set { speed = value; } }

    EnemyController enemyController;

    void Start()
    {
        enemyController = GetComponent<EnemyController>();
        enemyController.MoveSpeed = enemyController.MoveSpeed + speed;
    }
}