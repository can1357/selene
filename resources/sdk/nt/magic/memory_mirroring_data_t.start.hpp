#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_MIRRORING_DATA.MemoryRangeCount", memory_range_count, 0x0, 0x0, false, 0xdd40c7354ee177e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_MIRRORING_DATA.IoSpaceRangeCount", io_space_range_count, 0x0, 0x0, false, 0x3a83a7ad484f2cc2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::loader_memory_range_t*), "_MEMORY_MIRRORING_DATA.MemoryRanges", memory_ranges, 0x0, 0x0, false, 0x55751246e950d35a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::loader_memory_range_t*), "_MEMORY_MIRRORING_DATA.IoSpaceRanges", io_space_ranges, 0x0, 0x0, false, 0x1119a9c75d5097cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif