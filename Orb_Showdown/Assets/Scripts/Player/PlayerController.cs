using System.Collections;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    #region Variables

    // Movement speed of the player
    float speed;
    public float Speed { get { return speed; } set { speed = value; } }

    // Flag to check if the player is in a "blue" state
    bool isBlue;
    // Original scale of the player before turning "blue"
    Vector3 oldScale;

    // References to various components and managers
    Rigidbody playerRB;
    GameObject focalPoint;
    Animator animator;
    DeathHandler death;

    #endregion

    void Start()
    {
        // Get references to components and game objects
        playerRB = GetComponent<Rigidbody>();
        animator = GetComponent<Animator>();
        focalPoint = GameObject.Find("Focal Point");
        death = FindObjectOfType<DeathHandler>();

        // Set the initial position, speed, and scale of the player
        Vector3 startPos = Vector3.zero;
        transform.position = startPos;

        speed = 5f;
        oldScale = transform.localScale;
    }

    void Update()
    {
        // Check if the player is in the "blue" state
        CheckIfBlue();

        // Move the player and check for conditions to kill the player
        Move();
        KillPlayer();
    }

    #region Update Methods

    void CheckIfBlue()
    {
        // Adjust the player's scale based on the "isBlue" flag
        if (isBlue)
        {
            transform.localScale = new Vector3(3, 3, 3);
        }
        else
        {
            transform.localScale = oldScale;
        }
    }

    void Move()
    {
        // Get the vertical input and move the player forward
        float forwardInput = Input.GetAxis("Vertical");
        playerRB.AddForce(focalPoint.transform.forward * speed * forwardInput);
    }

    void KillPlayer()
    {
        // Check if the player has fallen below a certain y-position and trigger death
        if (transform.position.y < -10)
        {
            death.PlayerHasDied();
            Destroy(gameObject);
        }
    }

    #endregion

    #region For scripts

    public void ResetPlayerPosition()
    {
        // Reset the player's position and velocity
        playerRB.velocity = Vector3.zero;
        playerRB.angularVelocity = Vector3.zero;
        Vector3 startPos = Vector3.up;
        transform.position = startPos;
    }

    public void ActivatePickupEffect(string whichOne, bool activate)
    {
        // Activate the specified pickup effect and set the "isBlue" flag
        animator.SetBool(whichOne, true);
        StartCoroutine(ResetTrigger(whichOne));
        isBlue = activate;
    }

    IEnumerator ResetTrigger(string name)
    {
        // Wait for a certain duration and then reset the specified trigger
        yield return new WaitForSeconds(2.5f);
        animator.SetBool(name, false);
    }

    #endregion
}