#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_NODE_PAGE_INFORMATION.TotalPageCount", total_page_count, 0x0, 0x40, true, 0x9445193d3fdcb956)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_NODE_PAGE_INFORMATION.SmallFreePageCount", small_free_page_count, 0x40, 0x40, true, 0xde01a82fd664ff6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_NODE_PAGE_INFORMATION.SmallZeroPageCount", small_zero_page_count, 0x80, 0x40, true, 0x6a868e06df5b7506)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_NODE_PAGE_INFORMATION.MediumFreePageCount", medium_free_page_count, 0xc0, 0x40, true, 0x27cb01c819923579)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_NODE_PAGE_INFORMATION.MediumZeroPageCount", medium_zero_page_count, 0x100, 0x40, true, 0x524eb0ca0322c4f4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_NODE_PAGE_INFORMATION.LargeFreePageCount", large_free_page_count, 0x140, 0x40, true, 0x3c31930ea731a465)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_NODE_PAGE_INFORMATION.LargeZeroPageCount", large_zero_page_count, 0x180, 0x40, true, 0x69a516e14b001a51)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_NODE_PAGE_INFORMATION.HugeFreePageCount", huge_free_page_count, 0x1c0, 0x40, true, 0xa6161a3a5f012863)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_NODE_PAGE_INFORMATION.HugeZeroPageCount", huge_zero_page_count, 0x200, 0x40, true, 0xaef05c15827befbd)
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
#endif