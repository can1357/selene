#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_RANGE_ENTRY.VirtualAddress", virtual_address, 0x0, 0x40, true, 0x37810f4ea896839)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_RANGE_ENTRY.NumberOfBytes", number_of_bytes, 0x40, 0x40, true, 0xd177479a721360d3)
#else
#define _m00
#define _m01
#endif