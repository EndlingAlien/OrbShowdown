using UnityEngine;

public class BodyguardEnemy : MonoBehaviour
{
    Transform target;
    float maxDistance = 4;

    void Start()
    {
        GameObject[] bosses = GameObject.FindGameObjectsWithTag("Boss");

        if (bosses.Length > 0)
        {
            float minDistance = Mathf.Infinity;

            foreach (GameObject boss in bosses)
            {
                float distance = Vector3.Distance(transform.position, boss.transform.position);

                if (distance < minDistance)
                {
                    minDistance = distance;
                    target = boss.transform;
                }
            }

            if (target != null)
            {
                Vector3 offset = transform.position - target.position;
                float currentDistance = offset.magnitude;

                if (currentDistance > maxDistance)
                {
                    Vector3 direction = offset.normalized;
                    transform.position = target.position + direction * maxDistance;
                }
            }
        }
    }
}