#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_5.Size", size, 0x0, 0x0, false, 0xe6967b220ab6149a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_capabilities_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_5.IdleCaps", idle_caps, 0x0, 0x0, false, 0x9a644d62c2b1ba39)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_5.DxState", dx_state, 0x0, 0x0, false, 0x6089fb713cfd5c41)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_5.IdleTimeout", idle_timeout, 0x0, 0x0, false, 0xf5ef2d809e2fbbc8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_user_control_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_5.UserControlOfIdleSettings", user_control_of_idle_settings, 0x0, 0x0, false, 0xdc21e1c829728c92)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_5.Enabled", enabled, 0x0, 0x0, false, 0xc5e236e0495e7068)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif