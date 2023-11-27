using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [SerializeField] float speed = 2.5f;
    [SerializeField] float jumpForce = 10;
    [SerializeField] float gravityForce = 20;
    [SerializeField] float downSpeed = 20;

    Rigidbody playerRB;
    GameObject focalPoint;


    void Start()
    {
        playerRB = GetComponent<Rigidbody>();
        focalPoint = GameObject.Find("Focal Point");
    }

    void Update()
    {
        float forwardInput = Input.GetAxis("Vertical");

        playerRB.AddForce(focalPoint.transform.forward * speed * forwardInput);

        if (transform.position.y < -10)
        {
            Destroy(gameObject);
        }

    }

}
