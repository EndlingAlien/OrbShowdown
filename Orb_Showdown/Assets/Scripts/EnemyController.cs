using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//attach to each enemy prefab
//this makes enemy look at player
public class EnemyController : MonoBehaviour
{
    [SerializeField] float moveSpeed = 3.0f;

    bool hasTurned;
    public bool HasTurned { set { hasTurned = value; } }

    Rigidbody enemyRb;
    Animator animator;
    GameObject player;
    PickUps pickUps;
    Vector3 lookDirection;

    Transform target;

    // Start is called before the first frame update
    void Start()
    {
        enemyRb = GetComponent<Rigidbody>();
        animator = GetComponent<Animator>();
        player = GameObject.Find("Player");
        pickUps = FindObjectOfType<PickUps>();
    }

    // Update is called once per frame
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


        if (transform.position.y < -10)
        {
            Destroy(gameObject);
        }
    }

    void LookAtPlayer()
    {
        target = player.transform;
        lookDirection = (target.position - transform.position).normalized;
        // Apply force for rolling
        enemyRb.AddForce(lookDirection * moveSpeed, ForceMode.Impulse);
    }


    void FindClosestEnemyOrRun()
    {
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
        if (enemies.Length >= 1)
        {
            float maxDistance = Mathf.Infinity;
            Transform closestTarget = null;

            foreach (GameObject enemy in enemies)
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
                // Apply force for rolling
                enemyRb.AddForce(lookDirection * moveSpeed, ForceMode.Impulse);
            }
        }
        else
        {
            lookDirection = new Vector3(15, 0);
            enemyRb.AddForce(lookDirection * moveSpeed);
        }
    }



    void ActivateAnimation(bool value)
    {
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

}
