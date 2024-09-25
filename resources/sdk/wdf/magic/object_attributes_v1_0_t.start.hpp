#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_ATTRIBUTES_V1_0.Size", size, 0x0, 0x0, false, 0x60dfedf56658c74)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_0.EvtCleanupCallback", evt_cleanup_callback, 0x0, 0x0, false, 0xf6d29c4e6b5acecc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_0.EvtDestroyCallback", evt_destroy_callback, 0x0, 0x0, false, 0xb4f0f14ec3a598f3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "_WDF_OBJECT_ATTRIBUTES_V1_0.ExecutionLevel", execution_level, 0x0, 0x0, false, 0xad59be9d3d79c79d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "_WDF_OBJECT_ATTRIBUTES_V1_0.SynchronizationScope", synchronization_scope, 0x0, 0x0, false, 0xe46a7620437795d5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_OBJECT_ATTRIBUTES_V1_0.ParentObject", parent_object, 0x0, 0x0, false, 0x1e7aa23ab7c110cf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_ATTRIBUTES_V1_0.ContextSizeOverride", context_size_override, 0x0, 0x0, false, 0xe9a27af68ffb4a15)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_0_t ), "_WDF_OBJECT_ATTRIBUTES_V1_0.ContextTypeInfo", context_type_info, 0x0, 0x0, false, 0x7d1b65668f98c0f7)
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