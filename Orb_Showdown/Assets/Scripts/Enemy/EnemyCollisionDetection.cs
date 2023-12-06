using UnityEngine;

public class EnemyCollisionDetection : MonoBehaviour
{
    //only for boss and miniboss
    //might remove access to this variable
    [SerializeField] float pushForce;
    public float PushForce { set { pushForce = value; } }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            Rigidbody enemyRb = collision.gameObject.GetComponent<Rigidbody>();
            Vector3 playerPushForce = collision.gameObject.transform.position - transform.position;
            enemyRb.AddForce(playerPushForce * pushForce, ForceMode.Impulse);
        }
    }
}