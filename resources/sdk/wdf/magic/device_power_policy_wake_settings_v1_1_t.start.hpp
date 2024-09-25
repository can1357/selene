#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_1.Size", size, 0x0, 0x0, false, 0xaeb2e5101fd60b54)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_1.DxState", dx_state, 0x0, 0x0, false, 0x2c852b6a23da9885)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_sx_wake_user_control_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_1.UserControlOfWakeSettings", user_control_of_wake_settings, 0x0, 0x0, false, 0x7b9b3f20834263ed)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_1.Enabled", enabled, 0x0, 0x0, false, 0x26897e4815063c61)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif