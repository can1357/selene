#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_OBJECT_ATTRIBUTES.Size", size, 0x0, 0x20, true, 0xb407b99765b39f8d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES.EvtCleanupCallback", evt_cleanup_callback, 0x40, 0x40, true, 0x815d6861f17ea2f2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WDF_OBJECT_ATTRIBUTES.EvtDestroyCallback", evt_destroy_callback, 0x80, 0x40, true, 0x6b46985e291f8691)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "_WDF_OBJECT_ATTRIBUTES.ExecutionLevel", execution_level, 0xc0, 0x20, true, 0x6faf172ae9162fcf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "_WDF_OBJECT_ATTRIBUTES.SynchronizationScope", synchronization_scope, 0xe0, 0x20, true, 0xcdc5db9af3f30958)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_OBJECT_ATTRIBUTES.ParentObject", parent_object, 0x100, 0x40, true, 0x213200787e757bd6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_OBJECT_ATTRIBUTES.ContextSizeOverride", context_size_override, 0x140, 0x40, true, 0xd9db8863dbf650d8)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct wdf::object_context_type_info_t*), "_WDF_OBJECT_ATTRIBUTES.ContextTypeInfo", context_type_info, 0x180, 0x40, true, 0x4fd6a1be6eac6618)
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