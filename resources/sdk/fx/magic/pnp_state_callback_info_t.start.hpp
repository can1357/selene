#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPnpStateCallbackInfo.Types", types, 0x0, 0x20, true, 0x1970b1a0e073ecb4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_pnp_state_change_notification_t ), "FxPnpStateCallbackInfo.Callback", callback, 0x40, 0x40, true, 0x4c2f4e6028d55102)
#else
#define _m00
#define _m01
#endif