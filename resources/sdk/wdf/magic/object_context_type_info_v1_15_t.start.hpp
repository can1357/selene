#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_15.Size", size, 0x0, 0x0, false, 0xb944889ea1827e8e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_15.ContextName", context_name, 0x0, 0x0, false, 0xee09d46e669ac991)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_15.ContextSize", context_size, 0x0, 0x0, false, 0x9137772f79fa0d3e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_15_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_15.UniqueType", unique_type, 0x0, 0x0, false, 0x2868a1014b71afd7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_get_unique_context_type_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_15.EvtDriverGetUniqueContextType", evt_driver_get_unique_context_type, 0x0, 0x0, false, 0xe36a6a6ab0580d0f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif