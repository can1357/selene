#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_7.Size", size, 0x0, 0x0, false, 0xeb30934fe93c9b1b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_7.ContextName", context_name, 0x0, 0x0, false, 0x630199db5ea5b689)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_7.ContextSize", context_size, 0x0, 0x0, false, 0xccbd3bc517ee23d9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_7_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_7.UniqueType", unique_type, 0x0, 0x0, false, 0xcc9c70e5cbdb69da)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_get_unique_context_type_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_7.EvtDriverGetUniqueContextType", evt_driver_get_unique_context_type, 0x0, 0x0, false, 0xb69bb3c9e23c2f3c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif