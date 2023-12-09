using UnityEngine;

public class DeathHandler : MonoBehaviour
{
    // Reference to the ParticleSystem for island fog
    [SerializeField] ParticleSystem islandFog;

    // Reference to the SpawnManager
    [SerializeField] SpawnManager spawnManager;

    // Reference to the UIController
    [SerializeField] UIController uIController;

    // Called when the player has died
    public void PlayerHasDied()
    {
        // Notify the SpawnManager that the player has died
        spawnManager.PlayerDeath();

        // Notify the UIController that the player has died
        uIController.PlayerDeath();

        // Access the main module of the islandFog ParticleSystem and set the start color
        var module = islandFog.main;
        module.startColor = new Color(0.7169f, 0.1849f, 0, 1);
    }
}