using System.Collections;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    #region Variables

    // Game configuration variables
    [Header("Game Config")]
    [Tooltip("'Press any key' UI Element in how-to overlay")]
    [SerializeField] Animator playPrompt;
    [Tooltip("How-to-play overlay for Player")]
    [SerializeField] GameObject howToOverlay;
    [Space(5)]

    [Tooltip("Canvas displaying round number")]
    [SerializeField] Canvas gameCanvas;
    [Space(5)]

    [Tooltip("Rocket script reference")]
    [SerializeField] Rockets rocketScript;

    // Flags to control game state
    bool isPlaying;
    public bool IsPlaying { get { return isPlaying; } }

    bool canEnterGame;

    // Script References
    GameObject player;
    GameObject focalPoint;
    SpawnManager spawnManager;
    PickUps pickUps;

    #endregion

    void Awake()
    {
        // Find and set script references
        player = GameObject.Find("Player");
        focalPoint = GameObject.Find("Focal Point");
        spawnManager = FindObjectOfType<SpawnManager>();
        pickUps = FindObjectOfType<PickUps>();

        // Set initial game state
        SetDefaults();
    }

    void SetDefaults()
    {
        // Disable player control and rendering initially
        player.GetComponent<PlayerController>().enabled = false;
        player.GetComponent<MeshRenderer>().enabled = false;
        focalPoint.GetComponent<RotateCamera>().enabled = false;

        canEnterGame = false;
        isPlaying = false;
        gameCanvas.enabled = false;
    }

    void Update()
    {
        // Check if the game is ready for input to start
        if (canEnterGame)
        {
            // Check if any key is pressed to start the game
            if (Input.anyKeyDown)
            {
                // Start the game coroutine
                StartCoroutine(StartGame());
            }
        }
    }

    #region Main Menu Sequence

    public void PressedPlay()
    {
        // Coroutine to display play prompt and enable starting the game
        StartCoroutine(DisplayPlayPrompt());
    }

    IEnumerator DisplayPlayPrompt()
    {
        // Display play prompt animation
        playPrompt.SetTrigger("canPlay");
        yield return new WaitForSeconds(4);
        canEnterGame = true;
    }

    IEnumerator StartGame()
    {
        // Disable how-to-play overlay and enable player control and rendering
        canEnterGame = false;
        howToOverlay.SetActive(false);
        yield return new WaitForSeconds(1.5f);
        player.GetComponent<MeshRenderer>().enabled = true;
        player.GetComponent<PlayerController>().enabled = true;
        focalPoint.GetComponent<RotateCamera>().enabled = true;
        gameCanvas.enabled = true;

        // Coroutine to activate the spawn manager and set the game as playing
        StartCoroutine(ActivateSpawn());
    }

    IEnumerator ActivateSpawn()
    {
        // Delay before activating the spawn manager
        yield return new WaitForSeconds(3.5f);
        spawnManager.PlayerChoosingPowerup = false;

        // Coroutine to activate the "IsPlaying" state
        StartCoroutine(ActivateIsPlaying());
    }

    IEnumerator ActivateIsPlaying()
    {
        // Delay before setting the game as playing
        yield return new WaitForSeconds(6);
        isPlaying = true;
    }

    #endregion

    #region Player Upgrades

    public void PlayerStrength()
    {
        // Increase the push force of the player's collision detection
        player.GetComponent<PlayerCollisionDetection>().PushForce += 0.5f;
    }

    public void PlayerSpeed()
    {
        // Increase the speed of the player
        player.GetComponent<PlayerController>().Speed += 0.5f;
    }

    #endregion

    #region Pickup Upgrades

    public void StarPickup()
    {
        // Increase the duration of the star pickup effect
        pickUps.StarDuration += 1f;
    }

    public void RedPotionPickup()
    {
        // Increase the force of the red potion pickup effect
        pickUps.RedPotionForce += .5f;
    }

    public void RadiationPickup()
    {
        // Increase the duration of the radiation pickup effect
        pickUps.RadDuration += 1f;
    }

    public void RocketPickup()
    {
        // Increase the move speed of the rocket pickup
        rocketScript.MoveSpeed += 2;
    }

    #endregion
}