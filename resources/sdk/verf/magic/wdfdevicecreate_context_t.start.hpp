#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verf::common_context_header_t), "_VF_WDFDEVICECREATE_CONTEXT.CommonHeader", common_header, 0x0, 0x40, true, 0x29f56eb556aa1c88)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::pnppower_event_callbacks_t), "_VF_WDFDEVICECREATE_CONTEXT.PnpPowerEventCallbacksOriginal", pnp_power_event_callbacks_original, 0x40, 0x80, true, 0xb68a1d4958954f32)
#else
#define _m00
#define _m01
#endif