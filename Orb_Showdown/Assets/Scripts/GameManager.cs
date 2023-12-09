using System.Collections;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    
    #region Variables

    [Header("Game Config")]
    [Tooltip("'Press any key' UI Elemnt in how to overlay")]
    [SerializeField] Animator playPrompt;
    [Tooltip("How to Play overlay for Player")]
    [SerializeField] GameObject howToOverlay;
    [Space(5)]

    [Tooltip("Canvas displaying round number")]
    [SerializeField] Canvas gameCanvas;
    [Space(5)]

    [Tooltip("Rocket script refrence")]
    [SerializeField] Rockets rocketScript;

    bool isPlaying;
    public bool IsPlaying { get { return isPlaying; } }

    bool canEnterGame;

    //script Refrences
    GameObject player;
    GameObject focalPoint;
    SpawnManager spawnManager;
    PickUps pickUps;

    #endregion

    void Awake()
    {
        player = GameObject.Find("Player");
        focalPoint = GameObject.Find("Focal Point");
        spawnManager = FindObjectOfType<SpawnManager>();
        pickUps = FindObjectOfType<PickUps>();

        SetDefaults();
    }

    void SetDefaults()
    {
        player.GetComponent<PlayerController>().enabled = false;
        player.GetComponent<MeshRenderer>().enabled = false;
        focalPoint.GetComponent<RotateCamera>().enabled = false;

        canEnterGame = false;
        isPlaying = false;
        gameCanvas.enabled = false;
    }

    void Update()
    {
        if (canEnterGame)
        {
            if (Input.anyKeyDown)
            {
                StartCoroutine(StartGame());
            }
        }
    }

    #region Main Menu Sequence

    public void PressedPlay()
    {
        StartCoroutine(DisplayPlayPrompt());
    }

    IEnumerator DisplayPlayPrompt()
    {
        playPrompt.SetTrigger("canPlay");
        yield return new WaitForSeconds(4);
        canEnterGame = true;
    }

    IEnumerator StartGame()
    {
        canEnterGame = false;
        howToOverlay.SetActive(false);
        yield return new WaitForSeconds(1.5f);
        player.GetComponent<MeshRenderer>().enabled = true;
        player.GetComponent<PlayerController>().enabled = true;
        focalPoint.GetComponent<RotateCamera>().enabled = true;
        gameCanvas.enabled = true;
        StartCoroutine(ActivateSpawn());
    }

    IEnumerator ActivateSpawn()
    {
        yield return new WaitForSeconds(3.5f);
        spawnManager.PlayerChoosingPowerup = false;
        StartCoroutine(ActivateIsPlaying());
    }

    IEnumerator ActivateIsPlaying()
    {
        yield return new WaitForSeconds(6);
        isPlaying = true;
    }
    #endregion

    #region Player Upgrades

    public void PlayerStrength()
    {
        player.GetComponent<PlayerCollisionDetection>().PushForce += 0.5f;
    }

    public void PlayerSpeed()
    {
        player.GetComponent<PlayerController>().Speed += 0.5f;
    }

    #endregion

    #region Pickup Upgrades

    public void StarPickup()
    {
        pickUps.StarDuration += 1f;
    }

    public void RedPotionPickup()
    {
        pickUps.RedPotionForce += .5f;
    }

    public void RadiationPickup()
    {
        pickUps.RadDuration += 1f;
    }

    public void RocketPickup()
    {
        rocketScript.MoveSpeed += 2;
    }

    #endregion

}