#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "FxTraceInfo.DriverObject", driver_object, 0x0, 0x40, true, 0xe2eaf02b6ca12f6a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint8_t, void*, uint32_t, void*, void*, uint32_t*)>*), "FxTraceInfo.Callback", callback, 0x40, 0x40, true, 0xbdf0f8204421e0ae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxTraceInfo.Context", context, 0x80, 0x40, true, 0x58e1c862b69e98e1)
#else
#define _m00
#define _m01
#define _m02
#endif