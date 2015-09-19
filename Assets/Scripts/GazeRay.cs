/*============================================================================== 
 * Copyright (c) 2015 Qualcomm Connected Experiences, Inc. All Rights Reserved. 
 * ==============================================================================*/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GazeRay : MonoBehaviour
{
    #region PUBLIC_MEMBER_VARIABLES
	public ViewTrigger[] viewTriggers;
	public int numberOfBalls = 50;
	public JumpingBallViewTrigger jumpingBallModel;
    #endregion // PUBLIC_MEMBER_VARIABLES

	JumpingBallViewTrigger[] jumpingBalls;
	
	void CreateBalls ()
	{
		if (jumpingBalls == null) {
			jumpingBalls = new JumpingBallViewTrigger[numberOfBalls];
			for (int k=0; k< numberOfBalls; k++) {
				jumpingBalls [k] = Instantiate<JumpingBallViewTrigger> (jumpingBallModel) as JumpingBallViewTrigger;
				jumpingBalls[k].transform.position = new Vector3(Random.Range(10,30), Random.Range(10,30), Random.Range(10,30));

			}
		}
	}

    #region MONOBEHAVIOUR_METHODS
	void Update ()
	{
		// Check if the Head gaze direction is intersecting any of the ViewTriggers
		RaycastHit hit;
		Ray cameraGaze = new Ray (this.transform.position, this.transform.forward);
		Physics.Raycast (cameraGaze, out hit, Mathf.Infinity);
		foreach (var trigger in viewTriggers) {
			trigger.Focused = hit.collider && (hit.collider.gameObject == trigger.gameObject);
		}

		CreateBalls ();
		foreach (var ball in jumpingBalls) {
			if (ball!=null)
			{
				ball.Focused = hit.collider && (hit.collider.gameObject == ball.gameObject);
			}
		}
	}
    #endregion // MONOBEHAVIOUR_METHODS
}

