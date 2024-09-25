#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PHYSICAL_MEMORY_INFORMATION.TotalPhysicalBytes", total_physical_bytes, 0x0, 0x40, true, 0x7d1008e5b7543a1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PHYSICAL_MEMORY_INFORMATION.LowestPhysicalAddress", lowest_physical_address, 0x40, 0x40, true, 0xbd7970e3c512956)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PHYSICAL_MEMORY_INFORMATION.HighestPhysicalAddress", highest_physical_address, 0x80, 0x40, true, 0xbfa238781e3bd691)
#else
#define _m00
#define _m01
#define _m02
#endif