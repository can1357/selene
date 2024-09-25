#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_15.Size", size, 0x0, 0x0, false, 0x6adb26f41a6b4c67)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_capabilities_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_15.IdleCaps", idle_caps, 0x0, 0x0, false, 0x7df351deaec2de45)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_15.DxState", dx_state, 0x0, 0x0, false, 0x14a9a963fc2c5eec)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_15.IdleTimeout", idle_timeout, 0x0, 0x0, false, 0x582adbaff95e99a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_user_control_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_15.UserControlOfIdleSettings", user_control_of_idle_settings, 0x0, 0x0, false, 0xc03e01d0ae79c3d8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_15.Enabled", enabled, 0x0, 0x0, false, 0x210763a081097be1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_15.PowerUpIdleDeviceOnSystemWake", power_up_idle_device_on_system_wake, 0x0, 0x0, false, 0x748956a1e19f88a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_idle_timeout_type_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_15.IdleTimeoutType", idle_timeout_type, 0x0, 0x0, false, 0xb1cec531e759b566)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_15.ExcludeD3Cold", exclude_d3_cold, 0x0, 0x0, false, 0x1a8d12a5e6ef887e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif