using UnityEngine;
using System.Collections;

public class JumpingBallViewTrigger : MonoBehaviour
{
		
		#region PUBLIC_MEMBER_VARIABLES
	public float activationTime = 1.0f;
	public Material focusedMaterial;
	public Material nonFocusedMaterial;

	public bool Focused { get; set; }
		#endregion // PUBLIC_MEMBER_VARIABLES
		
		
		#region PRIVATE_MEMBER_VARIABLES
	private float mFocusedTime = 0;
	private bool mTriggered = false;
	private JumpingBallViewTrigger mJumpingBall;
		#endregion // PRIVATE_MEMBER_VARIABLES
		
		
		#region MONOBEHAVIOUR_METHODS
	void Start ()
	{
		mJumpingBall = FindObjectOfType<JumpingBallViewTrigger> ();
		mTriggered = false;
		mFocusedTime = 0;
		Focused = false;
		GetComponent<Renderer> ().material = nonFocusedMaterial;
	}
		
	void Update ()
	{
		if (mTriggered) 
			return;
			
		UpdateMaterials (Focused);
			
		if (Focused) {
			// Update the "focused state" time
			mFocusedTime += Time.deltaTime;
			if (mFocusedTime > activationTime) {
				mTriggered = true;
				mFocusedTime = 0;
					
				// Activate transition from AR to VR or vice versa

			}
		} else {
			// Reset the "focused state" time
			mFocusedTime = 0;
		}
	}
		#endregion // MONOBEHAVIOUR_METHODS
		
		
		#region PRIVATE_METHODS
	private void UpdateMaterials (bool focused)
	{
		Renderer meshRenderer = GetComponent<Renderer> ();
		if (focused) {
			if (meshRenderer.material != focusedMaterial)
				meshRenderer.material = focusedMaterial;
		} else {
			if (meshRenderer.material != nonFocusedMaterial)
				meshRenderer.material = nonFocusedMaterial;
		}
			
		float t = focused ? Mathf.Clamp01 (mFocusedTime / activationTime) : 0;
		foreach (var rnd in GetComponentsInChildren<Renderer>()) {
			if (rnd.material.shader.name.Equals ("Custom/SurfaceScan")) {
				rnd.material.SetFloat ("_ScanRatio", t);
			}
		}
	}
		
	void ExplodeBall()
	{
		Vector3 explosionPos = transform.position;
		Collider[] colliders = Physics.OverlapSphere(explosionPos, 5.0f);
		foreach (Collider hit in colliders) {
			Rigidbody rb = hit.GetComponent<Rigidbody>();
			
			if (rb != null)
				rb.AddExplosionForce(10.0f, explosionPos, 5.0f, 3.0F);
			
		}
	}

	private IEnumerator ResetAfter (float seconds)
	{
		Debug.Log ("Resetting View trigger after: " + seconds);
			
		yield return new WaitForSeconds (seconds);
			
		Debug.Log ("Resetting View trigger: " + this.gameObject.name);
			
		// Reset variables
		mTriggered = false;
		mFocusedTime = 0;
		Focused = false;
		UpdateMaterials (false);
	}
		#endregion // PRIVATE_METHODS
}
	

