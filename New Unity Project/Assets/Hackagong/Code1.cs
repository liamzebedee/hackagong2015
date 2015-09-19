using UnityEngine;
using System.Collections;


namespace OpenCVForUnitySample
{
	/// <summary>
	/// WebCamTexture detect face sample.
	/// </summary>
	public class WebCamTextureDetectFaceSample : MonoBehaviour
	{

		WebCamTexture webCamTexture;
		
		WebCamDevice webCamDevice;
		
		Color32[] colors;
		
		public bool isFrontFacing = false;
		
		int width = 640;
		
		int height = 480;
		
		Mat rgbaMat;
		
		Mat grayMat;
		
		Texture2D texture;

		CascadeClassifier cascade;

		MatOfRect faces;

		bool initDone = false;
		
		// Use this for initialization
		void Start ()
		{
			
			StartCoroutine (init ());
			
		}
		
		private IEnumerator init ()
		{
			if (webCamTexture != null) {
				webCamTexture.Stop ();
				initDone = false;
				
				rgbaMat.Dispose ();
				grayMat.Dispose ();
			}
			
			// Checks how many and which cameras are available on the device
			for (int cameraIndex = 0; cameraIndex < WebCamTexture.devices.Length; cameraIndex++) {
				
				
				if (WebCamTexture.devices [cameraIndex].isFrontFacing == isFrontFacing) {
					
					
					Debug.Log (cameraIndex + " name " + WebCamTexture.devices [cameraIndex].name + " isFrontFacing " + WebCamTexture.devices [cameraIndex].isFrontFacing);
					
					webCamDevice = WebCamTexture.devices [cameraIndex];
					
					webCamTexture = new WebCamTexture (webCamDevice.name, width, height);
					
					
					break;
				}
				
				
			}
			
			if (webCamTexture == null) {
				webCamDevice = WebCamTexture.devices [0];
				webCamTexture = new WebCamTexture (webCamDevice.name, width, height);
			}
			
			Debug.Log ("width " + webCamTexture.width + " height " + webCamTexture.height + " fps " + webCamTexture.requestedFPS);
			
			
			// Starts the camera
			webCamTexture.Play ();
			
			while (true) {
				//If you want to use webcamTexture.width and webcamTexture.height on iOS, you have to wait until webcamTexture.didUpdateThisFrame == 1, otherwise these two values will be equal to 16. (http://forum.unity3d.com/threads/webcamtexture-and-error-0x0502.123922/)
				#if UNITY_IOS && !UNITY_EDITOR && (UNITY_4_6_3 || UNITY_4_6_4 || UNITY_5_0_0 || UNITY_5_0_1)
				if (webCamTexture.width > 16 && webCamTexture.height > 16) {
					#else
					if (webCamTexture.didUpdateThisFrame) {
						#endif

						colors = new Color32[webCamTexture.width * webCamTexture.height];
						
						rgbaMat = new Mat (webCamTexture.height, webCamTexture.width, CvType.CV_8UC4);
						grayMat = new Mat (webCamTexture.height, webCamTexture.width, CvType.CV_8UC1);
						
						texture = new Texture2D (webCamTexture.width, webCamTexture.height, TextureFormat.RGBA32, false);
						
						gameObject.transform.eulerAngles = new Vector3 (0, 0, 0);
						#if (UNITY_ANDROID || UNITY_IOS) && !UNITY_EDITOR
						gameObject.transform.eulerAngles = new Vector3 (0, 0, -90);
						#endif

						gameObject.transform.localScale = new Vector3 (webCamTexture.width, webCamTexture.height, 1);

						
						cascade = new CascadeClassifier (Utils.getFilePath ("lbpcascade_frontalface.xml"));

						
						gameObject.GetComponent<Renderer> ().material.mainTexture = texture;
						
						#if (UNITY_ANDROID || UNITY_IOS) && !UNITY_EDITOR
						Camera.main.orthographicSize = (((float)Screen.height/(float)Screen.width) * (float)webCamTexture.height) / 2.0f;
						#else
						Camera.main.orthographicSize = webCamTexture.height / 2;
						#endif
						
						initDone = true;
						
						break;
					} else {
						yield return 0;
					}
				}
			}
			
			// Update is called once per frame
			void Update ()
			{
				if (!initDone)
					return;
				
				#if UNITY_IOS && !UNITY_EDITOR && (UNITY_4_6_3 || UNITY_4_6_4 || UNITY_5_0_0 || UNITY_5_0_1)
				if (webCamTexture.width > 16 && webCamTexture.height > 16) {
					#else
					if (webCamTexture.didUpdateThisFrame) {
						#endif
						
						Utils.webCamTextureToMat (webCamTexture, rgbaMat, colors);
						
						if (webCamTexture.videoVerticallyMirrored) {
							if (webCamDevice.isFrontFacing) {
								if (webCamTexture.videoRotationAngle == 0) {
									Core.flip (rgbaMat, rgbaMat, 1);
								} else if (webCamTexture.videoRotationAngle == 90) {
									Core.flip (rgbaMat, rgbaMat, 0);
								} else if (webCamTexture.videoRotationAngle == 270) {
									Core.flip (rgbaMat, rgbaMat, 1);
								}
							} else {
								if (webCamTexture.videoRotationAngle == 90) {
									
								} else if (webCamTexture.videoRotationAngle == 270) {
									Core.flip (rgbaMat, rgbaMat, -1);
								}
							}
						} else {
							if (webCamDevice.isFrontFacing) {
								if (webCamTexture.videoRotationAngle == 0) {
									Core.flip (rgbaMat, rgbaMat, 1);
								} else if (webCamTexture.videoRotationAngle == 90) {
									Core.flip (rgbaMat, rgbaMat, 0);
								} else if (webCamTexture.videoRotationAngle == 270) {
									Core.flip (rgbaMat, rgbaMat, 1);
								}
							} else {
								if (webCamTexture.videoRotationAngle == 90) {
									
								} else if (webCamTexture.videoRotationAngle == 270) {
									Core.flip (rgbaMat, rgbaMat, -1);
								}
							}
						}
						
						
						Imgproc.cvtColor (rgbaMat, grayMat, Imgproc.COLOR_RGBA2GRAY);
						Imgproc.equalizeHist (grayMat, grayMat);


						Utils.matToTexture2D (rgbaMat, texture, colors);
						
					}
				}
				
				void OnDisable ()
				{
					webCamTexture.Stop ();
				}
				
				void OnGUI ()
				{
					float screenScale = Screen.width / 240.0f;
					Matrix4x4 scaledMatrix = Matrix4x4.Scale (new Vector3 (screenScale, screenScale, screenScale));
					GUI.matrix = scaledMatrix;
					
					
					GUILayout.BeginVertical ();
					if (GUILayout.Button ("back")) {
						Application.LoadLevel ("OpenCVForUnitySample");
					}
					if (GUILayout.Button ("change camera")) {
						isFrontFacing = !isFrontFacing;
						StartCoroutine (init ());
					}
					
					GUILayout.EndVertical ();
				}
			}
		}