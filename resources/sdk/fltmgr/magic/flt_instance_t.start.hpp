#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_object_t), "_FLT_INSTANCE.Base", base, 0x0, 0x80, true, 0x7fec4b622f799609)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_cache_aware_t*), "_FLT_INSTANCE.OperationRundownRef", operation_rundown_ref, 0x180, 0x40, true, 0x276472ff50352485)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_volume_t*), "_FLT_INSTANCE.Volume", volume, 0x1c0, 0x40, true, 0x1591b6bbe9044fbd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_filter_t*), "_FLT_INSTANCE.Filter", filter, 0x200, 0x40, true, 0xfd1abd92986e2da1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fltmgr::flt_instance_flags_t), "_FLT_INSTANCE.Flags", flags, 0x240, 0x20, true, 0x6399c6eb9180a0b6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_INSTANCE.Altitude", altitude, 0x280, 0x80, true, 0x5ccc1b4e014cde1e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_INSTANCE.Name", name, 0x300, 0x80, true, 0x49c614608ea88889)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FLT_INSTANCE.FilterLink", filter_link, 0x380, 0x80, true, 0xe86dd918818bb4c4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>), "_FLT_INSTANCE.ContextLock", context_lock, 0x400, 0x40, true, 0x332a69aa8b34bdd9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::context_node_t*), "_FLT_INSTANCE.Context", context, 0x440, 0x40, true, 0x6e212964ee78a945)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::context_list_ctrl_t), "_FLT_INSTANCE.TransactionContexts", transaction_contexts, 0x480, 0x40, true, 0x55cf92d906ab2536)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::track_completion_nodes_t*), "_FLT_INSTANCE.TrackCompletionNodes", track_completion_nodes, 0x4c0, 0x40, true, 0x9bd01182439b932f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct fltmgr::callback_node_t*, 50>), "_FLT_INSTANCE.CallbackNodes", callback_nodes, 0x500, 0x80, true, 0x92e00d3bbd513a32)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif