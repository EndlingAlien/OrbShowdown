using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using UnityEngine;

//attach this to player
public class PlayerCollisionDetection : MonoBehaviour
{
    //can increase with permanent powerup
    [SerializeField] float pushForce;

    PickUps pickUps;
    string pickUpName;
    float oldPushForce;


    //for powerups
    void OnTriggerEnter(Collider other)
    {
        pickUps = FindObjectOfType<PickUps>();

        if (!pickUps.HasPickup)
        {
            pickUpName = other.gameObject.tag;

            pickUps.ActivateCorrectPickUp(pickUpName);
            Destroy(other.gameObject);
        }
    }

    //for enemies
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Enemy"))
        {
            pickUps = FindObjectOfType<PickUps>();
            if (pickUps.HasPickup && pickUpName == "RPotion" || pickUpName == "Star")
            {
                Debug.Log("star tings");
                oldPushForce = pushForce;
                pushForce = 25;
                Debug.Log(oldPushForce);
                Debug.Log(pushForce);
            }
            else if (pickUps.HasPickup && pickUpName == "Rad")
            {
                Debug.Log("radiation tings");
            }

            Rigidbody enemyRb = collision.gameObject.GetComponent<Rigidbody>();
            UnityEngine.Vector3 playerPushForce = collision.gameObject.transform.position - transform.position;
            enemyRb.AddForce(playerPushForce * pushForce, ForceMode.Impulse);
            Debug.Log("Player Pushed Enemy");
        }
    }

}
