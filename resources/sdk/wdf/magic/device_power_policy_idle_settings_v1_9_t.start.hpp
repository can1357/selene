#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_9.Size", size, 0x0, 0x20, true, 0xb178dca0a08e5c71)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_capabilities_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_9.IdleCaps", idle_caps, 0x20, 0x20, true, 0xf24caca9d75829d7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_9.DxState", dx_state, 0x40, 0x20, true, 0x286f7caa41ef071f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_9.IdleTimeout", idle_timeout, 0x60, 0x20, true, 0x20a8cb70a0e6166d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_user_control_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_9.UserControlOfIdleSettings", user_control_of_idle_settings, 0x80, 0x20, true, 0xe7804b522ea205f9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_9.Enabled", enabled, 0xa0, 0x20, true, 0x5792edead8d5a507)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_9.PowerUpIdleDeviceOnSystemWake", power_up_idle_device_on_system_wake, 0xc0, 0x20, true, 0xe58416ac25004603)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif