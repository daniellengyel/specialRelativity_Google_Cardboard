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

// GvrReticle
struct GvrReticle_t1834592217;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void GvrReticle::.ctor()
extern "C"  void GvrReticle__ctor_m3694113478 (GvrReticle_t1834592217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::Start()
extern "C"  void GvrReticle_Start_m478287654 (GvrReticle_t1834592217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnEnable()
extern "C"  void GvrReticle_OnEnable_m1568612742 (GvrReticle_t1834592217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnDisable()
extern "C"  void GvrReticle_OnDisable_m1733557721 (GvrReticle_t1834592217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::Update()
extern "C"  void GvrReticle_Update_m456224413 (GvrReticle_t1834592217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeEnabled()
extern "C"  void GvrReticle_OnGazeEnabled_m1755059565 (GvrReticle_t1834592217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeDisabled()
extern "C"  void GvrReticle_OnGazeDisabled_m850165952 (GvrReticle_t1834592217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeStart(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C"  void GvrReticle_OnGazeStart_m918151084 (GvrReticle_t1834592217 * __this, Camera_t189460977 * ___camera0, GameObject_t1756533147 * ___targetObject1, Vector3_t2243707580  ___intersectionPosition2, bool ___isInteractive3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeStay(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C"  void GvrReticle_OnGazeStay_m3412141603 (GvrReticle_t1834592217 * __this, Camera_t189460977 * ___camera0, GameObject_t1756533147 * ___targetObject1, Vector3_t2243707580  ___intersectionPosition2, bool ___isInteractive3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeExit(UnityEngine.Camera,UnityEngine.GameObject)
extern "C"  void GvrReticle_OnGazeExit_m395279196 (GvrReticle_t1834592217 * __this, Camera_t189460977 * ___camera0, GameObject_t1756533147 * ___targetObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeTriggerStart(UnityEngine.Camera)
extern "C"  void GvrReticle_OnGazeTriggerStart_m2932008396 (GvrReticle_t1834592217 * __this, Camera_t189460977 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::OnGazeTriggerEnd(UnityEngine.Camera)
extern "C"  void GvrReticle_OnGazeTriggerEnd_m4076773485 (GvrReticle_t1834592217 * __this, Camera_t189460977 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::GetPointerRadius(System.Single&,System.Single&)
extern "C"  void GvrReticle_GetPointerRadius_m695065589 (GvrReticle_t1834592217 * __this, float* ___innerRadius0, float* ___outerRadius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::CreateReticleVertices()
extern "C"  void GvrReticle_CreateReticleVertices_m2798474065 (GvrReticle_t1834592217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::UpdateDiameters()
extern "C"  void GvrReticle_UpdateDiameters_m1296368809 (GvrReticle_t1834592217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticle::SetGazeTarget(UnityEngine.Vector3,System.Boolean)
extern "C"  void GvrReticle_SetGazeTarget_m3577884818 (GvrReticle_t1834592217 * __this, Vector3_t2243707580  ___target0, bool ___interactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
