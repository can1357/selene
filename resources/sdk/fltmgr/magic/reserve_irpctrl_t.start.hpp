#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct fltmgr::irp_ctrl_t*, 10>), "_RESERVE_IRPCTRL.StaticIrpCtrl", static_irp_ctrl, 0x0, 0x80, true, 0x4935637cceca423d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kthread_t*, 10>), "_RESERVE_IRPCTRL.StaticOwningThread", static_owning_thread, 0x280, 0x80, true, 0x7f86d2a6334a291e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::ksemaphore_t, 10>), "_RESERVE_IRPCTRL.StaticLock", static_lock, 0x500, 0x0, true, 0x83fe3466f0a7bc76)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksemaphore_t), "_RESERVE_IRPCTRL.EntriesLock", entries_lock, 0xf00, 0x0, true, 0x1b9d5ba3b7972491)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct fltmgr::backpocket_thread_entry_t, 3>), "_RESERVE_IRPCTRL.Entries", entries, 0x1000, 0x40, true, 0xc1baac949c4dc2f2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif