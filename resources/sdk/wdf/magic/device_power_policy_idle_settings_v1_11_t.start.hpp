#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_11.Size", size, 0x0, 0x0, false, 0x3fc3b007d95fba6a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_capabilities_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_11.IdleCaps", idle_caps, 0x0, 0x0, false, 0x2547f48de9b4b650)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_11.DxState", dx_state, 0x0, 0x0, false, 0x51ee82a4e5e7ce02)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_11.IdleTimeout", idle_timeout, 0x0, 0x0, false, 0x5f6c4afb2c1468c8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_user_control_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_11.UserControlOfIdleSettings", user_control_of_idle_settings, 0x0, 0x0, false, 0xd53649a0c8cbc619)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_11.Enabled", enabled, 0x0, 0x0, false, 0xc3e7ff7476e6c0f6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_11.PowerUpIdleDeviceOnSystemWake", power_up_idle_device_on_system_wake, 0x0, 0x0, false, 0x7d9d2e8e3b8f0a55)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_idle_timeout_type_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_11.IdleTimeoutType", idle_timeout_type, 0x0, 0x0, false, 0xff50f0739d43b5c1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_11.ExcludeD3Cold", exclude_d3_cold, 0x0, 0x0, false, 0x87706d1adbfae902)
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