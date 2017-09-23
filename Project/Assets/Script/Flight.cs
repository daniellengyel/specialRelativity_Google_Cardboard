using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/// <summary>
/// Flight. Flight script added to class. Throw the script onto a gameobject and deactivate the player and you can make busses fly. 
/// Mainly a learning experience to see how to effectively control gameobjects.
/// </summary>
public class Flight : MonoBehaviour {

	public int thrust = 100;


	private Rigidbody plane;

	// Use this for initialization
	void Start () {

		plane = GetComponent<Rigidbody> ();
		//Mathf.Clamp(plane.velocity)
		
	}


	void FixedUpdate() {

		if(Input.GetButton("Jump")){
			plane.AddForce (transform.forward * thrust);
		}

		if(Input.GetKey(KeyCode.LeftShift)){
			plane.AddForce (-transform.forward * thrust / 2);
		}

		if(Input.GetButton("Vertical")){
			float speed = plane.velocity.magnitude;
			float scale = 0.02f * Input.GetAxis ("Vertical");
//			transform.forward = (transform.forward + transform.up * scale).normalized;
			//Vector3 euler = transform.rotation.eulerAngles;
			transform.rotation = Quaternion.LookRotation(transform.forward + transform.up * scale, transform.up);
			plane.velocity =  transform.forward * speed;

			//transform.RotateAround (plane.velocity + transform.position, transform.right, 1 * Input.GetAxis("Vertical"));
		}
		if(Input.GetButton("Horizontal")){
			Vector3 euler = transform.rotation.eulerAngles;
			transform.rotation = Quaternion.Euler(euler + new Vector3(0,0, -1 * Input.GetAxis ("Horizontal"))) ;
		}
	}
}

