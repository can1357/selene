#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION32_V2.HeaderSize", header_size, 0x0, 0x20, true, 0x1326645fd42c32e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION32_V2.FixupInfoSize", fixup_info_size, 0x20, 0x20, true, 0xb942da7a8de08fcd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION32_V2.Symbol", symbol, 0x40, 0x20, true, 0xa7964eb5d54c0432)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION32_V2.SymbolGroup", symbol_group, 0x60, 0x20, true, 0xfcd12d6f7e54d16)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION32_V2.Flags", flags, 0x80, 0x20, true, 0x802e23bbabbc9f00)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif