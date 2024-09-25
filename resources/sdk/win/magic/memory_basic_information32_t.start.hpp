#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION32.BaseAddress", base_address, 0x0, 0x20, true, 0xc988995347fb5722)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION32.AllocationBase", allocation_base, 0x20, 0x20, true, 0x85735740a7d48c97)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION32.AllocationProtect", allocation_protect, 0x40, 0x20, true, 0xe3d9ecc29e9b32ee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION32.RegionSize", region_size, 0x60, 0x20, true, 0xca3cd612f264df1f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION32.State", state, 0x80, 0x20, true, 0x96f779b32d6b3623)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION32.Protect", protect, 0xa0, 0x20, true, 0x3af44899c5dca500)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION32.Type", type, 0xc0, 0x20, true, 0xf1d3919a4eb6c0ae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif