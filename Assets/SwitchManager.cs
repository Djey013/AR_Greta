using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchManager : MonoBehaviour
{
    public GameObject[] _objectInArray;
    public int actualObjNumber = 0;
    public PlaceOnTracker placeScript;
    public void SwitchButton()
    {
        actualObjNumber++;

        if (actualObjNumber >= _objectInArray.Length)
        {
            actualObjNumber = 0;
        }

        Destroy(placeScript._objectToSpawn);
    }
}
