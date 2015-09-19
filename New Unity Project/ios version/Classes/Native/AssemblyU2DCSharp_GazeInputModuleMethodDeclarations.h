#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GazeInputModule
struct GazeInputModule_t45;

// System.Void GazeInputModule::.ctor()
extern "C" void GazeInputModule__ctor_m147 (GazeInputModule_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::ShouldActivateModule()
extern "C" bool GazeInputModule_ShouldActivateModule_m148 (GazeInputModule_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::DeactivateModule()
extern "C" void GazeInputModule_DeactivateModule_m149 (GazeInputModule_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::IsPointerOverGameObject(System.Int32)
extern "C" bool GazeInputModule_IsPointerOverGameObject_m150 (GazeInputModule_t45 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::Process()
extern "C" void GazeInputModule_Process_m151 (GazeInputModule_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::CastRayFromGaze()
extern "C" void GazeInputModule_CastRayFromGaze_m152 (GazeInputModule_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::UpdateCurrentObject()
extern "C" void GazeInputModule_UpdateCurrentObject_m153 (GazeInputModule_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::PlaceCursor()
extern "C" void GazeInputModule_PlaceCursor_m154 (GazeInputModule_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandlePendingClick()
extern "C" void GazeInputModule_HandlePendingClick_m155 (GazeInputModule_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleTrigger()
extern "C" void GazeInputModule_HandleTrigger_m156 (GazeInputModule_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
