#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_11.Size", size, 0x0, 0x0, false, 0x4dd1202dae9b927c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_11.DxState", dx_state, 0x0, 0x0, false, 0x4311dee6db47856d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_sx_wake_user_control_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_11.UserControlOfWakeSettings", user_control_of_wake_settings, 0x0, 0x0, false, 0x83469250e58a441c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_11.Enabled", enabled, 0x0, 0x0, false, 0x8b244550f5abdec1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_11.ArmForWakeIfChildrenAreArmedForWake", arm_for_wake_if_children_are_armed_for_wake, 0x0, 0x0, false, 0x139ec4b162c3dabb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_11.IndicateChildWakeOnParentWake", indicate_child_wake_on_parent_wake, 0x0, 0x0, false, 0xab99b0197951ea9b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif