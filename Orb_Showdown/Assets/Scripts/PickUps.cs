using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class PickUps : MonoBehaviour
{
    bool hasPickup;
    public bool HasPickup { get { return hasPickup; } }



    Vector3 indicatorPos;
    GameObject player;
    float indicatorHeight;

    void Start()
    {
        player = GameObject.Find("Player");
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
                    //kill all enemies and start new round,
                    //corutine delay for start new round
                    //want to see enemies blip out like bubbles
                    Debug.Log("Picked Up Trophy, Does not have indicator");
                    break;

                case "Star":
                //corutine, playercollisonsDetection
                //change player ball color to rainbow(anim??) 
                // if player touches other enemies, they get shot back, lasts like 4 seconds
                    Debug.Log("Picked Up Star, Does not have indicator");
                    break;

                case "BPotion":
                //playercontroller, corutine
                //increase size of player
                    Debug.Log("Picked Up BPotion, Does not have indicator");
                    break;

                case "RPotion":
                //corutine, playercolission(pushforce)
                //increase push force
                    FindCorrectIndicator(name, true);
                    StartCoroutine(BounceCountdown(name));
                    break;

                case "YPotion": 
                //playercontroller
                //lerp gently up on y axis like 3 times
                //maybe increase mass so player doesnt get flung or
                //   something if they land on enemy
                    FindCorrectIndicator(name, true);
                    StartCoroutine(BounceCountdown(name));
                    break;

                case "Rad":
                //corutine, playercollison, enemycontroller
                //if player touches enemy, enemy turns to "zombie" and attacks other enemies
                //if no enemies present, and routine is not done, enemy will fling themselves off the island
                    FindCorrectIndicator(name, true);
                    StartCoroutine(BounceCountdown(name));
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



    IEnumerator BounceCountdown(string name)
    {
        //method for actual bounce mechanism is
        yield return new WaitForSeconds(5);
        FindCorrectIndicator(name, false);
        hasPickup = false;
    }



    //for bounce powerup
    public bool hasBouncePowerup = false;
    private float bouncePowerupStrength = 15.0f;



}
