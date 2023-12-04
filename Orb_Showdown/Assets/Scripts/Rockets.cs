using System.Collections;
using UnityEngine;

public class Rockets : MonoBehaviour
{
    [SerializeField] float moveSpeed;

    Rigidbody rocketRb;
    Transform target;

    void Start()
    {
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");

        if (enemies.Length > 0)
        {
            float minDistance = Mathf.Infinity;

            foreach (GameObject enemy in enemies)
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
        if (other.gameObject.CompareTag("Enemy"))
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
