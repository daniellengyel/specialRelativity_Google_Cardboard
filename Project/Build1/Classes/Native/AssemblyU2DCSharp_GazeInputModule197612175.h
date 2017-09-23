#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IGvrGazePointer
struct IGvrGazePointer_t3118039122;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM1295781545.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GazeInputModule
struct  GazeInputModule_t197612175  : public BaseInputModule_t1295781545
{
public:
	// System.Boolean GazeInputModule::vrModeOnly
	bool ___vrModeOnly_8;
	// UnityEngine.EventSystems.PointerEventData GazeInputModule::pointerData
	PointerEventData_t1599784723 * ___pointerData_10;
	// UnityEngine.Vector2 GazeInputModule::lastHeadPose
	Vector2_t2243707579  ___lastHeadPose_11;
	// System.Boolean GazeInputModule::isActive
	bool ___isActive_12;

public:
	inline static int32_t get_offset_of_vrModeOnly_8() { return static_cast<int32_t>(offsetof(GazeInputModule_t197612175, ___vrModeOnly_8)); }
	inline bool get_vrModeOnly_8() const { return ___vrModeOnly_8; }
	inline bool* get_address_of_vrModeOnly_8() { return &___vrModeOnly_8; }
	inline void set_vrModeOnly_8(bool value)
	{
		___vrModeOnly_8 = value;
	}

	inline static int32_t get_offset_of_pointerData_10() { return static_cast<int32_t>(offsetof(GazeInputModule_t197612175, ___pointerData_10)); }
	inline PointerEventData_t1599784723 * get_pointerData_10() const { return ___pointerData_10; }
	inline PointerEventData_t1599784723 ** get_address_of_pointerData_10() { return &___pointerData_10; }
	inline void set_pointerData_10(PointerEventData_t1599784723 * value)
	{
		___pointerData_10 = value;
		Il2CppCodeGenWriteBarrier(&___pointerData_10, value);
	}

	inline static int32_t get_offset_of_lastHeadPose_11() { return static_cast<int32_t>(offsetof(GazeInputModule_t197612175, ___lastHeadPose_11)); }
	inline Vector2_t2243707579  get_lastHeadPose_11() const { return ___lastHeadPose_11; }
	inline Vector2_t2243707579 * get_address_of_lastHeadPose_11() { return &___lastHeadPose_11; }
	inline void set_lastHeadPose_11(Vector2_t2243707579  value)
	{
		___lastHeadPose_11 = value;
	}

	inline static int32_t get_offset_of_isActive_12() { return static_cast<int32_t>(offsetof(GazeInputModule_t197612175, ___isActive_12)); }
	inline bool get_isActive_12() const { return ___isActive_12; }
	inline bool* get_address_of_isActive_12() { return &___isActive_12; }
	inline void set_isActive_12(bool value)
	{
		___isActive_12 = value;
	}
};

struct GazeInputModule_t197612175_StaticFields
{
public:
	// IGvrGazePointer GazeInputModule::gazePointer
	Il2CppObject * ___gazePointer_9;

public:
	inline static int32_t get_offset_of_gazePointer_9() { return static_cast<int32_t>(offsetof(GazeInputModule_t197612175_StaticFields, ___gazePointer_9)); }
	inline Il2CppObject * get_gazePointer_9() const { return ___gazePointer_9; }
	inline Il2CppObject ** get_address_of_gazePointer_9() { return &___gazePointer_9; }
	inline void set_gazePointer_9(Il2CppObject * value)
	{
		___gazePointer_9 = value;
		Il2CppCodeGenWriteBarrier(&___gazePointer_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
