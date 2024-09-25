#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_ATTRIBUTES_V1_7.Size", size, 0x0, 0x0, false, 0xb1ebc4a32fa775f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_7.EvtCleanupCallback", evt_cleanup_callback, 0x0, 0x0, false, 0x94b9c47c0ef2e5fd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_7.EvtDestroyCallback", evt_destroy_callback, 0x0, 0x0, false, 0xb8a2e0ab213d19df)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "_WDF_OBJECT_ATTRIBUTES_V1_7.ExecutionLevel", execution_level, 0x0, 0x0, false, 0x21682efd9bc39b08)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "_WDF_OBJECT_ATTRIBUTES_V1_7.SynchronizationScope", synchronization_scope, 0x0, 0x0, false, 0x966425a64cc70b1b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_OBJECT_ATTRIBUTES_V1_7.ParentObject", parent_object, 0x0, 0x0, false, 0x263bf10962d920c4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_ATTRIBUTES_V1_7.ContextSizeOverride", context_size_override, 0x0, 0x0, false, 0x35aef69f1be5ef88)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_7_t ), "_WDF_OBJECT_ATTRIBUTES_V1_7.ContextTypeInfo", context_type_info, 0x0, 0x0, false, 0x6409e65ab7050f73)
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