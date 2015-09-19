#if UNITY_EDITOR

using UnityEngine;
using UnityEditor;
using System.Collections;
using ImageFetcherLibrary;

public class FetcherAddMenuItem
{
		[MenuItem ("Window/Google StreetView Converter v1.5.03")]
		static void initAll ()
		{
				FetcherGUI window = (FetcherGUI)EditorWindow.GetWindow (typeof(FetcherGUI));
				window.title = "Google StreetView Converter v1.5.03";
				window.minSize = new Vector2 (600.0f, 300.0f);
				window.Show ();
		}
}
#endif