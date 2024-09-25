#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPowerPolicyStateCallbackInfo.Types", types, 0x0, 0x20, true, 0x6f384d1e7b3e398e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_power_policy_state_change_notification_t ), "FxPowerPolicyStateCallbackInfo.Callback", callback, 0x40, 0x40, true, 0xfdb7ce3b33162256)
#else
#define _m00
#define _m01
#endif