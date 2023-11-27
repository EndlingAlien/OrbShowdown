using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//attach this to player
public class PlayerCollisionDetection : MonoBehaviour
{


    //for powerups
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Bounce"))
        {
            Debug.Log("Has bounce");
            Destroy(other.gameObject);
            // hasBouncePowerup = true;
            // StartCoroutine(BounceCountdown());
            //wheere you call method in powerUps script
        }
    }

    //for enemies
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Enemy"))
        {
            //have player apply force to enemy

        }//have all powerUp Stuff

        // else if (collision.gameObject.CompareTag("Enemy") && hasBouncePowerup)
        // {
        //     Rigidbody enemyRb = collision.gameObject.GetComponent<Rigidbody>();
        //     Vector3 awayFromPlayer = (collision.gameObject.transform.position - transform.position);

        //     Debug.Log("Player has collided with: " + collision.gameObject.name + ",with power up status set to: " + hasBouncePowerup);
        //     enemyRb.AddForce(awayFromPlayer * bouncePowerupStrength, ForceMode.Impulse);

        // }
    }

}
