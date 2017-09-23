#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LengthContraction
struct LengthContraction_t452689656;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerControls
struct  PlayerControls_t1008173349  : public MonoBehaviour_t1158329972
{
public:
	// LengthContraction PlayerControls::lengthContraction
	LengthContraction_t452689656 * ___lengthContraction_2;
	// System.Single PlayerControls::c
	float ___c_3;
	// UnityEngine.Transform PlayerControls::myCamera
	Transform_t3275118058 * ___myCamera_4;
	// UnityEngine.Rigidbody PlayerControls::player
	Rigidbody_t4233889191 * ___player_5;
	// System.Single PlayerControls::force
	float ___force_6;
	// System.Single PlayerControls::incrSpeed
	float ___incrSpeed_7;
	// System.Single PlayerControls::rotationY
	float ___rotationY_8;
	// System.Single PlayerControls::sensitivityY
	float ___sensitivityY_9;
	// System.Single PlayerControls::rotationX
	float ___rotationX_10;
	// System.Single PlayerControls::sensitivityX
	float ___sensitivityX_11;
	// System.Single PlayerControls::XSpeed
	float ___XSpeed_12;
	// UnityEngine.Vector3 PlayerControls::lastForward
	Vector3_t2243707580  ___lastForward_13;
	// UnityEngine.Vector3 PlayerControls::lastRight
	Vector3_t2243707580  ___lastRight_14;
	// System.Boolean PlayerControls::frontWall
	bool ___frontWall_15;
	// System.Boolean PlayerControls::backWall
	bool ___backWall_16;
	// UnityEngine.UI.Text PlayerControls::guiText
	Text_t356221433 * ___guiText_17;

public:
	inline static int32_t get_offset_of_lengthContraction_2() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___lengthContraction_2)); }
	inline LengthContraction_t452689656 * get_lengthContraction_2() const { return ___lengthContraction_2; }
	inline LengthContraction_t452689656 ** get_address_of_lengthContraction_2() { return &___lengthContraction_2; }
	inline void set_lengthContraction_2(LengthContraction_t452689656 * value)
	{
		___lengthContraction_2 = value;
		Il2CppCodeGenWriteBarrier(&___lengthContraction_2, value);
	}

	inline static int32_t get_offset_of_c_3() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___c_3)); }
	inline float get_c_3() const { return ___c_3; }
	inline float* get_address_of_c_3() { return &___c_3; }
	inline void set_c_3(float value)
	{
		___c_3 = value;
	}

	inline static int32_t get_offset_of_myCamera_4() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___myCamera_4)); }
	inline Transform_t3275118058 * get_myCamera_4() const { return ___myCamera_4; }
	inline Transform_t3275118058 ** get_address_of_myCamera_4() { return &___myCamera_4; }
	inline void set_myCamera_4(Transform_t3275118058 * value)
	{
		___myCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___myCamera_4, value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___player_5)); }
	inline Rigidbody_t4233889191 * get_player_5() const { return ___player_5; }
	inline Rigidbody_t4233889191 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(Rigidbody_t4233889191 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}

	inline static int32_t get_offset_of_force_6() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___force_6)); }
	inline float get_force_6() const { return ___force_6; }
	inline float* get_address_of_force_6() { return &___force_6; }
	inline void set_force_6(float value)
	{
		___force_6 = value;
	}

	inline static int32_t get_offset_of_incrSpeed_7() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___incrSpeed_7)); }
	inline float get_incrSpeed_7() const { return ___incrSpeed_7; }
	inline float* get_address_of_incrSpeed_7() { return &___incrSpeed_7; }
	inline void set_incrSpeed_7(float value)
	{
		___incrSpeed_7 = value;
	}

	inline static int32_t get_offset_of_rotationY_8() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___rotationY_8)); }
	inline float get_rotationY_8() const { return ___rotationY_8; }
	inline float* get_address_of_rotationY_8() { return &___rotationY_8; }
	inline void set_rotationY_8(float value)
	{
		___rotationY_8 = value;
	}

	inline static int32_t get_offset_of_sensitivityY_9() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___sensitivityY_9)); }
	inline float get_sensitivityY_9() const { return ___sensitivityY_9; }
	inline float* get_address_of_sensitivityY_9() { return &___sensitivityY_9; }
	inline void set_sensitivityY_9(float value)
	{
		___sensitivityY_9 = value;
	}

	inline static int32_t get_offset_of_rotationX_10() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___rotationX_10)); }
	inline float get_rotationX_10() const { return ___rotationX_10; }
	inline float* get_address_of_rotationX_10() { return &___rotationX_10; }
	inline void set_rotationX_10(float value)
	{
		___rotationX_10 = value;
	}

	inline static int32_t get_offset_of_sensitivityX_11() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___sensitivityX_11)); }
	inline float get_sensitivityX_11() const { return ___sensitivityX_11; }
	inline float* get_address_of_sensitivityX_11() { return &___sensitivityX_11; }
	inline void set_sensitivityX_11(float value)
	{
		___sensitivityX_11 = value;
	}

	inline static int32_t get_offset_of_XSpeed_12() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___XSpeed_12)); }
	inline float get_XSpeed_12() const { return ___XSpeed_12; }
	inline float* get_address_of_XSpeed_12() { return &___XSpeed_12; }
	inline void set_XSpeed_12(float value)
	{
		___XSpeed_12 = value;
	}

	inline static int32_t get_offset_of_lastForward_13() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___lastForward_13)); }
	inline Vector3_t2243707580  get_lastForward_13() const { return ___lastForward_13; }
	inline Vector3_t2243707580 * get_address_of_lastForward_13() { return &___lastForward_13; }
	inline void set_lastForward_13(Vector3_t2243707580  value)
	{
		___lastForward_13 = value;
	}

	inline static int32_t get_offset_of_lastRight_14() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___lastRight_14)); }
	inline Vector3_t2243707580  get_lastRight_14() const { return ___lastRight_14; }
	inline Vector3_t2243707580 * get_address_of_lastRight_14() { return &___lastRight_14; }
	inline void set_lastRight_14(Vector3_t2243707580  value)
	{
		___lastRight_14 = value;
	}

	inline static int32_t get_offset_of_frontWall_15() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___frontWall_15)); }
	inline bool get_frontWall_15() const { return ___frontWall_15; }
	inline bool* get_address_of_frontWall_15() { return &___frontWall_15; }
	inline void set_frontWall_15(bool value)
	{
		___frontWall_15 = value;
	}

	inline static int32_t get_offset_of_backWall_16() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___backWall_16)); }
	inline bool get_backWall_16() const { return ___backWall_16; }
	inline bool* get_address_of_backWall_16() { return &___backWall_16; }
	inline void set_backWall_16(bool value)
	{
		___backWall_16 = value;
	}

	inline static int32_t get_offset_of_guiText_17() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___guiText_17)); }
	inline Text_t356221433 * get_guiText_17() const { return ___guiText_17; }
	inline Text_t356221433 ** get_address_of_guiText_17() { return &___guiText_17; }
	inline void set_guiText_17(Text_t356221433 * value)
	{
		___guiText_17 = value;
		Il2CppCodeGenWriteBarrier(&___guiText_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
