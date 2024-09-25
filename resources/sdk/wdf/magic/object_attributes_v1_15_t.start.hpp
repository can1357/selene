#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_ATTRIBUTES_V1_15.Size", size, 0x0, 0x0, false, 0x8d9449d202450b2b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_15.EvtCleanupCallback", evt_cleanup_callback, 0x0, 0x0, false, 0xbfd4ea76a759ba76)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES_V1_15.EvtDestroyCallback", evt_destroy_callback, 0x0, 0x0, false, 0xbfc558eaf08b983d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "_WDF_OBJECT_ATTRIBUTES_V1_15.ExecutionLevel", execution_level, 0x0, 0x0, false, 0x8cc1e38169e6cc49)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "_WDF_OBJECT_ATTRIBUTES_V1_15.SynchronizationScope", synchronization_scope, 0x0, 0x0, false, 0xcf660ce10199f2bf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_OBJECT_ATTRIBUTES_V1_15.ParentObject", parent_object, 0x0, 0x0, false, 0xf137c5a5c15c8864)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_ATTRIBUTES_V1_15.ContextSizeOverride", context_size_override, 0x0, 0x0, false, 0x1c67bc9e9e71aa9d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_object_context_type_info_v1_15_t ), "_WDF_OBJECT_ATTRIBUTES_V1_15.ContextTypeInfo", context_type_info, 0x0, 0x0, false, 0xa2eac3d57d607e9e)
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