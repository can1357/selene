#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_ATTRIBUTES_V1_17.Size", size, 0x0, 0x0, false, 0xf59547f89e1ca92f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_17.EvtCleanupCallback", evt_cleanup_callback, 0x0, 0x0, false, 0x50bf77c14dbcd189)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_17.EvtDestroyCallback", evt_destroy_callback, 0x0, 0x0, false, 0x4b00b540b1f26e9a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "_WDF_OBJECT_ATTRIBUTES_V1_17.ExecutionLevel", execution_level, 0x0, 0x0, false, 0xd87c9f9ed8195504)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "_WDF_OBJECT_ATTRIBUTES_V1_17.SynchronizationScope", synchronization_scope, 0x0, 0x0, false, 0xabac12c269af899d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_OBJECT_ATTRIBUTES_V1_17.ParentObject", parent_object, 0x0, 0x0, false, 0x5a30810255d50c9b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_ATTRIBUTES_V1_17.ContextSizeOverride", context_size_override, 0x0, 0x0, false, 0x9f3c35da095e6a53)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_17_t ), "_WDF_OBJECT_ATTRIBUTES_V1_17.ContextTypeInfo", context_type_info, 0x0, 0x0, false, 0x414e1be46496ccb3)
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