#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPowerStateCallbackInfo.Types", types, 0x0, 0x20, true, 0x600098e9657d1864)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_power_state_change_notification_t ), "FxPowerStateCallbackInfo.Callback", callback, 0x40, 0x40, true, 0x19b692a281782597)
#else
#define _m00
#define _m01
#endif