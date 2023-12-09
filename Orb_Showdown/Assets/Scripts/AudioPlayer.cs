using UnityEngine;

public class AudioPlayer : MonoBehaviour
{
    public static AudioPlayer Instance;

    [SerializeField] AudioSource audioSource;

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





