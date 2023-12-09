using UnityEngine;

public class RotateCamera : MonoBehaviour
{
    // Rotation speed for the camera
    [SerializeField] float rotationSpeed;

    // Update is called once per frame
    void Update()
    {
        // Get the horizontal input for camera rotation
        float horizontalInput = Input.GetAxis("Horizontal");

        // Rotate the camera around the Y-axis based on the input and rotation speed
        transform.Rotate(Vector3.up, horizontalInput * Time.deltaTime * rotationSpeed);
    }
}