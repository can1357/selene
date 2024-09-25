#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_9.Size", size, 0x0, 0x0, false, 0x9f863eff7616ba44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_9.ContextName", context_name, 0x0, 0x0, false, 0x9a7bb7085d5f8b95)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_9.ContextSize", context_size, 0x0, 0x0, false, 0x3deaa31912191131)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_9_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_9.UniqueType", unique_type, 0x0, 0x0, false, 0x87393ac7aae43f64)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_get_unique_context_type_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_9.EvtDriverGetUniqueContextType", evt_driver_get_unique_context_type, 0x0, 0x0, false, 0xb058e0143fe30087)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif