#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION64_V2.HeaderSize", header_size, 0x0, 0x20, true, 0xc50d0495f4ba8f2d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION64_V2.FixupInfoSize", fixup_info_size, 0x20, 0x20, true, 0x2cf81d7b9375b705)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_DYNAMIC_RELOCATION64_V2.Symbol", symbol, 0x40, 0x40, true, 0x7a11fd699ab70eae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION64_V2.SymbolGroup", symbol_group, 0x80, 0x20, true, 0x9d73c9cb47278a0a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION64_V2.Flags", flags, 0xa0, 0x20, true, 0xca47a1f133f91657)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif