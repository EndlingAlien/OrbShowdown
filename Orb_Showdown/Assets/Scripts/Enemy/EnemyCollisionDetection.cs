using UnityEngine;

public class EnemyCollisionDetection : MonoBehaviour
{
    float pushForce;
    public float PushForce { get { return pushForce; } set { pushForce = value; } }

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