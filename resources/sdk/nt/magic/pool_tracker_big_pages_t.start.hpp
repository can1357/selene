#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_POOL_TRACKER_BIG_PAGES.Va", va, 0x0, 0x40, true, 0x3fadbbc844edc5eb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POOL_TRACKER_BIG_PAGES.Key", key, 0x40, 0x20, true, 0x307614f3db0add8)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_POOL_TRACKER_BIG_PAGES.Pattern", pattern, 0x60, 0x8, true, 0xb0f7b0aef7037bce, 8, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_POOL_TRACKER_BIG_PAGES.PoolType", pool_type, 0x68, 0xc, true, 0x5d0eef7bbd082a57, 12, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_POOL_TRACKER_BIG_PAGES.SlushSize", slush_size, 0x74, 0xc, true, 0x407713128289f3a8, 12, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOL_TRACKER_BIG_PAGES.NumberOfBytes", number_of_bytes, 0x80, 0x40, true, 0x1c479337926fefad)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_POOL_TRACKER_BIG_PAGES.ProcessBilled", process_billed, 0x0, 0x0, false, 0x5e31c67418fb964d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif