#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_BASIC_INFORMATION64.BaseAddress", base_address, 0x0, 0x40, true, 0x14f96910307f9316)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_BASIC_INFORMATION64.AllocationBase", allocation_base, 0x40, 0x40, true, 0x40908c805d91e3cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION64.AllocationProtect", allocation_protect, 0x80, 0x20, true, 0xd8d3df416265d292)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION64.__alignment1", alignment1, 0xa0, 0x20, true, 0x7440fe5c8de4495d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_BASIC_INFORMATION64.RegionSize", region_size, 0xc0, 0x40, true, 0x91f609ad4fe3eab4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION64.State", state, 0x100, 0x20, true, 0x7bc48295ca8f72e4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION64.Protect", protect, 0x120, 0x20, true, 0xa167f4f79b8fa55d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION64.Type", type, 0x140, 0x20, true, 0xbeb0cdf2befaa4ab)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION64.__alignment2", alignment2, 0x160, 0x20, true, 0xc739e58728efd597)
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