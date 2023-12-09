using UnityEngine;

public class AudioPlayer : MonoBehaviour
{
    // Singleton instance
    public static AudioPlayer Instance;

    // Reference to the AudioSource component
    [SerializeField] AudioSource audioSource;

    // Awake is called when the script instance is being loaded
    void Awake()
    {
        // Check if an instance already exists
        if (Instance == null)
        {
            // If not, set the instance to this
            Instance = this;

            // Keep the GameObject alive between scenes
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            // If an instance already exists, destroy this GameObject
            Destroy(gameObject);
        }
    }
}