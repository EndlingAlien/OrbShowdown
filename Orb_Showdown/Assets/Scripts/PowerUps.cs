using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//config all powerups and routines in here
public class PowerUps : MonoBehaviour
{

    //for bounce powerup
    public bool hasBouncePowerup = false;
    private float bouncePowerupStrength = 15.0f;

    IEnumerator BounceCountdown()
    {
        yield return new WaitForSeconds(10);
        hasBouncePowerup = false;
    }

}
