using System.Collections;
using UnityEngine;

public class Rockets : MonoBehaviour
{

    float moveSpeed;
    public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }

    Rigidbody rocketRb;
    Transform target;
    PickUps pickUps;

    void Start()
    {
        pickUps = FindObjectOfType<PickUps>();
        moveSpeed = 10;

        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
        GameObject[] bosses = GameObject.FindGameObjectsWithTag("Boss");
        GameObject[] miniBoss = GameObject.FindGameObjectsWithTag("MiniBoss");

        GameObject[] allEnemies = new GameObject[enemies.Length + bosses.Length + miniBoss.Length];
        enemies.CopyTo(allEnemies, 0);
        bosses.CopyTo(allEnemies, enemies.Length);
        miniBoss.CopyTo(allEnemies, enemies.Length + bosses.Length);

        if (allEnemies.Length > 0)
        {
            float minDistance = Mathf.Infinity;

            foreach (GameObject enemy in allEnemies)
            {
                float distance = Vector3.Distance(transform.position, enemy.transform.position);

                if (distance < minDistance)
                {
                    minDistance = distance;
                    target = enemy.transform;
                }
            }

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
            SelfDestruct();
        }
    }

    void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.CompareTag("Enemy") || other.gameObject.CompareTag("Boss") || other.gameObject.CompareTag("MiniBoss"))
        {
            Destroy(gameObject);
        }
    }

    void SelfDestruct()
    {
        pickUps.RocketsActive = false;
        Destroy(gameObject);
    }

    IEnumerator SelfDestructAfterDelay()
    {
        yield return new WaitForSeconds(5f);
        Destroy(gameObject);
    }

}