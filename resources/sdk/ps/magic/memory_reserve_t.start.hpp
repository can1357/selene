#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_MEMORY_RESERVE.ReserveAddress", reserve_address, 0x0, 0x40, true, 0xd99f0e42b88201cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_MEMORY_RESERVE.ReserveSize", reserve_size, 0x40, 0x40, true, 0x33ad5a315085fd17)
#else
#define _m00
#define _m01
#endif