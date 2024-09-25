#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxContextHeader.Object", object, 0x0, 0x40, true, 0xecc2b9af7e9f4a54)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::context_header_t*), "FxContextHeader.NextHeader", next_header, 0x40, 0x40, true, 0x6ac2438d5e7f8d7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "FxContextHeader.EvtCleanupCallback", evt_cleanup_callback, 0x80, 0x40, true, 0xf1cc200f6e3b41f2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "FxContextHeader.EvtDestroyCallback", evt_destroy_callback, 0xc0, 0x40, true, 0x61ddfa368ac23572)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct wdf::object_context_type_info_t*), "FxContextHeader.ContextTypeInfo", context_type_info, 0x100, 0x40, true, 0xd984ff56888e3afb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "FxContextHeader.Context", context, 0x180, 0x40, true, 0x9f5ac1cb9b2cb244)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif