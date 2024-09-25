#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS.Size", size, 0x0, 0x20, true, 0x62a7bc2dcbb29ff9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS.DxState", dx_state, 0x20, 0x20, true, 0x9313b4b1eb3eba10)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_sx_wake_user_control_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS.UserControlOfWakeSettings", user_control_of_wake_settings, 0x40, 0x20, true, 0x6b792f20f7f1a701)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS.Enabled", enabled, 0x60, 0x20, true, 0x3e9000b9cfbac4fc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS.ArmForWakeIfChildrenAreArmedForWake", arm_for_wake_if_children_are_armed_for_wake, 0x80, 0x8, true, 0xa9a23e67486bfe36)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS.IndicateChildWakeOnParentWake", indicate_child_wake_on_parent_wake, 0x88, 0x8, true, 0x7aac2101cb81f795)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif