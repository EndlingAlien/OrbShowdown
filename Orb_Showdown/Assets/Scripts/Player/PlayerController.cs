using System.Collections;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    //remove serialization in future, will change with powerup upgrade
    [SerializeField] float speed = 2.5f;
    bool isBlue;
    Vector3 oldScale;

    Rigidbody playerRB;
    GameObject focalPoint;
    Animator animator;

    void Start()
    {
        playerRB = GetComponent<Rigidbody>();
        animator = GetComponent<Animator>();
        focalPoint = GameObject.Find("Focal Point");

        Vector3 startPos = Vector3.zero;
        transform.position = startPos;

        oldScale = transform.localScale;
    }

    void Update()
    {
        CheckIfBlue();

        Move();
        KillPlayer();
    }

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
            Destroy(gameObject);
        }
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
}