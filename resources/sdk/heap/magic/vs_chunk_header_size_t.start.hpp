#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_HEAP_VS_CHUNK_HEADER_SIZE.MemoryCost", memory_cost, 0x0, 0x10, true, 0x239ad32426f801a2, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_HEAP_VS_CHUNK_HEADER_SIZE.UnsafeSize", unsafe_size, 0x10, 0x10, true, 0xac41d270f972e1b4, 16, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_HEAP_VS_CHUNK_HEADER_SIZE.UnsafePrevSize", unsafe_prev_size, 0x20, 0x10, true, 0x8eeb8ce771b693c8, 16, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_HEAP_VS_CHUNK_HEADER_SIZE.Allocated", allocated, 0x30, 0x8, true, 0x394cc47e8e7a8d, 8, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_VS_CHUNK_HEADER_SIZE.KeyUShort", key_u_short, 0x0, 0x10, true, 0x5381894e5e1e7384)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_VS_CHUNK_HEADER_SIZE.KeyULong", key_u_long, 0x0, 0x20, true, 0x78f2b4d29912bd29)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_VS_CHUNK_HEADER_SIZE.HeaderBits", header_bits, 0x0, 0x40, true, 0x7b9aaf6e6dac9e6a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif