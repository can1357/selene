#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_list_t), "_KDPC_DATA.DpcList", dpc_list, 0x0, 0x80, true, 0xefb16245e2079b11)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KDPC_DATA.DpcLock", dpc_lock, 0x80, 0x40, true, 0xaf8e882f99b71f93)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KDPC_DATA.DpcQueueDepth", dpc_queue_depth, 0xc0, 0x20, true, 0xbba7526b98d4819a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDPC_DATA.DpcCount", dpc_count, 0xe0, 0x20, true, 0xff9c69c107c886c7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t volatile*), "_KDPC_DATA.ActiveDpc", active_dpc, 0x100, 0x40, true, 0x4865d09cf394fc52)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDPC_DATA.LongDpcPresent", long_dpc_present, 0x0, 0x0, false, 0x5ec23a1656a6ae53)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif