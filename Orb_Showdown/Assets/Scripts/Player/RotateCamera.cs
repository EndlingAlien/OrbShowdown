using UnityEngine;

public class RotateCamera : MonoBehaviour
{
    [SerializeField] float rotationSpeed;

    void Update()
    {
        float horizontalInput = Input.GetAxis("Horizontal");
        transform.Rotate(Vector3.up, horizontalInput * Time.deltaTime * rotationSpeed);
    }
}