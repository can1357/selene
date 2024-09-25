#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_POP_FX_WORK_ORDER.WorkItem", work_item, 0x0, 0x0, true, 0x76f60bf6afe0efe6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_FX_WORK_ORDER.WorkCount", work_count, 0x100, 0x20, true, 0x51b03b682216fef7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_FX_WORK_ORDER.Context", context, 0x140, 0x40, true, 0xbde841e853f909b4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_work_order_watchdog_info_t*), "_POP_FX_WORK_ORDER.WatchdogTimerInfo", watchdog_timer_info, 0x180, 0x40, true, 0x68ef1546df9211f3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif