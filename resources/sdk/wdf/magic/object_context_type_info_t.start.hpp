#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO.Size", size, 0x0, 0x20, true, 0x6dfdfd438fc9bc99)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<char*, const char*>), "_WDF_OBJECT_CONTEXT_TYPE_INFO.ContextName", context_name, 0x40, 0x40, true, 0x6e30283bc24ff7f5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO.ContextSize", context_size, 0x80, 0x40, true, 0x4c555f1f27851b3e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct wdf::object_context_type_info_t*), "_WDF_OBJECT_CONTEXT_TYPE_INFO.UniqueType", unique_type, 0xc0, 0x40, true, 0xe7212c43bc909c56)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_get_unique_context_type_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO.EvtDriverGetUniqueContextType", evt_driver_get_unique_context_type, 0x100, 0x40, true, 0xb321e9174576d4fd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif