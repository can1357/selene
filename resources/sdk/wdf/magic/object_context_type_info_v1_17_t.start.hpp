#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_17.Size", size, 0x0, 0x0, false, 0x772a788690efbd57)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_17.ContextName", context_name, 0x0, 0x0, false, 0x3187caeafbc84cca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_17.ContextSize", context_size, 0x0, 0x0, false, 0x5374a4685c0d0ab7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_17_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_17.UniqueType", unique_type, 0x0, 0x0, false, 0x1e8fff2e94308dd2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_get_unique_context_type_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_17.EvtDriverGetUniqueContextType", evt_driver_get_unique_context_type, 0x0, 0x0, false, 0x18650fd9bf63dcc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif