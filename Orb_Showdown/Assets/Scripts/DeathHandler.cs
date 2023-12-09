using UnityEngine;

public class DeathHandler : MonoBehaviour
{
    [SerializeField] ParticleSystem islandFog;
    [SerializeField] SpawnManager spawnManager;
    [SerializeField] UIController uIController;

    public void PlayerHasDied()
    {
        spawnManager.PlayerDeath();
        uIController.PlayerDeath();
       var module = islandFog.main;
       module.startColor = new Color(0.7169f, 0.1849f, 0, 1);
    }
}
