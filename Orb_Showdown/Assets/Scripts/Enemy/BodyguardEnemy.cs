using UnityEngine;

public class BodyguardEnemy : MonoBehaviour
{
    // Reference to the target (boss) the bodyguard is following
    Transform target;

    // The maximum distance the bodyguard should be from the boss
    float maxDistance = 4;

    void Start()
    {
        // Find all game objects with the "Boss" tag
        GameObject[] bosses = GameObject.FindGameObjectsWithTag("Boss");

        if (bosses.Length > 0)
        {
            // Initialize the minimum distance to a very large value
            float minDistance = Mathf.Infinity;

            // Iterate through all bosses to find the closest one
            foreach (GameObject boss in bosses)
            {
                // Calculate the distance between the bodyguard and the boss
                float distance = Vector3.Distance(transform.position, boss.transform.position);

                // Check if the current boss is closer than the previously found closest boss
                if (distance < minDistance)
                {
                    // Update the closest boss and the minimum distance
                    minDistance = distance;
                    target = boss.transform;
                }
            }

            // Check if a target (boss) was found
            if (target != null)
            {
                // Calculate the offset between the bodyguard and the target
                Vector3 offset = transform.position - target.position;
                float currentDistance = offset.magnitude;

                // Check if the current distance is greater than the maximum allowed distance
                if (currentDistance > maxDistance)
                {
                    // Calculate the direction to the target and set the bodyguard's position within the maximum distance
                    Vector3 direction = offset.normalized;
                    transform.position = target.position + direction * maxDistance;
                }
            }
        }
    }
}