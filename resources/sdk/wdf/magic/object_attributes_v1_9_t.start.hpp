#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_ATTRIBUTES_V1_9.Size", size, 0x0, 0x0, false, 0xf3b0e6662865c1e8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_9.EvtCleanupCallback", evt_cleanup_callback, 0x0, 0x0, false, 0x627ef18bfa7bfeec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_9.EvtDestroyCallback", evt_destroy_callback, 0x0, 0x0, false, 0x34cd4f109fe41b3c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "_WDF_OBJECT_ATTRIBUTES_V1_9.ExecutionLevel", execution_level, 0x0, 0x0, false, 0xce8dad5e8d889ac2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "_WDF_OBJECT_ATTRIBUTES_V1_9.SynchronizationScope", synchronization_scope, 0x0, 0x0, false, 0x56c91210944cdb32)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_OBJECT_ATTRIBUTES_V1_9.ParentObject", parent_object, 0x0, 0x0, false, 0xeb7e76a41900ce78)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_ATTRIBUTES_V1_9.ContextSizeOverride", context_size_override, 0x0, 0x0, false, 0x8384e347a16098ce)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_9_t ), "_WDF_OBJECT_ATTRIBUTES_V1_9.ContextTypeInfo", context_type_info, 0x0, 0x0, false, 0x85e25d4e420461b8)
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