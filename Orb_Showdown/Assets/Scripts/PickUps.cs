using System.Collections;
using UnityEngine;

public class PickUps : MonoBehaviour
{

    #region Variables

    [Tooltip("Prefab rocket for fire pickup")]
    [SerializeField] GameObject rocketPrefab;
    [Space(5)]

    [SerializeField] GameObject lightningParticlePrefab;

    [Tooltip("Script refrence to EnemyController")]
    [SerializeField] EnemyController enemy;

    //for GameManager
    float redPotionForce;
    public float RedPotionForce { get { return redPotionForce; } set { redPotionForce = value; } }

    float radDuration;
    public float RadDuration { get { return radDuration; } set { radDuration = value; } }

    float starDuration;
    public float StarDuration { get { return starDuration; } set { starDuration = value; } }

    //Pickup variables
    bool hasPickup;
    public bool HasPickup { get { return hasPickup; } set { hasPickup = value; } }

    bool radActive;
    public bool RadActive { get { return radActive; } }

    float starForce;

    //Storage variables
    float oldPushForce;
    float oldMoveSpeed;

    //Indicator variables
    Vector3 indicatorPos;
    float indicatorHeight;

    //Rocket variables
    bool rocketsActive;
    public bool RocketsActive { get { return rocketsActive; } set { rocketsActive = value; } }
    Coroutine rocketsCoroutine;

    //Script Refrences
    GameObject player;
    PlayerCollisionDetection playerCollision;
    PlayerController playerController;
    SpawnManager spawnManager;

    #endregion

    void Start()
    {
        player = GameObject.Find("Player");
        playerCollision = player.GetComponent<PlayerCollisionDetection>();
        playerController = player.GetComponent<PlayerController>();
        spawnManager = FindObjectOfType<SpawnManager>();

        SetDefaults();
    }

    void SetDefaults()
    {
        indicatorPos = new Vector3(player.transform.position.x, indicatorHeight, player.transform.position.z);

        rocketsActive = false;
        radActive = false;
        hasPickup = false;

        starForce = 12;
        redPotionForce = 5;
        radDuration = 8;
        starDuration = 4;
    }

    void Update()
    {
        if (player != null)
        {
            indicatorPos = new Vector3(player.transform.position.x, indicatorHeight, player.transform.position.z);
            transform.position = indicatorPos;
        }

        if (rocketsActive && rocketsCoroutine == null)
        {
            rocketsCoroutine = StartCoroutine(RocketSpawnCoroutine());
        }
    }

    #region PickUp Config

    public void ActivateCorrectPickUp(string name)
    {
        if (!hasPickup)
        {
            switch (name)
            {
                case "Trophy":
                    spawnManager.StartDeletingEnemies();
                    break;

                case "Star":
                    StartCoroutine(StarCountdown(name));
                    break;

                case "BPotion":
                    StartCoroutine(BluePotionCountdown(name));
                    break;

                case "RPotion":
                    StartCoroutine(RedPotionCountdown(name));
                    break;

                case "Rad":
                    StartCoroutine(RadiationCountdown(name));
                    break;

                case "Lightning":
                    StartCoroutine(LightningCountdown(name));
                    break;

                case "Fire":
                    StartCoroutine(FireCountdown(name));
                    break;

                default:
                    break;
            }
            hasPickup = true;
        }
    }

    void FindCorrectIndicator(string name, bool active)
    {
        string fullName = name + "_Indicator";
        foreach (Transform child in transform)
        {
            if (child.name == fullName)
            {
                if (fullName == "Star_Indicator")
                {
                    indicatorHeight = 0;
                    child.gameObject.SetActive(active);
                }
                else
                {
                    indicatorHeight = -0.5f;
                    child.gameObject.SetActive(active);
                }
            }
            else if (child.name == null)
            {
                return;
            }
        }
    }

    #endregion

    #region Coroutines

    IEnumerator StarCountdown(string name)
    {
        FindCorrectIndicator(name, true);
        StoreAndSetPushForce(playerCollision.OldPushForce, starForce, true);
        yield return new WaitForSeconds(starDuration);
        StoreAndSetPushForce(oldPushForce, 0, false);
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }

    IEnumerator RedPotionCountdown(string name)
    {
        FindCorrectIndicator(name, true);
        StoreAndSetPushForce(playerCollision.OldPushForce, redPotionForce, true);
        yield return new WaitForSeconds(15);
        StoreAndSetPushForce(oldPushForce, 0, false);
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }

    IEnumerator RadiationCountdown(string name)
    {
        radActive = true;
        FindCorrectIndicator(name, true);
        yield return new WaitForSeconds(radDuration);
        FindCorrectIndicator(name, false);
        radActive = false;
        hasPickup = false;
    }

    IEnumerator BluePotionCountdown(string name)
    {
        playerController.ActivatePickupEffect("isBlue", true);
        FindCorrectIndicator(name, true);
        yield return new WaitForSeconds(15);
        playerController.ActivatePickupEffect("isNotBlue", false);
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }

    IEnumerator LightningCountdown(string name)
    {
        FindCorrectIndicator(name, true);
        CreateLightning();
        StoreAndSetMoveSpeed(enemy.MoveSpeed, true);
        yield return new WaitForSeconds(6);
        StoreAndSetMoveSpeed(oldMoveSpeed, false);
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }

    IEnumerator FireCountdown(string name)
    {
        rocketsActive = true;
        FindCorrectIndicator(name, true);
        yield return new WaitForSeconds(10);
        rocketsActive = false;
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }

    IEnumerator RocketSpawnCoroutine()
    {
        while (rocketsActive)
        {
            Instantiate(rocketPrefab, transform.position, Quaternion.identity);
            yield return new WaitForSeconds(.5f);
        }
        rocketsCoroutine = null;
    }

    #endregion

    void CreateLightning()
    {
        EnemyController[] enemies = FindObjectsOfType<EnemyController>();

        foreach (EnemyController enemyController in enemies)
        {
            if (enemyController != null)
            {
                Vector3 particlePosition = new Vector3(enemyController.transform.position.x, 8f, enemyController.transform.position.z);

                Instantiate(lightningParticlePrefab, particlePosition, Quaternion.identity);
            }
        }

        Destroy(gameObject);
    }


    #region Store and Set Variables

    void StoreAndSetPushForce(float oldForce, float newForce, bool changeValue)
    {
        if (changeValue)
        {
            oldPushForce = oldForce;
            playerCollision.PushForce = newForce;
        }
        else if (!changeValue)
        {
            playerCollision.PushForce = oldForce;
        }
    }

    void StoreAndSetMoveSpeed(float oldSpeed, bool changeValue)
    {
        EnemyController[] enemyControllers = FindObjectsOfType<EnemyController>();
        if (changeValue)
        {
            oldMoveSpeed = oldSpeed;
            foreach (EnemyController enemy in enemyControllers)
            {
                Rigidbody rb = enemy.GetComponent<Rigidbody>();
                rb.velocity = Vector3.zero;
                rb.angularVelocity = Vector3.zero;
                enemy.MoveSpeed = 0;
            }
        }
        else if (!changeValue)
        {
            foreach (EnemyController enemy in enemyControllers)
            {
                enemy.MoveSpeed = oldSpeed;
            }
        }
    }

    #endregion

}