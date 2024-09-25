#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS.Size", size, 0x0, 0x20, true, 0xdb98156c2bd80c67)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_capabilities_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS.IdleCaps", idle_caps, 0x20, 0x20, true, 0x152f901b22666f00)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS.DxState", dx_state, 0x40, 0x20, true, 0xd3f6eb06392e355)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS.IdleTimeout", idle_timeout, 0x60, 0x20, true, 0x535e98b50e8500aa)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_user_control_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS.UserControlOfIdleSettings", user_control_of_idle_settings, 0x80, 0x20, true, 0x997f20e38ee12377)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS.Enabled", enabled, 0xa0, 0x20, true, 0x4507e46a3bf6282b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS.PowerUpIdleDeviceOnSystemWake", power_up_idle_device_on_system_wake, 0xc0, 0x20, true, 0x3f125d3909e1e9bc)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_idle_timeout_type_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS.IdleTimeoutType", idle_timeout_type, 0xe0, 0x20, true, 0x27bdf14ca76ee4cd)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS.ExcludeD3Cold", exclude_d3_cold, 0x100, 0x20, true, 0x1f718296cfce79f1)
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