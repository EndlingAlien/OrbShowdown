using System.Collections;
using UnityEngine;

public class UIController : MonoBehaviour
{
    [Header("Canvases")]
    [SerializeField] GameObject powerupCanvas;
    [SerializeField] GameObject powerAndPickupCanvas;

    bool playerInMenu;
    public bool PlayerInMenu { get { return playerInMenu; } }

    SpawnManager spawnManager;

    void Start()
    {
        spawnManager = FindObjectOfType<SpawnManager>();
        playerInMenu = false;
    }

    public void ActivateCorrectCanvas(int choice, bool value)
    {
        playerInMenu = true;
        Debug.Log("choice: " + choice + ". And value: " + value);
        if (choice == 1)
        {
            powerAndPickupCanvas.SetActive(value);
        }
        else if (choice == 2)
        {
            powerupCanvas.SetActive(value);
        }
    }

    public void DoneChoosingPowerup()
    {
        StartCoroutine(ResumeGame());
        StartCoroutine(ChangeMenuValue());
    }

    IEnumerator ResumeGame()
    {
        yield return new WaitForSeconds(1.5f);
        spawnManager.PlayerChoosingPowerup = false;
    }

    IEnumerator ChangeMenuValue()
    {
        yield return new WaitForSeconds(2f);
        playerInMenu = false;
    }

}