#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_7.Size", size, 0x0, 0x20, true, 0x885148267a11dca5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_capabilities_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_7.IdleCaps", idle_caps, 0x20, 0x20, true, 0xb986ba4be81a812e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_7.DxState", dx_state, 0x40, 0x20, true, 0x4519cff63c915565)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_7.IdleTimeout", idle_timeout, 0x60, 0x20, true, 0xf1b9d35fe1666649)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_user_control_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_7.UserControlOfIdleSettings", user_control_of_idle_settings, 0x80, 0x20, true, 0x306d1bb3f78c4f9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_7.Enabled", enabled, 0xa0, 0x20, true, 0x54746f6073d8f426)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif