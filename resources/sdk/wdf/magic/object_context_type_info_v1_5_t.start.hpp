#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_5.Size", size, 0x0, 0x0, false, 0xf970a135765225f7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_5.ContextName", context_name, 0x0, 0x0, false, 0x6d50d30f44235d0b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_5.ContextSize", context_size, 0x0, 0x0, false, 0x96d7a645b98018b1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_5_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_5.UniqueType", unique_type, 0x0, 0x0, false, 0x620deecb66da5e58)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_get_unique_context_type_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_5.EvtDriverGetUniqueContextType", evt_driver_get_unique_context_type, 0x0, 0x0, false, 0x4a1d61eeb94d319a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif