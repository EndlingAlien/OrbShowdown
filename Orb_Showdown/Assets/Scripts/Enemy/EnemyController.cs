using UnityEngine;

public class EnemyController : MonoBehaviour
{
    #region Variables

    // Movement speed of the enemy
    [SerializeField] float moveSpeed;
    public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }

    // Flag to check if the enemy has turned
    bool hasTurned;
    public bool HasTurned { set { hasTurned = value; } }

    // Direction to look at
    Vector3 lookDirection;
    // Target for the enemy to follow
    Transform target;

    // References to various components and managers
    Rigidbody enemyRb;
    Animator animator;
    GameObject player;
    PickUps pickUps;
    SpawnManager spawnManager;

    #endregion

    void Start()
    {
        // Get references to components and game objects
        enemyRb = GetComponent<Rigidbody>();
        animator = GetComponent<Animator>();
        player = GameObject.Find("Player");
        pickUps = FindObjectOfType<PickUps>();
        spawnManager = FindObjectOfType<SpawnManager>();
    }

    void Update()
    {
        // Activate relevant animation based on the "hasTurned" flag
        ActivateAnimation(hasTurned);

        // Check conditions for enemy behavior
        if (hasTurned && pickUps.RadActive)
        {
            FindClosestEnemyOrRun();
        }
        else
        {
            hasTurned = false;
            LookAtPlayer();
        }

        // Check for conditions to destroy the enemy
        KillEnemy();
    }

    void ActivateAnimation(bool value)
    {
        // Check if the animator component is available
        if (animator == null)
        {
            return;
        }

        // Set the animation and tag based on the "hasTurned" flag and "RadActive" status
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
        // Find all enemies, bosses, and mini-bosses
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
        GameObject[] bosses = GameObject.FindGameObjectsWithTag("Boss");
        GameObject[] miniBoss = GameObject.FindGameObjectsWithTag("MiniBoss");

        // Combine all enemy types into one array
        GameObject[] allEnemies = new GameObject[enemies.Length + bosses.Length + miniBoss.Length];

        enemies.CopyTo(allEnemies, 0);
        bosses.CopyTo(allEnemies, enemies.Length);
        miniBoss.CopyTo(allEnemies, enemies.Length + bosses.Length);

        // Check if there are any enemies in the scene
        if (allEnemies.Length >= 1)
        {
            float maxDistance = Mathf.Infinity;
            Transform closestTarget = null;

            // Find the closest target among all enemies
            foreach (GameObject enemy in allEnemies)
            {
                float targetDistance = Vector3.Distance(transform.position, enemy.transform.position);

                if (targetDistance < maxDistance)
                {
                    closestTarget = enemy.transform;
                    maxDistance = targetDistance;
                }
            }

            // Move towards the closest target if found
            if (closestTarget != null)
            {
                target = closestTarget;
                lookDirection = (target.position - transform.position).normalized;
                enemyRb.AddForce(lookDirection * moveSpeed, ForceMode.Impulse);
            }
        }
        else
        {
            // Move in a default direction if no enemies are present
            lookDirection = new Vector3(15, 0);
            enemyRb.AddForce(lookDirection * moveSpeed);
        }
    }

    void LookAtPlayer()
    {
        // Set the player as the target and move towards the player
        target = player.transform;
        lookDirection = (target.position - transform.position).normalized;
        enemyRb.AddForce(lookDirection * moveSpeed, ForceMode.Impulse);
    }

    void KillEnemy()
    {
        // Check if the enemy has fallen below a certain y-position and destroy it
        if (transform.position.y < -10)
        {
            spawnManager.RemoveEnemyFromList(gameObject);
            Destroy(gameObject);
        }
    }
}