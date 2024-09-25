#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PERFINFO_PAGECOMBINE_AGGREGATE_STAT.StatType", stat_type, 0x0, 0x6, true, 0xc05f974d09e5b9e6, 6, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PAGECOMBINE_AGGREGATE_STAT.CombineScanCount", combine_scan_count, 0x20, 0x20, true, 0x723e1b69cffd4510)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PAGECOMBINE_AGGREGATE_STAT.PagesScanned", pages_scanned, 0x40, 0x40, true, 0x905133e3114f18c5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PAGECOMBINE_AGGREGATE_STAT.PagesCombined", pages_combined, 0x80, 0x40, true, 0x90694f0c86c0950b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_PAGECOMBINE_AGGREGATE_STAT.CombinedBlocksInUse", combined_blocks_in_use, 0xc0, 0x20, true, 0x74de133fdb8be9ca)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_PAGECOMBINE_AGGREGATE_STAT.SumCombinedBlocksReferenceCount", sum_combined_blocks_reference_count, 0xe0, 0x20, true, 0x3938246e001857e1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif