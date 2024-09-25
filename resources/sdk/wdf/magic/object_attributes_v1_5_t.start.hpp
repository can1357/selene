#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_ATTRIBUTES_V1_5.Size", size, 0x0, 0x0, false, 0x9d6828c97a6b9d93)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_5.EvtCleanupCallback", evt_cleanup_callback, 0x0, 0x0, false, 0xc168cc6e1eb2fb68)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_5.EvtDestroyCallback", evt_destroy_callback, 0x0, 0x0, false, 0xc42e5763124d2bd3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "_WDF_OBJECT_ATTRIBUTES_V1_5.ExecutionLevel", execution_level, 0x0, 0x0, false, 0x470fdb7038384462)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "_WDF_OBJECT_ATTRIBUTES_V1_5.SynchronizationScope", synchronization_scope, 0x0, 0x0, false, 0x9fe879ba225eadc9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_OBJECT_ATTRIBUTES_V1_5.ParentObject", parent_object, 0x0, 0x0, false, 0xd94181763f687160)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_ATTRIBUTES_V1_5.ContextSizeOverride", context_size_override, 0x0, 0x0, false, 0xb8b6be123d8b67b6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_5_t ), "_WDF_OBJECT_ATTRIBUTES_V1_5.ContextTypeInfo", context_type_info, 0x0, 0x0, false, 0xc25e0eb21f6cd3b)
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