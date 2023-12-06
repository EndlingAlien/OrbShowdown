using UnityEngine;

public class RotateCamera : MonoBehaviour
{
    //remove serialization in future, can be changed in settings
    [SerializeField] float rotationSpeed;

    void Update()
    {
        float horizontalInput = Input.GetAxis("Horizontal");
        transform.Rotate(Vector3.up, horizontalInput * Time.deltaTime * rotationSpeed);
    }
}