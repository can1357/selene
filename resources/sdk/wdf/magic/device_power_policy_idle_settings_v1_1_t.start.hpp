#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_1.Size", size, 0x0, 0x0, false, 0xeb3f1ef1fb85cbbf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_capabilities_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_1.IdleCaps", idle_caps, 0x0, 0x0, false, 0x8cc054d3069ccd2c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_1.DxState", dx_state, 0x0, 0x0, false, 0x4dd9c83d53d88fd8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_1.IdleTimeout", idle_timeout, 0x0, 0x0, false, 0x82f5e8a75b0ccf1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_user_control_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_1.UserControlOfIdleSettings", user_control_of_idle_settings, 0x0, 0x0, false, 0x63d61596fe1726ba)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_1.Enabled", enabled, 0x0, 0x0, false, 0xf2526d84d2554055)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif