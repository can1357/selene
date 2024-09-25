#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ISRDPCSTATS_SEQUENCE.SequenceNumber", sequence_number, 0x0, 0x20, true, 0xca1941a14dde803e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ISRDPCSTATS_SEQUENCE.IsrTime", isr_time, 0x40, 0x40, true, 0x529c88dadff5085c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ISRDPCSTATS_SEQUENCE.IsrCount", isr_count, 0x80, 0x40, true, 0x3c95b2dbb5460914)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ISRDPCSTATS_SEQUENCE.DpcTime", dpc_time, 0xc0, 0x40, true, 0x8247457d220aebd1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ISRDPCSTATS_SEQUENCE.DpcCount", dpc_count, 0x100, 0x40, true, 0xd08de10d264e7baf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif