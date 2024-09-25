#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_ATTRIBUTES_V1_13.Size", size, 0x0, 0x0, false, 0x1412741717b67b08)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_13.EvtCleanupCallback", evt_cleanup_callback, 0x0, 0x0, false, 0x26a2c6e2d2822436)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_13.EvtDestroyCallback", evt_destroy_callback, 0x0, 0x0, false, 0x1593e4ba4976efeb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "_WDF_OBJECT_ATTRIBUTES_V1_13.ExecutionLevel", execution_level, 0x0, 0x0, false, 0x8fbf9f24561dcd20)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "_WDF_OBJECT_ATTRIBUTES_V1_13.SynchronizationScope", synchronization_scope, 0x0, 0x0, false, 0xaf17a9cffc7f6157)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_OBJECT_ATTRIBUTES_V1_13.ParentObject", parent_object, 0x0, 0x0, false, 0x9b058b87e704fac0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_ATTRIBUTES_V1_13.ContextSizeOverride", context_size_override, 0x0, 0x0, false, 0x98ba65ecf2fdb9fc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_13_t ), "_WDF_OBJECT_ATTRIBUTES_V1_13.ContextTypeInfo", context_type_info, 0x0, 0x0, false, 0xd15bb56b37ade3b8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif