using UnityEngine;

public class EnemyController : MonoBehaviour
{
    #region Variables

    [SerializeField] float moveSpeed;
    public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }

    bool hasTurned;
    public bool HasTurned { set { hasTurned = value; } }

    Vector3 lookDirection;
    Transform target;

    //Refrences
    Rigidbody enemyRb;
    Animator animator;
    GameObject player;
    PickUps pickUps;
    SpawnManager spawnManager;

    #endregion

    void Start()
    {
        enemyRb = GetComponent<Rigidbody>();
        animator = GetComponent<Animator>();
        player = GameObject.Find("Player");
        pickUps = FindObjectOfType<PickUps>();
        spawnManager = FindObjectOfType<SpawnManager>();
    }

    void Update()
    {
        ActivateAnimation(hasTurned);

        if (hasTurned && pickUps.RadActive)
        {
            FindClosestEnemyOrRun();
        }
        else
        {
            hasTurned = false;
            LookAtPlayer();
        }

        KillEnemy();
    }

    void ActivateAnimation(bool value)
    {
        if (animator == null)
        {
            return;
        }

        if (!pickUps.RadActive)
        {
            animator.SetBool("hasTurned", value);
            gameObject.tag = "Enemy";
        }
        else if (pickUps.RadActive && hasTurned)
        {
            animator.SetBool("hasTurned", value);
            gameObject.tag = "TurnedEnemy";
        }
    }

    void FindClosestEnemyOrRun()
    {
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
        GameObject[] bosses = GameObject.FindGameObjectsWithTag("Boss");
        GameObject[] miniBoss = GameObject.FindGameObjectsWithTag("MiniBoss");

        GameObject[] allEnemies = new GameObject[enemies.Length + bosses.Length + miniBoss.Length];

        enemies.CopyTo(allEnemies, 0);
        bosses.CopyTo(allEnemies, enemies.Length);
        miniBoss.CopyTo(allEnemies, enemies.Length + bosses.Length);

        if (allEnemies.Length >= 1)
        {
            float maxDistance = Mathf.Infinity;
            Transform closestTarget = null;

            foreach (GameObject enemy in allEnemies)
            {
                float targetDistance = Vector3.Distance(transform.position, enemy.transform.position);

                if (targetDistance < maxDistance)
                {
                    closestTarget = enemy.transform;
                    maxDistance = targetDistance;
                }
            }

            if (closestTarget != null)
            {
                target = closestTarget;
                lookDirection = (target.position - transform.position).normalized;
                enemyRb.AddForce(lookDirection * moveSpeed, ForceMode.Impulse);
            }
        }
        else
        {
            lookDirection = new Vector3(15, 0);
            enemyRb.AddForce(lookDirection * moveSpeed);
        }
    }

    void LookAtPlayer()
    {
        target = player.transform;
        lookDirection = (target.position - transform.position).normalized;
        enemyRb.AddForce(lookDirection * moveSpeed, ForceMode.Impulse);
    }

    void KillEnemy()
    {
        if (transform.position.y < -10)
        {
            spawnManager.RemoveEnemyFromList(gameObject);
            Destroy(gameObject);
        }
    }
}