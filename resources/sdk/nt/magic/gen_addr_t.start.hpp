#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GEN_ADDR.AddressSpaceID", address_space_id, 0x0, 0x8, true, 0xfb1b8b6f32f56024)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GEN_ADDR.BitWidth", bit_width, 0x8, 0x8, true, 0x12d6db2512d98e4c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GEN_ADDR.BitOffset", bit_offset, 0x10, 0x8, true, 0xed9960d8039b3ad6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GEN_ADDR.AccessSize", access_size, 0x18, 0x8, true, 0xffc4921c992c90d6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_GEN_ADDR.Address", address, 0x20, 0x40, true, 0x5ad45badf9a7f288)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif