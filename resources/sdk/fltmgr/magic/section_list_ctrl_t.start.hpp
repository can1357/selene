#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::stream_list_ctrl_t*), "_SECTION_LIST_CTRL.StreamList", stream_list, 0x0, 0x40, true, 0xeafdaf12eb2971f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_cache_aware_t*), "_SECTION_LIST_CTRL.RundownRef", rundown_ref, 0x40, 0x40, true, 0xcdeeca6d7c80d11)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_SECTION_LIST_CTRL.Event", event, 0x80, 0xc0, true, 0x1d58dbb8510f5194)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::context_list_ctrl_t), "_SECTION_LIST_CTRL.CtxList", ctx_list, 0x140, 0x40, true, 0xeb0be55b7681c68b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::section_conflict_queue_t), "_SECTION_LIST_CTRL.ConflictQueue", conflict_queue, 0x180, 0x0, true, 0x6079e4ae029b71ff)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif