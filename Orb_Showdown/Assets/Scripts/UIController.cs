using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    #region Variables

    [Header("Canvases")]
    [Tooltip("Player upgrade canvas, for in-between all rounds")]
    [SerializeField] GameObject powerupCanvas;
    [Tooltip("Player and Pickup upgrade Canvases for after Boss/Mini Boss rounds")]
    [SerializeField] GameObject powerAndPickupCanvas;
    [Tooltip("Game Over canvas")]
    [SerializeField] GameObject deathCanvas;
    [SerializeField] GameObject deathOverlay;
    [Tooltip("Game canvas")]
    [SerializeField] GameObject gameCanvas;
    [Space(5)]

    [Header("Round Text Elements")]
    [Tooltip("Reference to Round Text that will display every round")]
    [SerializeField] Animator roundTextAnim;
    [Tooltip("Round Text element in corner")]
    [SerializeField] TextMeshProUGUI roundText;

    bool playerInMenu;
    public bool PlayerInMenu { get { return playerInMenu; } }

    int roundNum;

    SpawnManager spawnManager;

    #endregion

    void Start()
    {
        spawnManager = FindObjectOfType<SpawnManager>();
        playerInMenu = false;
    }

    void Update()
    {
        roundText.text = "Round: " + roundNum;
    }

    #region Power and Pickup Canvas Sequence

    // Activate the correct canvas based on the provided choice
    public void ActivateCorrectCanvas(int choice, bool value)
    {
        playerInMenu = true;
        if (choice == 1)
        {
            powerAndPickupCanvas.SetActive(value);
        }
        else if (choice == 2)
        {
            powerupCanvas.SetActive(value);
        }
    }

    // Coroutine to resume the game after choosing powerups
    public void DoneChoosingPowerup()
    {
        StartCoroutine(ResumeGame());
        StartCoroutine(ChangeMenuValue());
    }

    // Coroutine to resume the game after a delay
    IEnumerator ResumeGame()
    {
        yield return new WaitForSeconds(1.5f);
        spawnManager.PlayerChoosingPowerup = false;
    }

    // Coroutine to change the menu value after a delay
    IEnumerator ChangeMenuValue()
    {
        yield return new WaitForSeconds(7f);
        playerInMenu = false;
    }

    #endregion

    // Update the round number and display corresponding text
    public void UpdateRoundNum(int num)
    {
        roundNum = num;
        if (roundNum % 10 == 0)
        {
            roundTextAnim.GetComponent<TextMeshProUGUI>().text = "BOSS FIGHT \n Start";
        }
        else if (roundNum % 5 == 0)
        {
            roundTextAnim.GetComponent<TextMeshProUGUI>().text = "MINI BOSS FIGHT \n Start";
        }
        else
        {
            roundTextAnim.GetComponent<TextMeshProUGUI>().text = "Round: " + roundNum + "\n Start";
        }
        roundTextAnim.SetTrigger("playAnim");
    }

    // Activate the death canvas and deactivate the game canvas upon player death
    public void PlayerDeath()
    {
        deathCanvas.SetActive(true);
        gameCanvas.SetActive(false);
    }

    // Restart the game after a delay
    public void RestartGame()
    {
        deathOverlay.SetActive(true);
        deathOverlay.GetComponent<Animator>().SetBool("canPlay", true);
        StartCoroutine(WaitForAnimAndReload());
    }

    // Coroutine to wait for the animation to finish and reload the scene
    IEnumerator WaitForAnimAndReload()
    {
        yield return new WaitForSeconds(5);
        SceneManager.LoadScene(0);
    }

}