#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "IMAGE_COR_ILMETHOD_SECT_FAT.Kind", kind, 0x0, 0x8, true, 0x5eaa406ee55f9b0a, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "IMAGE_COR_ILMETHOD_SECT_FAT.DataSize", data_size, 0x8, 0x18, true, 0xfb2e31070c4fe6b, 24, uint32_t)
#else
#define _m00
#define _m01
#endif