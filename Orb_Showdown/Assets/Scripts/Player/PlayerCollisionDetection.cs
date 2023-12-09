using UnityEngine;

public class PlayerCollisionDetection : MonoBehaviour
{

    #region Variables

    [SerializeField] float pushForce;
    public float PushForce { get { return pushForce; } set { pushForce = value; } }

    float oldPushForce;
    public float OldPushForce { get { return oldPushForce; } }

    string pickUpName;
    PickUps pickUps;
    Rigidbody enemyRb;

    #endregion

    void OnTriggerEnter(Collider other)
    {
        pickUps = FindObjectOfType<PickUps>();

        if (!pickUps.HasPickup)
        {
            pickUpName = other.gameObject.tag;
            oldPushForce = pushForce;
            pickUps.ActivateCorrectPickUp(pickUpName);
            Destroy(other.gameObject);
        }
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Enemy") || collision.gameObject.CompareTag("Boss") || collision.gameObject.CompareTag("MiniBoss"))
        {
            pickUps = FindObjectOfType<PickUps>();
            if (pickUps.HasPickup)
            {
                if (collision.gameObject.CompareTag("Enemy"))
                {
                    if (pickUpName == "Rad")
                    {
                        EnemyController enemyController = collision.gameObject.GetComponent<EnemyController>();
                        enemyController.HasTurned = true;
                    }
                }
            }
            enemyRb = collision.gameObject.GetComponent<Rigidbody>();
            Vector3 playerPushForce = collision.gameObject.transform.position - transform.position;
            enemyRb.AddForce(playerPushForce * pushForce, ForceMode.Impulse);
        }
    }
}