#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GazeInputModule
struct GazeInputModule_t197612175;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void GazeInputModule::.ctor()
extern "C"  void GazeInputModule__ctor_m3495712250 (GazeInputModule_t197612175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::ShouldActivateModule()
extern "C"  bool GazeInputModule_ShouldActivateModule_m1439239592 (GazeInputModule_t197612175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::DeactivateModule()
extern "C"  void GazeInputModule_DeactivateModule_m2720972602 (GazeInputModule_t197612175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::IsPointerOverGameObject(System.Int32)
extern "C"  bool GazeInputModule_IsPointerOverGameObject_m2490735567 (GazeInputModule_t197612175 * __this, int32_t ___pointerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::Process()
extern "C"  void GazeInputModule_Process_m507428845 (GazeInputModule_t197612175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::CastRayFromGaze()
extern "C"  void GazeInputModule_CastRayFromGaze_m1316420174 (GazeInputModule_t197612175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::UpdateCurrentObject()
extern "C"  void GazeInputModule_UpdateCurrentObject_m3108153203 (GazeInputModule_t197612175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::UpdateReticle(UnityEngine.GameObject)
extern "C"  void GazeInputModule_UpdateReticle_m1529848539 (GazeInputModule_t197612175 * __this, GameObject_t1756533147 * ___previousGazedObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleDrag()
extern "C"  void GazeInputModule_HandleDrag_m3632583772 (GazeInputModule_t197612175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandlePendingClick()
extern "C"  void GazeInputModule_HandlePendingClick_m212922377 (GazeInputModule_t197612175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleTrigger()
extern "C"  void GazeInputModule_HandleTrigger_m3112716372 (GazeInputModule_t197612175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GazeInputModule::NormalizedCartesianToSpherical(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  GazeInputModule_NormalizedCartesianToSpherical_m1881014705 (GazeInputModule_t197612175 * __this, Vector3_t2243707580  ___cartCoords0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GazeInputModule::GetCurrentGameObject()
extern "C"  GameObject_t1756533147 * GazeInputModule_GetCurrentGameObject_m3401353925 (GazeInputModule_t197612175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GazeInputModule::GetIntersectionPosition()
extern "C"  Vector3_t2243707580  GazeInputModule_GetIntersectionPosition_m1748715582 (GazeInputModule_t197612175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::DisableGazePointer()
extern "C"  void GazeInputModule_DisableGazePointer_m1529146114 (GazeInputModule_t197612175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GazeInputModule::GetGazePointerPosition()
extern "C"  Vector2_t2243707579  GazeInputModule_GetGazePointerPosition_m3655778024 (GazeInputModule_t197612175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
