#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL.Flags", flags, 0x0, 0x10, true, 0x7fb8d8bfcfe62226, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL.TryOffset", try_offset, 0x10, 0x10, true, 0x4a7bf5349e4ff75c, 16, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL.TryLength", try_length, 0x20, 0x8, true, 0x1b5826bf2ea010da, 8, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL.HandlerOffset", handler_offset, 0x28, 0x10, true, 0xbbdcd099beb1ec42, 16, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL.HandlerLength", handler_length, 0x38, 0x8, true, 0xedd623cb8330ba96, 8, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL.ClassToken", class_token, 0x40, 0x20, true, 0x34f1de8dfb68b532)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL.FilterOffset", filter_offset, 0x40, 0x20, true, 0x10324d931477698a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif