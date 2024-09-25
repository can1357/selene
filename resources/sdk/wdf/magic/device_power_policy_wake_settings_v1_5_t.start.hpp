#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_5.Size", size, 0x0, 0x20, true, 0xfe3c093d883c1b05)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_5.DxState", dx_state, 0x20, 0x20, true, 0x7bb05cfc8d85a06c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_sx_wake_user_control_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_5.UserControlOfWakeSettings", user_control_of_wake_settings, 0x40, 0x20, true, 0xfc76a4963ae26d73)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_5.Enabled", enabled, 0x60, 0x20, true, 0x592d86d50ba57b1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif