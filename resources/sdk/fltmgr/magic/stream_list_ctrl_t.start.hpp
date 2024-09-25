#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fltmgr::flt_type_t), "_STREAM_LIST_CTRL.Type", type, 0x0, 0x20, true, 0x5868d8e10d49bf64)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_STREAM_LIST_CTRL.AllNameContextsTemporary", all_name_contexts_temporary, 0x20, 0x20, true, 0x2728064b54c92a44)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fsrtl_per_stream_context_t), "_STREAM_LIST_CTRL.ContextCtrl", context_ctrl, 0x40, 0x40, true, 0x615af3fdfcf309aa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_STREAM_LIST_CTRL.VolumeLink", volume_link, 0x180, 0x80, true, 0x2f1d6f0a054a8b1d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAM_LIST_CTRL.Flags", flags, 0x200, 0x20, true, 0xb434b90fcfd87865)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_STREAM_LIST_CTRL.UseCount", use_count, 0x220, 0x20, true, 0x7ac8f8c1471e4a81)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>), "_STREAM_LIST_CTRL.ContextLock", context_lock, 0x240, 0x40, true, 0xbab8c2ce1d829d16)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::context_list_ctrl_t), "_STREAM_LIST_CTRL.StreamContexts", stream_contexts, 0x280, 0x40, true, 0x3aab7b3644e798f5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::context_list_ctrl_t), "_STREAM_LIST_CTRL.StreamHandleContexts", stream_handle_contexts, 0x2c0, 0x40, true, 0x5dbf4879dd43a7c5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::section_list_ctrl_t*), "_STREAM_LIST_CTRL.SectionContexts", section_contexts, 0x300, 0x40, true, 0x118320a3e3e02a19)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>), "_STREAM_LIST_CTRL.NameCacheLock", name_cache_lock, 0x340, 0x40, true, 0xbd3d17b0a2da9bcb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_STREAM_LIST_CTRL.LastRenameCompleted", last_rename_completed, 0x380, 0x40, true, 0x6d9453857a1ad1c4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::name_cache_list_ctrl_t), "_STREAM_LIST_CTRL.NormalizedNameCache", normalized_name_cache, 0x3c0, 0x80, true, 0x8855225768cf9a46)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::name_cache_list_ctrl_t), "_STREAM_LIST_CTRL.ShortNameCache", short_name_cache, 0x440, 0x80, true, 0x840d517ddd98edb1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::name_cache_list_ctrl_t), "_STREAM_LIST_CTRL.OpenedNameCache", opened_name_cache, 0x4c0, 0x80, true, 0x79bf46f707d39afd)
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
#define _m13
#define _m14
#endif