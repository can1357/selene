#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_IMAGE_SYMBOL_EX.N.ShortName", short_name, 0x0, 0x40, true, 0xe7a48a44c0163c71)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SYMBOL_EX.N.Name.Short", _short, 0x0, 0x20, true, 0xb8568f28ae970acf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SYMBOL_EX.N.Name.Long", _long, 0x20, 0x20, true, 0x8b70fb7012336150)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_name_t), "_IMAGE_SYMBOL_EX.N.Name", name, 0x0, 0x40, true, 0xd5781ef3d670e4bb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_IMAGE_SYMBOL_EX.N.LongName", long_name, 0x0, 0x40, true, 0x66464edd9eb8a25)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_n_t), "_IMAGE_SYMBOL_EX.N", n, 0x0, 0x40, true, 0x7e68c9885ba2b84a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SYMBOL_EX.Value", value, 0x40, 0x20, true, 0x30ad2abb64333eb6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_IMAGE_SYMBOL_EX.SectionNumber", section_number, 0x60, 0x20, true, 0x4ab4ff57c40b1ab4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_SYMBOL_EX.Type", type, 0x80, 0x10, true, 0x9f3161eff1fec217)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_SYMBOL_EX.StorageClass", storage_class, 0x90, 0x8, true, 0xdf7035716aa18c02)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_SYMBOL_EX.NumberOfAuxSymbols", number_of_aux_symbols, 0x98, 0x8, true, 0xaf49ab57a10badd2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif