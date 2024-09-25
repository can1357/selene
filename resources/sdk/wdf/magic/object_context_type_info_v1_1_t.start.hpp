#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_1.Size", size, 0x0, 0x0, false, 0x5779734c5640116e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_1.ContextName", context_name, 0x0, 0x0, false, 0xb14689feef8d5446)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_1.ContextSize", context_size, 0x0, 0x0, false, 0x2176a88fc6932f84)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_1_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_1.UniqueType", unique_type, 0x0, 0x0, false, 0xb60776adbdd0d29a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_get_unique_context_type_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_1.EvtDriverGetUniqueContextType", evt_driver_get_unique_context_type, 0x0, 0x0, false, 0xe1e9cafedff5ed34)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif