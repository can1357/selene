#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint60_t), "_MM_STORE_KEY.KeyLow", key_low, 0x0, 0x3c, true, 0xb1fda4fa5e47e6b4, 60, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MM_STORE_KEY.KeyHigh", key_high, 0x3c, 0x4, true, 0x29e516a8546fbfd, 4, uint64_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_STORE_KEY.EntireKey", entire_key, 0x0, 0x40, true, 0xa799c6b25e7e0e54)
#else
#define _m00
#define _m01
#define _m02
#endif