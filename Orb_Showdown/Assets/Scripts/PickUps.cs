using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class PickUps : MonoBehaviour
{
    bool hasPickup = false;
    public bool HasPickup { get { return hasPickup; } }

    bool radActive = false;
    public bool RadActive { get { return radActive; } }

    float starForce = 12;
    float redPotionForce = 5;

    float oldPushForce;
    public float followSpeed = 5f;



    Vector3 indicatorPos;
    GameObject player;
    PlayerCollisionDetection playerCollision;
    PlayerController playerController;
    float indicatorHeight;

    void Start()
    {
        player = GameObject.Find("Player");
        playerCollision = player.GetComponent<PlayerCollisionDetection>();
        playerController = player.GetComponent<PlayerController>();
        indicatorPos = new Vector3(player.transform.position.x, indicatorHeight, player.transform.position.z);
        hasPickup = false;
    }

    void Update()
    {
  
            // Update the indicatorPos to match the player's current position
            indicatorPos = new Vector3(player.transform.position.x, indicatorHeight, player.transform.position.z);

            transform.position = indicatorPos;
        

    }

    void FindCorrectIndicator(string name, bool active)
    {
        string fullName = name + "_Indicator";
        foreach (Transform child in transform)
        {
            if (child.name == fullName)
            {
                if (fullName == "YPotion_Indicator")
                {
                    indicatorHeight = 0.9f;
                    child.gameObject.SetActive(active);
                }
                else if (fullName == "Star_Indicator")
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
                Debug.Log("COULD NOT FIND INDICATOR");
            }
        }
    }



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

                case "YPotion":
                    StartCoroutine(YellowPotionCountdown(name));
                    break;

                case "Rad":
                    StartCoroutine(RadiationCountdown(name));
                    break;

                //(maybe temporary, not in final version)
                case "Lightning":
                    //enemycontroller
                    //instantiate vfx lightning over all enemies, causing them to not be able to move(stop looking at player, so player could still push and interc=act) for like 4 seconds
                    //OR cycle through every object in scene holding enemy controller(all enemies in scene) and deactivate it for 4 seconds 
                    FindCorrectIndicator(name, true);
                    break;

                case "Fire":
                    //shoot simple little rockets that target the closest enemy(was in realm pathfinder project) and push them back a bit, should cause force, make script for rockets, include simple lil vfx(make it tiny balls)
                    FindCorrectIndicator(name, true);
                    break;

                default:
                    Debug.Log("Pickup not recognized!!!!");
                    break;
            }
            hasPickup = true;

        }
    }


    IEnumerator StarCountdown(string name)
    {
        FindCorrectIndicator(name, true);
        StoreAndSetPushForce(playerCollision.OldPushForce, starForce, true);
        yield return new WaitForSeconds(4);
        StoreAndSetPushForce(oldPushForce, 0, false);
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }

    IEnumerator RedPotionCountdown(string name)
    {
        FindCorrectIndicator(name, true);
        StoreAndSetPushForce(playerCollision.OldPushForce, redPotionForce, true);
        yield return new WaitForSeconds(8);
        StoreAndSetPushForce(oldPushForce, 0, false);
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }

    IEnumerator RadiationCountdown(string name)
    {
        radActive = true;
        FindCorrectIndicator(name, true);
        yield return new WaitForSeconds(15);
        FindCorrectIndicator(name, false);
        radActive = false;
        hasPickup = false;
    }

    IEnumerator BluePotionCountdown(string name)
    {
        playerController.ActivatePickupEffect("isBlue", true);
        FindCorrectIndicator(name, true);
        yield return new WaitForSeconds(10);
        playerController.ActivatePickupEffect("isNotBlue", false);
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }

    IEnumerator YellowPotionCountdown(string name)
    {
        //work on this
        //player and indicator both jitter
        yield return playerController.LerpYPosition(5, 10);
        // yield return new WaitForSeconds(10);
        hasPickup = false;
    }




    IEnumerator BounceCountdown(string name)
    {
        //method for actual bounce mechanism is
        yield return new WaitForSeconds(5);
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }

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





    //for bounce powerup
    public bool hasBouncePowerup = false;
    private float bouncePowerupStrength = 15.0f;



}
