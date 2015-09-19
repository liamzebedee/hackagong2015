using UnityEngine;
using System.Collections;

public class PlaneBehavior : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void StartFallingDown()
	{
	  Rigidbody rb = GetComponent<Rigidbody>();
		rb.AddForce (Physics.gravity);
	}
}
