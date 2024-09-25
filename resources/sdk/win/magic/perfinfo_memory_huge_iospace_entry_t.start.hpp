#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_MEMORY_HUGE_IOSPACE_ENTRY.NodeNumber", node_number, 0x0, 0x0, false, 0x9b563742b064cad5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_HUGE_IOSPACE_ENTRY.TotalPageCount", total_page_count, 0x0, 0x0, false, 0xcc4469267e851a5f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_HUGE_IOSPACE_ENTRY.HugeFreePageCount", huge_free_page_count, 0x0, 0x0, false, 0x323ca664254558f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_HUGE_IOSPACE_ENTRY.HugeZeroPageCount", huge_zero_page_count, 0x0, 0x0, false, 0xc645cc0e34717acd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif