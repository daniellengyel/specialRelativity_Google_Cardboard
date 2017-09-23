#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayerControls
struct PlayerControls_t1008173349;
// System.Collections.Generic.List`1<copyTransform>
struct List_1_t3544542255;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LengthContraction
struct  LengthContraction_t452689656  : public MonoBehaviour_t1158329972
{
public:
	// System.Single LengthContraction::c
	float ___c_2;
	// UnityEngine.GameObject LengthContraction::player
	GameObject_t1756533147 * ___player_3;
	// PlayerControls LengthContraction::playerControls
	PlayerControls_t1008173349 * ___playerControls_4;
	// System.Collections.Generic.List`1<copyTransform> LengthContraction::initialTransforms
	List_1_t3544542255 * ___initialTransforms_5;

public:
	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(LengthContraction_t452689656, ___c_2)); }
	inline float get_c_2() const { return ___c_2; }
	inline float* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(float value)
	{
		___c_2 = value;
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(LengthContraction_t452689656, ___player_3)); }
	inline GameObject_t1756533147 * get_player_3() const { return ___player_3; }
	inline GameObject_t1756533147 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t1756533147 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_playerControls_4() { return static_cast<int32_t>(offsetof(LengthContraction_t452689656, ___playerControls_4)); }
	inline PlayerControls_t1008173349 * get_playerControls_4() const { return ___playerControls_4; }
	inline PlayerControls_t1008173349 ** get_address_of_playerControls_4() { return &___playerControls_4; }
	inline void set_playerControls_4(PlayerControls_t1008173349 * value)
	{
		___playerControls_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerControls_4, value);
	}

	inline static int32_t get_offset_of_initialTransforms_5() { return static_cast<int32_t>(offsetof(LengthContraction_t452689656, ___initialTransforms_5)); }
	inline List_1_t3544542255 * get_initialTransforms_5() const { return ___initialTransforms_5; }
	inline List_1_t3544542255 ** get_address_of_initialTransforms_5() { return &___initialTransforms_5; }
	inline void set_initialTransforms_5(List_1_t3544542255 * value)
	{
		___initialTransforms_5 = value;
		Il2CppCodeGenWriteBarrier(&___initialTransforms_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
