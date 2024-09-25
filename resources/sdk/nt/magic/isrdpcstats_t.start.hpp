#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ISRDPCSTATS.IsrTime", isr_time, 0x0, 0x40, true, 0x5de55fc1fbfd4dc1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ISRDPCSTATS.IsrTimeStart", isr_time_start, 0x40, 0x40, true, 0x3c59a08efd2e9ff0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ISRDPCSTATS.IsrCount", isr_count, 0x80, 0x40, true, 0x1e042c091e6096c9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ISRDPCSTATS.DpcTime", dpc_time, 0xc0, 0x40, true, 0xbca723e03bd322)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ISRDPCSTATS.DpcTimeStart", dpc_time_start, 0x100, 0x40, true, 0x4511c71d89b35f22)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ISRDPCSTATS.DpcCount", dpc_count, 0x140, 0x40, true, 0x26894b33f8c946e1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ISRDPCSTATS.IsrActive", isr_active, 0x180, 0x8, true, 0x639e40b10075d55b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::isrdpcstats_sequence_t), "_ISRDPCSTATS.DpcWatchdog", dpc_watchdog, 0x1c0, 0x40, true, 0x777c44e4c963526a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif