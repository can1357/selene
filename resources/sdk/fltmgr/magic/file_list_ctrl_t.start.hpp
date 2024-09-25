#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fltmgr::flt_type_t), "_FILE_LIST_CTRL.Type", type, 0x0, 0x20, true, 0x7722aeefa5b9963a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fsrtl_per_file_context_t), "_FILE_LIST_CTRL.ContextCtrl.FileContextCtrl", file_context_ctrl, 0x0, 0x40, true, 0x3be1e58caf0d4c82)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fsrtl_per_stream_context_t), "_FILE_LIST_CTRL.ContextCtrl.StreamContextCtrl", stream_context_ctrl, 0x0, 0x40, true, 0x88de0e9c32b2f5c2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_context_ctrl_t), "_FILE_LIST_CTRL.ContextCtrl", context_ctrl, 0x40, 0x40, true, 0x937c7feb57f758a3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FILE_LIST_CTRL.VolumeLink", volume_link, 0x180, 0x80, true, 0xcff9dce47159dc5c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fltmgr::file_list_ctrl_flags_t), "_FILE_LIST_CTRL.Flags", flags, 0x200, 0x20, true, 0x5c3d20624f385940)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FILE_LIST_CTRL.UseCount", use_count, 0x220, 0x20, true, 0xd376b2fa147fb780)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>), "_FILE_LIST_CTRL.ContextLock", context_lock, 0x240, 0x40, true, 0x9e189baccdcd7307)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::context_list_ctrl_t), "_FILE_LIST_CTRL.FileContexts", file_contexts, 0x280, 0x40, true, 0x5ed07e4db4cb90d7)
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
#endif