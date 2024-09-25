#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_MEMORY_INFO.BaseAddress", base_address, 0x0, 0x40, true, 0x4ef179b4150473bc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_MEMORY_INFO.AllocationBase", allocation_base, 0x40, 0x40, true, 0x90ede71b0c30cbcf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_MEMORY_INFO.AllocationProtect", allocation_protect, 0x80, 0x20, true, 0xa60e752642ef0426)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_MEMORY_INFO.__alignment1", alignment1, 0xa0, 0x20, true, 0xa44dd24b13cf8d1e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MINIDUMP_MEMORY_INFO.RegionSize", region_size, 0xc0, 0x40, true, 0xc95591f7f81b2529)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_MEMORY_INFO.State", state, 0x100, 0x20, true, 0xf02053cef588aad3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_MEMORY_INFO.Protect", protect, 0x120, 0x20, true, 0xc0fbea85242ac487)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_MEMORY_INFO.Type", type, 0x140, 0x20, true, 0x9ebd08df305c67a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MINIDUMP_MEMORY_INFO.__alignment2", alignment2, 0x160, 0x20, true, 0xc9bb0ab620567e6f)
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