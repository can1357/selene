#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_LAZY_WRITER.ScanTimer", scan_timer, 0x200, 0x0, true, 0xe61a4a485305f529)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LAZY_WRITER.ScanActive", scan_active, 0x400, 0x8, true, 0x7c2e3e91d66275ee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LAZY_WRITER.OtherWork", other_work, 0x408, 0x8, true, 0x2432a9024400c9ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LAZY_WRITER.PendingTeardownScan", pending_teardown_scan, 0x410, 0x8, true, 0x646eec99592a8512)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LAZY_WRITER.PendingPeriodicScan", pending_periodic_scan, 0x418, 0x8, true, 0xc3b3ee54cfb49e6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LAZY_WRITER.PendingLowMemoryScan", pending_low_memory_scan, 0x420, 0x8, true, 0xf40a5f82f0046111)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LAZY_WRITER.PendingPowerScan", pending_power_scan, 0x428, 0x8, true, 0xa28f252529377d82)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LAZY_WRITER.PendingCoalescingFlushScan", pending_coalescing_flush_scan, 0x430, 0x8, true, 0x3ea390ce5bf07ea9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_LAZY_WRITER.ScanDpc", scan_dpc, 0x0, 0x0, true, 0x248099d0380458e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LAZY_WRITER.TimerInitialized", timer_initialized, 0x0, 0x0, false, 0xc55dcf16146538b5)
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
#endif