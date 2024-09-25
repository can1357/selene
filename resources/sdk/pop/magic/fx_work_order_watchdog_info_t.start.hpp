#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_POP_FX_WORK_ORDER_WATCHDOG_INFO.Timer", timer, 0x80, 0x0, true, 0xceaa31f25ae066d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_POP_FX_WORK_ORDER_WATCHDOG_INFO.Dpc", dpc, 0x280, 0x0, true, 0xddc9cf06e9f42c4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_work_order_t*), "_POP_FX_WORK_ORDER_WATCHDOG_INFO.WorkOrder", work_order, 0x480, 0x40, true, 0xce230de7a9485a4d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_FX_WORK_ORDER_WATCHDOG_INFO.Link", link, 0x0, 0x80, true, 0x701d57a55d61c244)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::work_information_t*), "_POP_FX_WORK_ORDER_WATCHDOG_INFO.CurrentWorkInfo", current_work_info, 0x4c0, 0x40, true, 0x3029ef91d400b6dc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_WORK_ORDER_WATCHDOG_INFO.WatchdogStart", watchdog_start, 0x500, 0x40, true, 0x30f3524d3f427475)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_POP_FX_WORK_ORDER_WATCHDOG_INFO.WorkerThread", worker_thread, 0x540, 0x40, true, 0xa430eb4403386630)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif