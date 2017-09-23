#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// copyTransform
struct  copyTransform_t4175421123  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 copyTransform::scale
	Vector3_t2243707580  ___scale_0;
	// UnityEngine.Vector3 copyTransform::position
	Vector3_t2243707580  ___position_1;

public:
	inline static int32_t get_offset_of_scale_0() { return static_cast<int32_t>(offsetof(copyTransform_t4175421123, ___scale_0)); }
	inline Vector3_t2243707580  get_scale_0() const { return ___scale_0; }
	inline Vector3_t2243707580 * get_address_of_scale_0() { return &___scale_0; }
	inline void set_scale_0(Vector3_t2243707580  value)
	{
		___scale_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(copyTransform_t4175421123, ___position_1)); }
	inline Vector3_t2243707580  get_position_1() const { return ___position_1; }
	inline Vector3_t2243707580 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t2243707580  value)
	{
		___position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
