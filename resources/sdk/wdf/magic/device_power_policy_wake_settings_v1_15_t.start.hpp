#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_15.Size", size, 0x0, 0x0, false, 0x2b833056c58576e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_15.DxState", dx_state, 0x0, 0x0, false, 0x28a6c1da62af2a8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_sx_wake_user_control_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_15.UserControlOfWakeSettings", user_control_of_wake_settings, 0x0, 0x0, false, 0xa50f5a7de9885bde)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_15.Enabled", enabled, 0x0, 0x0, false, 0xcf2cbdffc727984f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_15.ArmForWakeIfChildrenAreArmedForWake", arm_for_wake_if_children_are_armed_for_wake, 0x0, 0x0, false, 0x5983674824318554)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_15.IndicateChildWakeOnParentWake", indicate_child_wake_on_parent_wake, 0x0, 0x0, false, 0x538e67efe38cc2e9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif