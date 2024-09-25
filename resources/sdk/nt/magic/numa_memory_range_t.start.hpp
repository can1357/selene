#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NUMA_MEMORY_RANGE.ProximityId", proximity_id, 0x0, 0x20, true, 0x73542d6faa374ca1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NUMA_MEMORY_RANGE.BasePage", base_page, 0x40, 0x40, true, 0xa226ac143e06bb6a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NUMA_MEMORY_RANGE.EndPage", end_page, 0x80, 0x40, true, 0x59cbe03a43d907cd)
#else
#define _m00
#define _m01
#define _m02
#endif