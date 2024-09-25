#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_13.Size", size, 0x0, 0x0, false, 0x5db3e7e441b0f727)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_capabilities_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_13.IdleCaps", idle_caps, 0x0, 0x0, false, 0x17f2637a2fb65794)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_13.DxState", dx_state, 0x0, 0x0, false, 0x26c712363e895b98)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_13.IdleTimeout", idle_timeout, 0x0, 0x0, false, 0xeffcad15f9d63369)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_user_control_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_13.UserControlOfIdleSettings", user_control_of_idle_settings, 0x0, 0x0, false, 0x937ff8e9649b8945)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_13.Enabled", enabled, 0x0, 0x0, false, 0x6ae3b6045a7e55bc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_13.PowerUpIdleDeviceOnSystemWake", power_up_idle_device_on_system_wake, 0x0, 0x0, false, 0x61710085c3f67644)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_idle_timeout_type_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_13.IdleTimeoutType", idle_timeout_type, 0x0, 0x0, false, 0x774ceb947b6e5b93)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_13.ExcludeD3Cold", exclude_d3_cold, 0x0, 0x0, false, 0x842ec3952badb838)
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