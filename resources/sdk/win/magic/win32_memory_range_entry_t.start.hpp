#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WIN32_MEMORY_RANGE_ENTRY.VirtualAddress", virtual_address, 0x0, 0x40, true, 0xb58fa218c9a206ef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WIN32_MEMORY_RANGE_ENTRY.NumberOfBytes", number_of_bytes, 0x40, 0x40, true, 0xb7f8b05481af3af1)
#else
#define _m00
#define _m01
#endif