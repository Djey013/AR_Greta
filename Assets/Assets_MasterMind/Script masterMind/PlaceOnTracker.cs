using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.XR.ARFoundation;
using Button = UnityEngine.UI.Button;

public class PlaceOnTracker : MonoBehaviour
{
    public ARTrackedImageManager imageManager;
    public GameObject _objectToSpawn;
    //public SwitchManager _switchManager;
    //public GameObject _objectLocation;
    
    private void OnEnable()
    {
        imageManager.trackedImagesChanged += ObjectControl;
        
    }

    private void OnDisable()
    {
        imageManager.trackedImagesChanged -= ObjectControl;
        
    }

    private void ObjectControl(ARTrackedImagesChangedEventArgs args)
    {
        if (args.added.Count > 0)
        {
            _objectToSpawn = Instantiate(_objectToSpawn, args.added[0].transform);
            
        }
        
        
        if (args.updated.Count > 0)
        {
            
                _objectToSpawn.transform.position = args.updated[0].transform.position;
                _objectToSpawn.transform.rotation = args.updated[0].transform.rotation;
        }
        

        if (args.removed.Count > 0)
        {
            Destroy(_objectToSpawn);
            
        }

    }
    
}