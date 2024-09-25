#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SYSTEM_VA_ASSIGNMENT.BaseAddress", base_address, 0x0, 0x40, true, 0x7b718b06eabe1edb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_VA_ASSIGNMENT.NumberOfBytes", number_of_bytes, 0x40, 0x40, true, 0xebdac345b47d0496)
#else
#define _m00
#define _m01
#endif