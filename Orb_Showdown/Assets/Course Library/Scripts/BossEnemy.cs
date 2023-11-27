using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossEnemy : MonoBehaviour
{
    public float speed = 3.0f;
    private Rigidbody enemyRb;
    private GameObject player;

    private Rigidbody playerRb;

    // Start is called before the first frame update
    void Start()
    {
        enemyRb = GetComponent<Rigidbody>();
        player = GameObject.Find("Player");
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 LookDirection = (player.transform.position - transform.position).normalized;

        enemyRb.AddForce(LookDirection * speed);

        if (transform.position.y < -10)
        {
            Destroy(gameObject);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            Rigidbody playerRb = collision.gameObject.GetComponent<Rigidbody>();
            Vector3 awayFromEnemy = (collision.gameObject.transform.position - transform.position);


            playerRb.AddForce(awayFromEnemy, ForceMode.Impulse);

        }
    }
}
