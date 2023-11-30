using System.Collections;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [SerializeField] float speed = 2.5f;
    public float lerpSpeed = 2f;

    Rigidbody playerRB;
    GameObject focalPoint;
    Animator animator;

    Vector3 oldScale;

    bool isBlue;


    void Start()
    {
        Vector3 startPos = Vector3.zero;
        transform.position = startPos;
        playerRB = GetComponent<Rigidbody>();
        animator = GetComponent<Animator>();

        oldScale = transform.localScale;

        focalPoint = GameObject.Find("Focal Point");
    }

    void Update()
    {
        if (isBlue)
        {
            transform.localScale = new Vector3(3, 3, 3);
        }
        else
        {
            transform.localScale = oldScale;
        }

        Move();
        KillPlayer();
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

    public IEnumerator LerpYPosition(float targetY, float duration)
    {
        //work on this
        //player is jittery when lerping
        float elapsedTime = 0f;
        float startY = transform.position.y;
        float timeToLerp = duration / 2f;

        while (elapsedTime < timeToLerp)
        {
            transform.position = new Vector3(transform.position.x, Mathf.Lerp(startY, targetY, elapsedTime / timeToLerp), transform.position.z);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        // Ensure the position is exactly the target position after the first half of the duration
        transform.position = new Vector3(transform.position.x, targetY, transform.position.z);

        // Reset elapsed time for the second half of the lerp
        elapsedTime = 0f;

        while (elapsedTime < timeToLerp)
        {
            transform.position = new Vector3(transform.position.x, Mathf.Lerp(targetY, startY, elapsedTime / timeToLerp), transform.position.z);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        // Ensure the position is exactly the starting position after the second half of the duration
        transform.position = new Vector3(transform.position.x, startY, transform.position.z);
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
