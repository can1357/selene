#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_RANGE_ENTRY.StartOffset", start_offset, 0x0, 0x20, true, 0xbf8330b70931fcfa)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_CHPE_RANGE_ENTRY.NativeCode", native_code, 0x0, 0x1, true, 0xf1ee40aa70dec5c2, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_IMAGE_CHPE_RANGE_ENTRY.AddressBits", address_bits, 0x1, 0x1f, true, 0xb49fb9660548d757, 31, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CHPE_RANGE_ENTRY.Length", length, 0x20, 0x20, true, 0x4c234359b148a972)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif