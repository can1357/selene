#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_13.Size", size, 0x0, 0x0, false, 0xc77134c809e78dc8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_13.ContextName", context_name, 0x0, 0x0, false, 0x407897f763376b0c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_13.ContextSize", context_size, 0x0, 0x0, false, 0x4d8200b0c117edb9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_13_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_13.UniqueType", unique_type, 0x0, 0x0, false, 0xe79eca37efd47a35)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_get_unique_context_type_t ), "_WDF_OBJECT_CONTEXT_TYPE_INFO_V1_13.EvtDriverGetUniqueContextType", evt_driver_get_unique_context_type, 0x0, 0x0, false, 0xff776e5ce06f6d4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif