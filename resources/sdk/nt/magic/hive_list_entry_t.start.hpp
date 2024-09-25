#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_HIVE_LIST_ENTRY.FileName", file_name, 0x0, 0x40, true, 0xab8e81dad76302e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_HIVE_LIST_ENTRY.BaseName", base_name, 0x40, 0x40, true, 0x84470e43b56bf7f8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_HIVE_LIST_ENTRY.RegRootName", reg_root_name, 0x80, 0x40, true, 0x8532472213f81b33)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cmhive_t*), "_HIVE_LIST_ENTRY.CmHive", cm_hive, 0xc0, 0x40, true, 0xa51883376e6466f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LIST_ENTRY.HHiveFlags", h_hive_flags, 0x100, 0x20, true, 0x9299db80e5891190)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LIST_ENTRY.CmHiveFlags", cm_hive_flags, 0x120, 0x20, true, 0x5e9ed7266c364739)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIVE_LIST_ENTRY.CmKcbCacheSize", cm_kcb_cache_size, 0x140, 0x20, true, 0x4b5f306042f2cb82)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cmhive_t*), "_HIVE_LIST_ENTRY.CmHive2", cm_hive2, 0x180, 0x40, true, 0x4f67680d91025f51)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HIVE_LIST_ENTRY.HiveMounted", hive_mounted, 0x1c0, 0x8, true, 0x25ba2e400a2f23ff)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HIVE_LIST_ENTRY.ThreadFinished", thread_finished, 0x1c8, 0x8, true, 0xeccfa0313d48635d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HIVE_LIST_ENTRY.ThreadStarted", thread_started, 0x1d0, 0x8, true, 0xe26d808a6414bae8)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HIVE_LIST_ENTRY.Allocate", allocate, 0x1d8, 0x8, true, 0xf9e4315ada07ee81)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HIVE_LIST_ENTRY.WinPERequired", win_pe_required, 0x1e0, 0x8, true, 0xa0e3ace0f84c4da4)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_HIVE_LIST_ENTRY.StartEvent", start_event, 0x200, 0xc0, true, 0xbff9f1236eaf0e21)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_HIVE_LIST_ENTRY.FinishedEvent", finished_event, 0x2c0, 0xc0, true, 0xf571f2129a66a967)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_HIVE_LIST_ENTRY.MountLock", mount_lock, 0x380, 0xc0, true, 0xfd7f6e71b1ff0937)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_HIVE_LIST_ENTRY.FilePath", file_path, 0x5c0, 0x80, true, 0x21af5ca629037b14)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_HIVE_LIST_ENTRY.MountCallbackLock", mount_callback_lock, 0x440, 0x40, true, 0x96626a5ad5244097)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_HIVE_LIST_ENTRY.CallbackListLock", callback_list_lock, 0x480, 0x40, true, 0xc2a44ed926cee4a)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HIVE_LIST_ENTRY.CallbackListHead", callback_list_head, 0x4c0, 0x80, true, 0xdb28164045c7ef96)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t*), "_HIVE_LIST_ENTRY.CallbackWorkItem", callback_work_item, 0x540, 0x40, true, 0xfd69bf721d58513b)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_HIVE_LIST_ENTRY.CallbackWorkItemBusy", callback_work_item_busy, 0x580, 0x20, true, 0x4b97f4747f845068)
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
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#endif