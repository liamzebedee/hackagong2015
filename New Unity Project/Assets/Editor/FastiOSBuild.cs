using UnityEngine;
using UnityEditor;

public class FastiOSBuild : EditorWindow {

	
	private bool isFastiOSBuildEnabled = true;
	private bool buttonState = true;

	[MenuItem ("Window/FastiOSBuild")]
	static void Init () {



		FastiOSBuild fastiOSBuild = (FastiOSBuild)EditorWindow.GetWindow (typeof (FastiOSBuild));
		fastiOSBuild.Show();
	}
 
	void OnGUI () {	
	
		if(EditorPrefs.HasKey("isFastiOSBuildEnabled")) {
			isFastiOSBuildEnabled = EditorPrefs.GetBool("isFastiOSBuildEnabled");
			buttonState = isFastiOSBuildEnabled;
		}
		else
		{
			EditorPrefs.SetBool("isFastiOSBuildEnabled", true);
			isFastiOSBuildEnabled = true;
			buttonState = true;
		}

		GUILayout.Label ("- FastiOSBuild - by Knert Software (www.knert.com)", EditorStyles.boldLabel);
		GUILayout.Label ("");
		GUILayout.Label ("When enabled, on a PostBuildProcess, the Xcode project file");
		GUILayout.Label ("is modified to disable the creation of a symbolication file (dSYM)");
		GUILayout.Label ("for debug builds. This can save a substantial amount of build");
		GUILayout.Label ("time in Xcode.");
		GUILayout.Label ("");

		buttonState = GUILayout.Toggle(isFastiOSBuildEnabled, "Enabled");

		if (buttonState != isFastiOSBuildEnabled)
		{
			isFastiOSBuildEnabled = buttonState;
			EditorPrefs.SetBool("isFastiOSBuildEnabled", isFastiOSBuildEnabled);
		}

		GUILayout.Label ("");
		GUILayout.Label ("*** Please rate me on the Unity Asset Store! - Thank You! *** ");
	}
}

//	void OnFocus() {
//
//
//
//	void OnLostFocus() {
//		EditorPrefs.SetBool("isFastiOSBuildEnabled", isFastiOSBuildEnabled);
//	}
//}
