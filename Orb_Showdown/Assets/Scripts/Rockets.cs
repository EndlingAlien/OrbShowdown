using System.Collections;
using UnityEngine;

public class Rockets : MonoBehaviour
{
    // Move speed property
    float moveSpeed;
    public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }

    // Rigidbody for the rocket
    Rigidbody rocketRb;
    
    // Target transform for the rocket to follow
    Transform target;

    // Reference to the PickUps script
    PickUps pickUps;

    void Start()
    {
        // Find the PickUps script in the scene
        pickUps = FindObjectOfType<PickUps>();

        // Set the default move speed
        moveSpeed = 10;

        // Find all enemies, bosses, and mini-bosses in the scene
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
        GameObject[] bosses = GameObject.FindGameObjectsWithTag("Boss");
        GameObject[] miniBoss = GameObject.FindGameObjectsWithTag("MiniBoss");

        // Combine all enemy arrays into one
        GameObject[] allEnemies = new GameObject[enemies.Length + bosses.Length + miniBoss.Length];
        enemies.CopyTo(allEnemies, 0);
        bosses.CopyTo(allEnemies, enemies.Length);
        miniBoss.CopyTo(allEnemies, enemies.Length + bosses.Length);

        // Check if there are any enemies in the scene
        if (allEnemies.Length > 0)
        {
            float minDistance = Mathf.Infinity;

            // Find the closest enemy as the target
            foreach (GameObject enemy in allEnemies)
            {
                float distance = Vector3.Distance(transform.position, enemy.transform.position);

                if (distance < minDistance)
                {
                    minDistance = distance;
                    target = enemy.transform;
                }
            }

            // If a target is found, launch the rocket towards it
            if (target != null)
            {
                rocketRb = GetComponent<Rigidbody>();
                Vector3 lookDirection = (target.position - transform.position).normalized;
                rocketRb.AddForce(lookDirection * moveSpeed, ForceMode.Impulse);
                StartCoroutine(SelfDestructAfterDelay());
            }
        }
        else
        {
            // If no enemies are found, self-destruct the rocket
            SelfDestruct();
        }
    }

    void OnCollisionEnter(Collision other)
    {
        // Check if the rocket collides with an enemy, boss, or mini-boss
        if (other.gameObject.CompareTag("Enemy") || other.gameObject.CompareTag("Boss") || other.gameObject.CompareTag("MiniBoss"))
        {
            Destroy(gameObject);
        }
    }

    void SelfDestruct()
    {
        // Disable rockets in the PickUps script and destroy the rocket
        pickUps.RocketsActive = false;
        Destroy(gameObject);
    }

    IEnumerator SelfDestructAfterDelay()
    {
        // Destroy the rocket after a delay
        yield return new WaitForSeconds(5f);
        Destroy(gameObject);
    }
}