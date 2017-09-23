using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Length contraction class. Control the contraction of the environment around the player. It polls the speed of the player at the update and then applies
/// special relativity effect to the environment.
/// </summary>
public class LengthContraction : MonoBehaviour {

	/// <summary>
	/// Here we just define our value for the speed of light. This is just so we can adjust it relative to the increments of speed by the player. 
	/// </summary>
	public float c = 30;

	GameObject player;




	PlayerControls playerControls;

	List<copyTransform> initialTransforms;
	

	// Use this for initialization
	void Start () {
		player = GameObject.Find("Player");
		playerControls = GameObject.Find ("Player").GetComponent<PlayerControls> ();
		initialTransforms = new List<copyTransform> ();
		for(int i = 0; i < transform.childCount; i++){
			initialTransforms.Add(new copyTransform(transform.GetChild (i).transform));
		}
	}
	
	/// <summary>
	/// Central loop of the script. Adjusts the environment according to the speed of the player.
	/// </summary>
	void Update () {
		float xGamma = gamma (playerControls.XSpeed);
		if(xGamma < 100000){
			for(int i = 0; i < transform.childCount; i++){
				Transform child = transform.GetChild (i).transform;
				copyTransform initialChild = initialTransforms [i];
				if(child.tag == "FrontWall" && (Mathf.Abs(child.position.x - player.transform.position.x) < 4)){
					if (  playerControls.XSpeed > 0) {
						playerControls.XSpeed = 0;
						playerControls.frontWall = true;
						player.transform.position = new Vector3 (initialChild.worldPosition ().x - 9f, player.transform.position.y, player.transform.position.z);
					} 
				}
				if(child.tag == "BackWall" && (Mathf.Abs(child.position.x - player.transform.position.x) < 4)){
					if ( playerControls.XSpeed < 0) {
						playerControls.XSpeed = 0;
						playerControls.backWall = true;
						player.transform.position = new Vector3(initialChild.worldPosition().x   + 9f, player.transform.position.y, player.transform.position.z);
					}
				}
				var worldScale = child.transform.TransformDirection(initialChild.localScale());
				worldScale.x = worldScale.x / xGamma;

				child.transform.position = new Vector3(
					player.transform.position.x + (initialChild.worldPosition().x - player.transform.position.x)/xGamma,
					initialChild.worldPosition().y, initialChild.worldPosition().z);
				child.transform.localScale = child.transform.InverseTransformDirection (worldScale);

			}
		}

	}

	/// <summary>
	/// Calculates the gamma value for SR calculations given the current speed of the player.
	/// </summary>
	/// <param name="speed">Speed.</param>
	private float gamma(float speed){
		float denom = Mathf.Sqrt (1 - Mathf.Pow((speed / c), 2));
		return 1 / denom;
	}


}

/// <summary>
/// Helper class for transformations.
/// </summary>
public class copyTransform {
	Vector3 scale;
	Vector3 position;

	public copyTransform(Transform transform){
		scale = transform.localScale;
		position = transform.position;
	}

	public Vector3 localScale(){
		return scale;
	}

	public Vector3 worldPosition(){
		return position;
	}
}