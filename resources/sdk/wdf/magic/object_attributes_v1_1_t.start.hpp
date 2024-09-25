#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_ATTRIBUTES_V1_1.Size", size, 0x0, 0x0, false, 0x3eec06ceb915b1e8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_1.EvtCleanupCallback", evt_cleanup_callback, 0x0, 0x0, false, 0x8b56a5498ac185c5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_1.EvtDestroyCallback", evt_destroy_callback, 0x0, 0x0, false, 0xcc7fdc2681db2b14)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "_WDF_OBJECT_ATTRIBUTES_V1_1.ExecutionLevel", execution_level, 0x0, 0x0, false, 0x36e78727db8d0765)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "_WDF_OBJECT_ATTRIBUTES_V1_1.SynchronizationScope", synchronization_scope, 0x0, 0x0, false, 0xd43a11b957bf1fa6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_OBJECT_ATTRIBUTES_V1_1.ParentObject", parent_object, 0x0, 0x0, false, 0x29c73070a716b3e2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_ATTRIBUTES_V1_1.ContextSizeOverride", context_size_override, 0x0, 0x0, false, 0x97ee53bcef5da392)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_1_t ), "_WDF_OBJECT_ATTRIBUTES_V1_1.ContextTypeInfo", context_type_info, 0x0, 0x0, false, 0xf57e21586c52302b)
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