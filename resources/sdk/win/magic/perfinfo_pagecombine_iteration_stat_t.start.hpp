#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PERFINFO_PAGECOMBINE_ITERATION_STAT.StatType", stat_type, 0x0, 0x6, true, 0xbfcce54e146d927, 6, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PAGECOMBINE_ITERATION_STAT.PagesScanned", pages_scanned, 0x20, 0x20, true, 0x5fb7357c6d60e2e6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PAGECOMBINE_ITERATION_STAT.PagesCombined", pages_combined, 0x40, 0x20, true, 0x60a698789f4b18fd)
#else
#define _m00
#define _m01
#define _m02
#endif