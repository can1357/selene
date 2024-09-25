#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxCxDeviceInfo.ListEntry", list_entry, 0x0, 0x80, true, 0xdb2646cdd35e228e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::driver_t*), "FxCxDeviceInfo.Driver", driver, 0x80, 0x40, true, 0x45ca1f124f0ccfe1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_in_caller_context_t), "FxCxDeviceInfo.IoInCallerContextCallback", io_in_caller_context_callback, 0xc0, 0x40, true, 0x3cd4197f1a5f97a2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t), "FxCxDeviceInfo.RequestAttributes", request_attributes, 0x100, 0xc0, true, 0xef682ff2522901f5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "FxCxDeviceInfo.Index", index, 0x2c0, 0x8, true, 0x89d01df54d40951e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<class fx::cx_pnp_power_callback_context_t*, 10>), "FxCxDeviceInfo.CxPnpPowerCallbackContexts", cx_pnp_power_callback_contexts, 0x300, 0x40, true, 0x38d5a68a0cd88df6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif