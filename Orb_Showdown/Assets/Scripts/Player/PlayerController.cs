using System.Collections;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    #region Variables

    float speed;
    public float Speed { get { return speed; } set { speed = value; } }

    bool isBlue;
    Vector3 oldScale;

    Rigidbody playerRB;
    GameObject focalPoint;
    Animator animator;
    DeathHandler death;

    #endregion

    void Start()
    {
        playerRB = GetComponent<Rigidbody>();
        animator = GetComponent<Animator>();
        focalPoint = GameObject.Find("Focal Point");
        death = FindObjectOfType<DeathHandler>();

        Vector3 startPos = Vector3.zero;
        transform.position = startPos;

        speed = 5f;
        oldScale = transform.localScale;
    }

    void Update()
    {
        CheckIfBlue();

        Move();
        KillPlayer();
    }

    #region Update Methods

    void CheckIfBlue()
    {
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
        float forwardInput = Input.GetAxis("Vertical");

        playerRB.AddForce(focalPoint.transform.forward * speed * forwardInput);
    }

    void KillPlayer()
    {
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
        playerRB.velocity = Vector3.zero;
        playerRB.angularVelocity = Vector3.zero;
        Vector3 startPos = Vector3.up;
        transform.position = startPos;
    }

    public void ActivatePickupEffect(string whichOne, bool activate)
    {
        animator.SetBool(whichOne, true);
        StartCoroutine(ResetTrigger(whichOne));
        isBlue = activate;
    }

    IEnumerator ResetTrigger(string name)
    {
        yield return new WaitForSeconds(2.5f);
        animator.SetBool(name, false);
    }

    #endregion
}