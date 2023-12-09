using UnityEngine;

public class PlayerCollisionDetection : MonoBehaviour
{
    #region Variables

    // Force applied to enemies upon collision
    [SerializeField] float pushForce;
    public float PushForce { get { return pushForce; } set { pushForce = value; } }

    // Variable to store the old push force for reference
    float oldPushForce;
    public float OldPushForce { get { return oldPushForce; } }

    // Name of the picked-up item
    string pickUpName;
    // Reference to the PickUps script
    PickUps pickUps;
    // Reference to the enemy Rigidbody
    Rigidbody enemyRb;

    #endregion

    // Called when the player enters a trigger collider
    void OnTriggerEnter(Collider other)
    {
        // Find the PickUps script in the scene
        pickUps = FindObjectOfType<PickUps>();

        // Check if the player doesn't have a pickup already
        if (!pickUps.HasPickup)
        {
            // Get the tag of the collided object (pickup)
            pickUpName = other.gameObject.tag;
            // Store the current push force as the old push force
            oldPushForce = pushForce;
            // Activate the correct pickup effect and destroy the pickup object
            pickUps.ActivateCorrectPickUp(pickUpName);
            Destroy(other.gameObject);
        }
    }

    // Called when a collision occurs
    void OnCollisionEnter(Collision collision)
    {
        // Find the PickUps script in the scene
        pickUps = FindObjectOfType<PickUps>();

        // Check if the collided object is an enemy, boss, or mini-boss
        if (collision.gameObject.CompareTag("Enemy") || collision.gameObject.CompareTag("Boss") || collision.gameObject.CompareTag("MiniBoss"))
        {
            // Check if the player has a pickup
            if (pickUps.HasPickup)
            {
                // Check if the collided object is an enemy
                if (collision.gameObject.CompareTag("Enemy"))
                {
                    // Check if the player picked up a "Rad" pickup
                    if (pickUpName == "Rad")
                    {
                        // Get the EnemyController script and set the "HasTurned" flag to true
                        EnemyController enemyController = collision.gameObject.GetComponent<EnemyController>();
                        enemyController.HasTurned = true;
                    }
                }
            }

            // Get the Rigidbody component of the collided object (enemy, boss, mini-boss)
            enemyRb = collision.gameObject.GetComponent<Rigidbody>();
            // Calculate the force direction by subtracting the enemy's position from the player's position
            Vector3 playerPushForce = collision.gameObject.transform.position - transform.position;
            // Apply the calculated force to the enemy's Rigidbody using Impulse force mode
            enemyRb.AddForce(playerPushForce * pushForce, ForceMode.Impulse);
        }
    }
}