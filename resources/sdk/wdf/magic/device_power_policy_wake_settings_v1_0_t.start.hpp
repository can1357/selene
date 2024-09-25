#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_0.Size", size, 0x0, 0x0, false, 0xa999192e95df0828)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_0.DxState", dx_state, 0x0, 0x0, false, 0x5a6916f4f29d4ad6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_sx_wake_user_control_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_0.UserControlOfWakeSettings", user_control_of_wake_settings, 0x0, 0x0, false, 0x1510619e7b4f505d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_0.Enabled", enabled, 0x0, 0x0, false, 0x6c05a4151b0331)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif