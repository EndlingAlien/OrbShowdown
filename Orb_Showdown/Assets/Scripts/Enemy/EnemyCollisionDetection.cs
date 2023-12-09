using UnityEngine;

public class EnemyCollisionDetection : MonoBehaviour
{
    // The force applied to the player upon collision
    float pushForce;

    // Property to access and modify the pushForce value
    public float PushForce { get { return pushForce; } set { pushForce = value; } }

    // Called when a collision occurs
    void OnCollisionEnter(Collision collision)
    {
        // Check if the colliding object is tagged as "Player"
        if (collision.gameObject.CompareTag("Player"))
        {
            // Get the Rigidbody component of the player
            Rigidbody enemyRb = collision.gameObject.GetComponent<Rigidbody>();

            // Calculate the force direction by subtracting the enemy's position from the player's position
            Vector3 playerPushForce = collision.gameObject.transform.position - transform.position;

            // Apply the calculated force to the player's Rigidbody using Impulse force mode
            enemyRb.AddForce(playerPushForce * pushForce, ForceMode.Impulse);
        }
    }
}