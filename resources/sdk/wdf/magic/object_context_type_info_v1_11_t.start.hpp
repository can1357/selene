#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_11.Size", size, 0x0, 0x0, false, 0xfcd14ecea1489b0a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_11.ContextName", context_name, 0x0, 0x0, false, 0x5c66a756b0a43dc6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_11.ContextSize", context_size, 0x0, 0x0, false, 0x67ccc10cba1e2b31)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_11_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_11.UniqueType", unique_type, 0x0, 0x0, false, 0xae827e3c0df5dd2f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_get_unique_context_type_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_11.EvtDriverGetUniqueContextType", evt_driver_get_unique_context_type, 0x0, 0x0, false, 0x9e8d7adc87aaff8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif