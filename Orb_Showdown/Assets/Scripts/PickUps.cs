using System.Collections;
using UnityEngine;

public class PickUps : MonoBehaviour
{

    #region Variables

    [Tooltip("Prefab rocket for fire pickup")]
    [SerializeField] GameObject rocketPrefab;
    [Space(5)]

    [Tooltip("Script refrence to EnemyController")]
    [SerializeField] EnemyController enemy;

    bool hasPickup;
    public bool HasPickup { get { return hasPickup; } }

    bool radActive;
    public bool RadActive { get { return radActive; } }

    //remove serialization in the future
    //Pickup force variables
    [SerializeField] float starForce = 12;
    [SerializeField] float redPotionForce = 5;

    //Storage variables
    float oldPushForce;
    float oldMoveSpeed;

    //Indicator variables
    Vector3 indicatorPos;
    float indicatorHeight;

    //Rocket variables
    bool rocketsActive;
    Coroutine rocketsCoroutine;

    //Player variables
    GameObject player;
    PlayerCollisionDetection playerCollision;
    PlayerController playerController;

    #endregion

    void Start()
    {
        player = GameObject.Find("Player");
        playerCollision = player.GetComponent<PlayerCollisionDetection>();
        playerController = player.GetComponent<PlayerController>();

        indicatorPos = new Vector3(player.transform.position.x, indicatorHeight, player.transform.position.z);

        rocketsActive = false;
        radActive = false;
        hasPickup = false;
    }

    void Update()
    {
        indicatorPos = new Vector3(player.transform.position.x, indicatorHeight, player.transform.position.z);
        transform.position = indicatorPos;

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
                    //finish when spawn manager is working
                    //kill all enemies and start new round,
                    //corutine delay for start new round
                    //want to see enemies blip out like bubbles
                    Debug.Log("Picked Up Trophy, Does not have indicator");
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
                    Debug.Log("Pickup not recognized!!!!");
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

    //upgrade duration
    IEnumerator StarCountdown(string name)
    {
        FindCorrectIndicator(name, true);
        StoreAndSetPushForce(playerCollision.OldPushForce, starForce, true);
        yield return new WaitForSeconds(4);
        StoreAndSetPushForce(oldPushForce, 0, false);
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }

    //upgrade force
    IEnumerator RedPotionCountdown(string name)
    {
        FindCorrectIndicator(name, true);
        StoreAndSetPushForce(playerCollision.OldPushForce, redPotionForce, true);
        yield return new WaitForSeconds(15);
        StoreAndSetPushForce(oldPushForce, 0, false);
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }

    //upgrade duration
    IEnumerator RadiationCountdown(string name)
    {
        radActive = true;
        FindCorrectIndicator(name, true);
        yield return new WaitForSeconds(8);
        FindCorrectIndicator(name, false);
        radActive = false;
        hasPickup = false;
    }

    //cant upgrade
    IEnumerator BluePotionCountdown(string name)
    {
        playerController.ActivatePickupEffect("isBlue", true);
        FindCorrectIndicator(name, true);
        yield return new WaitForSeconds(15);
        playerController.ActivatePickupEffect("isNotBlue", false);
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }

    //cant upgrade
    IEnumerator LightningCountdown(string name)
    {
        FindCorrectIndicator(name, true);
        StoreAndSetMoveSpeed(enemy.MoveSpeed, true);
        yield return new WaitForSeconds(6);
        StoreAndSetMoveSpeed(oldMoveSpeed, false);
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }

    //upgrade force(rocket speed)
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
            GameObject newRocket = Instantiate(rocketPrefab, transform.position, Quaternion.identity);
            yield return new WaitForSeconds(.5f);
        }
        rocketsCoroutine = null;
    }

    #endregion

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