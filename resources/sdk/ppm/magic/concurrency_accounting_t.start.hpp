#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_CONCURRENCY_ACCOUNTING.Lock", lock, 0x0, 0x40, true, 0x67fcfd26106434a1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_CONCURRENCY_ACCOUNTING.Processors", processors, 0x40, 0x20, true, 0xf8080159cccf1079)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_CONCURRENCY_ACCOUNTING.ActiveProcessors", active_processors, 0x60, 0x20, true, 0xf618c33108a7102b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_CONCURRENCY_ACCOUNTING.LastUpdateTime", last_update_time, 0x80, 0x40, true, 0xacc8b0833826cc41)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_CONCURRENCY_ACCOUNTING.TotalTime", total_time, 0xc0, 0x40, true, 0x248a8f791d0c1a43)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_PPM_CONCURRENCY_ACCOUNTING.AccumulatedTime", accumulated_time, 0x100, 0x40, true, 0x533b7638ff97ea86)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<volatile uint64_t, 37>), "_PPM_CONCURRENCY_ACCOUNTING.IdleIntervalStats", idle_interval_stats, 0x0, 0x0, false, 0x3e52e0e3abe7b0db)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif