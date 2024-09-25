#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_LFH_SUBSEGMENT_DELAY_FREE.DelayFree", delay_free, 0x0, 0x1, true, 0x6ac74643d38bbfca, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint63_t), "_HEAP_LFH_SUBSEGMENT_DELAY_FREE.Count", count, 0x1, 0x3f, true, 0x9cd80faa6a8477d8, 63, uint64_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_LFH_SUBSEGMENT_DELAY_FREE.AllBits", all_bits, 0x0, 0x40, true, 0x2c897d54e217a3f1)
#else
#define _m00
#define _m01
#define _m02
#endif