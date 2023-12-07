using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    GameObject player;
    GameObject focalPoint;
    [SerializeField] Animator playPrompt;

    bool canEnterGame;


    void Awake()
    {
        player = GameObject.Find("Player");
        focalPoint = GameObject.Find("Focal Point");


        PlayerController playerController = player.GetComponent<PlayerController>();
        MeshRenderer playerMesh = player.GetComponent<MeshRenderer>();
        RotateCamera rotateCamera = focalPoint.GetComponent<RotateCamera>();

        playerController.enabled = false;
        playerMesh.enabled = false;
        rotateCamera.enabled = false;

        canEnterGame = false;
    }

    private void Update() {
        if(canEnterGame)
        {
            if(Input.GetKeyDown(KeyCode.Space))
            {
                //activate game
                //maybe reset canentergame or later use any "return to menu" = reload scene
                Debug.Log("CAN PLAY GAME");
            }
        }

//if playing hit this button to pause


    }

    public void PressedPlay()
    {
        StartCoroutine(DisplayPlayPrompt());
    }

    IEnumerator DisplayPlayPrompt()
    {
        playPrompt.SetTrigger("canPlay");
        yield return new WaitForSeconds(5);
        canEnterGame = true;
    }

    void PauseGame()
    {
        //if the player is in the game, pause it
    }

}
