#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_0.Size", size, 0x0, 0x0, false, 0xc23f113f9d7afebc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_capabilities_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_0.IdleCaps", idle_caps, 0x0, 0x0, false, 0xa26aa4acfee338d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_0.DxState", dx_state, 0x0, 0x0, false, 0xb5cd6e36e038c8f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_0.IdleTimeout", idle_timeout, 0x0, 0x0, false, 0x53ffec39c30774e8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_s0_idle_user_control_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_0.UserControlOfIdleSettings", user_control_of_idle_settings, 0x0, 0x0, false, 0xa494395d5da93b5e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_0.Enabled", enabled, 0x0, 0x0, false, 0x3a324ff36b735c89)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif