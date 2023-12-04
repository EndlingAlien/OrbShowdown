using UnityEngine;

//attach this to player
public class PlayerCollisionDetection : MonoBehaviour
{
    //can increase with permanent powerup
    [SerializeField] float pushForce;
    public float PushForce { set { pushForce = value; } }

    float oldPushForce;
    public float OldPushForce { get { return oldPushForce; } }

    PickUps pickUps;
    Rigidbody enemyRb;
    string pickUpName;


    //for powerups
    void OnTriggerEnter(Collider other)
    {
        pickUps = FindObjectOfType<PickUps>();

        if (!pickUps.HasPickup)
        {
            pickUpName = other.gameObject.tag;
            oldPushForce = pushForce;
            pickUps.ActivateCorrectPickUp(pickUpName);
            //failSafe fo when player picks up poweup
            //Vector3 playerToEnemy = enemyRb.position - transform.position;
            //enemyRb.AddForce(playerToEnemy.normalized * 0.5f, ForceMode.Impulse);
            Destroy(other.gameObject);
        }
    }


    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Enemy"))
        {
            pickUps = FindObjectOfType<PickUps>();
            if (pickUps.HasPickup)
            {
                if (pickUpName == "Rad")
                {
                    EnemyController enemyController = collision.gameObject.GetComponent<EnemyController>();
                    enemyController.HasTurned = true;
                }
            }
            enemyRb = collision.gameObject.GetComponent<Rigidbody>();
            Vector3 playerPushForce = collision.gameObject.transform.position - transform.position;
            enemyRb.AddForce(playerPushForce * pushForce, ForceMode.Impulse);
        }
    }

}