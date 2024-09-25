#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_13.Size", size, 0x0, 0x0, false, 0xfd42c0247f43ec22)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_13.DxState", dx_state, 0x0, 0x0, false, 0xacbc318b6db30670)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_sx_wake_user_control_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_13.UserControlOfWakeSettings", user_control_of_wake_settings, 0x0, 0x0, false, 0x69dfd4c648115410)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_13.Enabled", enabled, 0x0, 0x0, false, 0xdeee922948dcefe7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_13.ArmForWakeIfChildrenAreArmedForWake", arm_for_wake_if_children_are_armed_for_wake, 0x0, 0x0, false, 0x4ace1a8f963aaffc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_13.IndicateChildWakeOnParentWake", indicate_child_wake_on_parent_wake, 0x0, 0x0, false, 0xfcca0f68666c70e3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif