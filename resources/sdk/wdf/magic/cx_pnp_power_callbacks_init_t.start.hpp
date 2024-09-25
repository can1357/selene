#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "CxPnpPowerCallbacksInit.Set", set, 0xd40, 0x8, true, 0xb4f49575a2dff36d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcx_pnppower_event_callbacks_t), "CxPnpPowerCallbacksInit.PnpPowerCallbacks", pnp_power_callbacks, 0x0, 0xc0, true, 0x8f32a9466c44e7fd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcx_power_policy_event_callbacks_t), "CxPnpPowerCallbacksInit.PowerPolicyCallbacks", power_policy_callbacks, 0x8c0, 0x80, true, 0xa1e10a42ec216539)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcx_pnppower_event_callbacks_t), "CxPnpPowerCallbacksInit.Callbacks", callbacks, 0x0, 0x0, false, 0x4d5ff6d9813aba8a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif