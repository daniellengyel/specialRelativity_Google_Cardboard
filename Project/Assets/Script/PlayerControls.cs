using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine;


/// <summary>
/// Player controls. This class controls the player which moves through the environment. It let's the player move on a line to observe relativistic effects.
/// On the computer, use the arrow keys to move forward. You can only move forward in the direction in which you are looking. This also works by using the 
/// VR camera controls (press option to rotate camera around the vertical axis and use control to rotate around horizontal axis.)
/// </summary>
public class PlayerControls : MonoBehaviour {


	LengthContraction lengthContraction;

	float c;

	Transform myCamera;


	private Rigidbody player;
	/// <summary>
	/// The speed by which to incrmeent the player. This is a units/second value. This is mainly computed in the incrSpeed function.
	/// </summary>
	public float incrSpeed; //units/second

	/// <summary>
	/// The next four fields are for using the mouse as camera control.
	/// </summary>
	private float rotationY = 0f;
	private float sensitivityY = 5f;
	private float rotationX = 0f;
	private float sensitivityX = 5f;

	public float XSpeed = 0; //units/second

	public Vector3 lastForward;
	public Vector3 lastRight;

	public bool frontWall;
	public bool backWall;

	public Text guiText;


	void Start () {


		myCamera = transform.FindChild ("Camera");
		lengthContraction = GameObject.Find ("Town").GetComponent<LengthContraction> ();

		transform.forward = -Vector3.right;
		adjustDir();
		c = lengthContraction.c;
		incrSpeed = newIncr();
		
	}
		
	/// <summary>
	/// The central loop of the player. It controls how the player is moving and what it should be doing. Crucially, it updates
	/// its own speed so LengthContraction can behave properly.
	/// </summary>
	void FixedUpdate () {
//		guiText.text = Mathf.Floor(Mathf.Abs(XSpeed/c * 100))/100 + "c";

		//if speed is greater than five and i am not currently infront of a wall.
		if(!(Mathf.Abs(XSpeed) < 5) && !backWall && !frontWall){
			//works because X speed indicates the direction. Moving along Vector3.right
			transform.position = transform.position + (Vector3.right * XSpeed * Time.smoothDeltaTime);
		}
			
						if(Input.GetButton("Vertical")){

		//while pressing the button i can't adjust my direction.
		//if (Input.touchCount != 0 || Input.GetMouseButton(0)){
			//as long as my speed and the speed i want to add is less than c go on.
				//if my current direction is in the positive x direction. and i don't have a front wall infront
				if (lastRight.x > 0 && !frontWall) {
					if(XSpeed + incrSpeed < c){
						backWall = false;
						XSpeed += incrSpeed;
					}
				} else if(!backWall && XSpeed - incrSpeed > -c){ //as long as i have no backwall infront of me go on 
					frontWall = false; //since i am moving in the opposite direction now, frontWall is not infront of me anymore
					XSpeed -= incrSpeed;
				}

		} else if(Mathf.Abs(XSpeed) >= 5f) {  // if i am not doing anything, just slow down by yourself, until you reach 5
			adjustDir ();
			//decrement speed faster than you'd increment
			XSpeed = XSpeed > 0 ? XSpeed - 5 * incrSpeed : XSpeed + 5 * incrSpeed;
		} else {
			adjustDir ();
			XSpeed = 0;
		}

		//for debugging. use when not using VR scripts.
		//lockedRotation ();

	}


	/// <summary>
	/// Lockeds the rotation. Allows the camera to move if we are not working with the VR scripts.
	/// </summary>
	void lockedRotation()
	{
		rotationX += Input.GetAxis("Mouse Y") * sensitivityX;
		rotationX = Mathf.Clamp (rotationX, -90, 90);
	
		rotationY += Input.GetAxis("Mouse X") * sensitivityY;

		transform.localEulerAngles = new Vector3(transform.localEulerAngles.x, rotationY , -rotationX);
	}

	/// <summary>
	///  Adjusts the dir. Adjusts the direction of the gameObject. If the camera is looking back, then I know that I have to change the orientation accordingly.
	/// </summary>
	void adjustDir(){
		if(0 < myCamera.transform.forward.x){
			lastRight = Vector3.right;
		} else {
			lastRight = -Vector3.right;
		}
	}

	/// <summary>
	/// Velocity the specified v1 and v2. Standard velocity calculation
	/// </summary>
	/// <param name="v1">V1.</param>
	/// <param name="v2">V2.</param>
	float velocity(float v1, float v2){
		return Mathf.Sqrt (Mathf.Pow (v1, 2) + Mathf.Pow (v2, 2));
	}

	/// <summary>
	/// Finds the right value to increment the player by. As we approach c, we will not increment anymore.
	/// </summary>
	/// <returns>The incr.</returns>
	float newIncr(){
		if(Mathf.Abs(XSpeed) < c * 0.99){
			return -((c / 100 - 0.1f) / (c * 0.99f)) * Mathf.Abs(XSpeed) + c / 100;
		}
		return incrSpeed;
	}
}
