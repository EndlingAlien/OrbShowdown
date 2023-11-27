using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    private Rigidbody playerRB;
    private GameObject focalPoint;
    public float speed = 2.5f;
    public float jumpForce = 10;
    public float gravityForce = 20;
    public float downSpeed = 20;

    

    //for bounce powerup
    public bool hasBouncePowerup = false;
    private float bouncePowerupStrength = 15.0f;
    public GameObject bouncePowerupIndicator;

    ////for rocket powerup
    //public bool hasRocketPowerup = false;
    //private float rocketPowerupStrength = 15.0f;
    //public GameObject rocketPowerupIndicator;

    ////for jump powerup
    //public bool hasJumpPowerup = false;
    //private float jumpPowerupStrength = 15.0f;
    //public GameObject jumpPowerupIndicator;

    // Start is called before the first frame update
    void Start()
    {
        playerRB = GetComponent<Rigidbody>();
        focalPoint = GameObject.Find("Focal Point");

    }

    // Update is called once per frame
    void Update()
    {
        float forwardInput = Input.GetAxis("Vertical");
        playerRB.AddForce(focalPoint.transform.forward * speed * forwardInput);

        bouncePowerupIndicator.transform.position = transform.position + new Vector3(0, -0.5f, 0);
        //rocketPowerupIndicator.transform.position = transform.position + new Vector3(0, -0.5f, 0);
        //jumpPowerupIndicator.transform.position = transform.position + new Vector3(0, 1.5f, 0);

    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Bounce"))
        {
            Debug.Log("Has bounce");
            Destroy(other.gameObject);
            hasBouncePowerup = true;
            bouncePowerupIndicator.SetActive(true);
            StartCoroutine(BounceCountdown());
        }
        //else if (other.CompareTag("Rocket"))
        //{
        //    Debug.Log("Has rocket");
        //    Destroy(other.gameObject);
        //    hasRocketPowerup = true;
        //    rocketPowerupIndicator.SetActive(true);
        //    StartCoroutine(RocketCountdown());
        //}
        //else if (other.CompareTag("Jump"))
        //{
        //    Debug.Log("Has jump");
        //    Destroy(other.gameObject);
        //    hasJumpPowerup = true;
        //    jumpPowerupIndicator.SetActive(true);
        //    StartCoroutine(JumpCountdown());
        //}
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.CompareTag("Enemy") && hasBouncePowerup)
        {
            Rigidbody enemyRb = collision.gameObject.GetComponent<Rigidbody>();
            Vector3 awayFromPlayer = (collision.gameObject.transform.position - transform.position);

            Debug.Log("Player has collided with: " + collision.gameObject.name + ",with power up status set to: " + hasBouncePowerup);
            enemyRb.AddForce(awayFromPlayer * bouncePowerupStrength, ForceMode.Impulse);
            
        }
        //else if (collision.gameObject.CompareTag("Enemy") && hasJumpPowerup)
        //{
        //    Rigidbody enemyRb = collision.gameObject.GetComponent<Rigidbody>();
        //    Debug.Log("Player has collided with: " + collision.gameObject.name + ",with power up status set to: " + hasJumpPowerup);

            
        //}
        //else if (collision.gameObject.CompareTag("Enemy") && hasRocketPowerup)
        //{
        //    Rigidbody enemyRb = collision.gameObject.GetComponent<Rigidbody>();
        //    Debug.Log("Player has collided with: " + collision.gameObject.name + ",with power up status set to: " + hasRocketPowerup);
            

        //}
    }

    IEnumerator BounceCountdown()
    {
        yield return new WaitForSeconds(10);
        hasBouncePowerup = false;
        bouncePowerupIndicator.SetActive(false);
    }

    //IEnumerator RocketCountdown()
    //{
    //    yield return new WaitForSeconds(5);
    //    hasRocketPowerup = false;
    //    rocketPowerupIndicator.SetActive(false);
    //}

    //IEnumerator JumpCountdown()
    //{
    //    yield return new WaitForSeconds(8);
    //    hasJumpPowerup = false;
    //    jumpPowerupIndicator.SetActive(false);
    //}

}
