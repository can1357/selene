#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_NAME_CACHE_VOLUME_CTRL.Lock", lock, 0x0, 0xc0, true, 0xfc48de04baf89a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NAME_CACHE_VOLUME_CTRL.AllContextsTemporary", all_contexts_temporary, 0x1c0, 0x20, true, 0xb2b59a945101bbb8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NAME_CACHE_VOLUME_CTRL.LastDirectoryRenameCompleted", last_directory_rename_completed, 0x200, 0x40, true, 0x41e4f98cc87a7389)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NAME_CACHE_VOLUME_CTRL.LastFileRenameCompleted", last_file_rename_completed, 0x240, 0x40, true, 0x9233315b6b4ced8f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::name_cache_volume_ctrl_stats_t), "_NAME_CACHE_VOLUME_CTRL.Stats", stats, 0x280, 0x40, true, 0x75083e4acc5dc876)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif