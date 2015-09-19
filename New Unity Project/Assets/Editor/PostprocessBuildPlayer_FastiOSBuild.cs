using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using System.IO;

public class FastiOSBuildProcessor  {
	

	
	[PostProcessBuild (999999)]
	public static void OnPostprocessBuild(BuildTarget target, string pathToBuiltProject) 
	{
		
		if (target != BuildTarget.iOS) { return; }

		string projectfile = pathToBuiltProject + "/" + "Unity-iPhone.xcodeproj" + "/" + "project.pbxproj";
		string projectfileOld = projectfile + ".old";
		
		try 
		{

			bool isFastiOSBuildEnabled = EditorPrefs.GetBool("isFastiOSBuildEnabled");

			if (!isFastiOSBuildEnabled) {
			
				if (File.Exists(projectfileOld) && (File.Exists(projectfile))) {
					File.Delete(projectfile);
					File.Move(projectfileOld, projectfile);
					WriteLog("FastiOSBuild was disabled. Restored old project file.");
				}
				else {
					WriteLog("FastiOSBuild is disabled");
				}
				return;
			}
			
			if (!File.Exists(projectfileOld)) {
				File.Move(projectfile, projectfileOld);
			}
			bool foundPriorLine = false;	
			bool isDebugSection = false;
			
			using(StreamReader file =  new StreamReader(projectfileOld)) 
			{
				string line = null;
				using (StreamWriter fileOut = new StreamWriter(projectfile)) 
				{
					while((line = file.ReadLine()) != null)
					{
						if (line.Contains("/* Debug */ = {")) {
							isDebugSection = true;
						}
						else if ((line.Contains("buildSettings = {")) && (isDebugSection)) {
							foundPriorLine = true;
						}
						else if (foundPriorLine){
							if (!line.Contains("DEBUG_INFORMATION_FORMAT")) {
								fileOut.WriteLine("\t\t\t\tDEBUG_INFORMATION_FORMAT = dwarf; /* Created with FastiOSBuild (www.knert.com) */");
							}
							foundPriorLine = false;
							isDebugSection = false;
						}
			
						fileOut.WriteLine(line);
					}
				}
			}
			
			WriteLog("Completed: Updated project file: " + projectfile);
		}
		catch (UnityException ex)
		{
			WriteLog("Failed: Unable to load Xcode project file: " + ex.StackTrace);
		}
		
	}
	
		
	private static void WriteLog(string message) {
		Debug.Log("FastiOSBuild: " + message);
	}
	
}

