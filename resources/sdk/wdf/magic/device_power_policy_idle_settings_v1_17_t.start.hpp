#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_17.Size", size, 0x0, 0x0, false, 0x3b1c7ccc244fabbc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_capabilities_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_17.IdleCaps", idle_caps, 0x0, 0x0, false, 0xb01b91bedccacf2a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_17.DxState", dx_state, 0x0, 0x0, false, 0x4c43cfda158428d0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_17.IdleTimeout", idle_timeout, 0x0, 0x0, false, 0xfdcdbe4e611577d0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_user_control_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_17.UserControlOfIdleSettings", user_control_of_idle_settings, 0x0, 0x0, false, 0x4285dfb1fc665630)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_17.Enabled", enabled, 0x0, 0x0, false, 0x7526fe827e1f9125)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_17.PowerUpIdleDeviceOnSystemWake", power_up_idle_device_on_system_wake, 0x0, 0x0, false, 0xc2caef548a915898)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_idle_timeout_type_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_17.IdleTimeoutType", idle_timeout_type, 0x0, 0x0, false, 0x4ca29f37bff47372)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_17.ExcludeD3Cold", exclude_d3_cold, 0x0, 0x0, false, 0x23553fe19033712c)
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