#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_ATTRIBUTES_V1_11.Size", size, 0x0, 0x0, false, 0x8c50a91510f8a0a5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_11.EvtCleanupCallback", evt_cleanup_callback, 0x0, 0x0, false, 0x336d4a46750235a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_11.EvtDestroyCallback", evt_destroy_callback, 0x0, 0x0, false, 0x4d4c3020883454ce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "_WDF_OBJECT_ATTRIBUTES_V1_11.ExecutionLevel", execution_level, 0x0, 0x0, false, 0x773fd899609c9fe8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "_WDF_OBJECT_ATTRIBUTES_V1_11.SynchronizationScope", synchronization_scope, 0x0, 0x0, false, 0xd30e74a06c07220e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_OBJECT_ATTRIBUTES_V1_11.ParentObject", parent_object, 0x0, 0x0, false, 0xf362863144b0e161)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_ATTRIBUTES_V1_11.ContextSizeOverride", context_size_override, 0x0, 0x0, false, 0xf4ae76e2582321ce)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_11_t ), "_WDF_OBJECT_ATTRIBUTES_V1_11.ContextTypeInfo", context_type_info, 0x0, 0x0, false, 0x88418de8cc290553)
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