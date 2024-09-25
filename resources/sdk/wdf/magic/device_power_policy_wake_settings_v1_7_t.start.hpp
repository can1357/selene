#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_7.Size", size, 0x0, 0x0, false, 0x1d46aa7cd75d56c7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_7.DxState", dx_state, 0x0, 0x0, false, 0xd3211ef9df347397)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_sx_wake_user_control_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_7.UserControlOfWakeSettings", user_control_of_wake_settings, 0x0, 0x0, false, 0xee028348ff3d129a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_7.Enabled", enabled, 0x0, 0x0, false, 0xa89fef7098c18e03)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_7.ArmForWakeIfChildrenAreArmedForWake", arm_for_wake_if_children_are_armed_for_wake, 0x0, 0x0, false, 0xd41920e76fa1c0ae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_7.IndicateChildWakeOnParentWake", indicate_child_wake_on_parent_wake, 0x0, 0x0, false, 0x16602fd0b7b2c458)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif