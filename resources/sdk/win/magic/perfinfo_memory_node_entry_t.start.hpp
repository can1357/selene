#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_MEMORY_NODE_ENTRY.NodeNumber", node_number, 0x0, 0x20, true, 0xa16728f71f5e071c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_NODE_ENTRY.TotalPageCount", total_page_count, 0x20, 0x40, true, 0xfa5311b26cbef7f5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_NODE_ENTRY.SmallFreePageCount", small_free_page_count, 0x60, 0x40, true, 0xe6eb883611bf0d94)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_NODE_ENTRY.SmallZeroPageCount", small_zero_page_count, 0xa0, 0x40, true, 0xaa0fd030e1d32d1e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_NODE_ENTRY.MediumFreePageCount", medium_free_page_count, 0xe0, 0x40, true, 0xeaa7ccf9b1aa0c7d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_NODE_ENTRY.MediumZeroPageCount", medium_zero_page_count, 0x120, 0x40, true, 0x36f888b7e87e14b3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_NODE_ENTRY.LargeFreePageCount", large_free_page_count, 0x160, 0x40, true, 0x7d9bcd232e497a12)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_NODE_ENTRY.LargeZeroPageCount", large_zero_page_count, 0x1a0, 0x40, true, 0x730931daa345c0ac)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_NODE_ENTRY.HugeFreePageCount", huge_free_page_count, 0x1e0, 0x40, true, 0x1f61f6bb7ab24b73)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_NODE_ENTRY.HugeZeroPageCount", huge_zero_page_count, 0x220, 0x40, true, 0xbddefd87acf13b8e)
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