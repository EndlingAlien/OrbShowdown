using System.Collections;
using UnityEngine;

public class Rockets : MonoBehaviour
{
    //remove serialization in future, can change with pickup upgrade
    [SerializeField] float moveSpeed;

    Rigidbody rocketRb;
    Transform target;

    void Start()
    {
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
            }

        }
        else
        {
            StartCoroutine(SelfDestruct());
        }
    }

    void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.CompareTag("Enemy") || other.gameObject.CompareTag("Boss") || other.gameObject.CompareTag("MiniBoss"))
        {
            Destroy(gameObject);
        }
    }

    IEnumerator SelfDestruct()
    {
        yield return new WaitForSeconds(3);
        Destroy(gameObject);
    }
}