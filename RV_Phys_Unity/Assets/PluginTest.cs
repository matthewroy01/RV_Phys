using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public class PluginTest : MonoBehaviour
{
    const string DLL_NAME = "RV_Phys";

    [DllImport(DLL_NAME)]
    public static extern int testAdd(int a, int b);

    void Start()
    {
        Debug.Log(testAdd(1, 2));
    }
}
