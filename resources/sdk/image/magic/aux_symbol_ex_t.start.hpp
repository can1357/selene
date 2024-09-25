#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_AUX_SYMBOL_EX.Sym.WeakDefaultSymIndex", weak_default_sym_index, 0x0, 0x20, true, 0xee1fbf5efa1463f5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_AUX_SYMBOL_EX.Sym.WeakSearchType", weak_search_type, 0x20, 0x20, true, 0x9b6b3e033e07e566)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 12>), "_IMAGE_AUX_SYMBOL_EX.Sym.rgbReserved", rgb_reserved, 0x40, 0x60, true, 0x680e64d5c757512)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_sym_t), "_IMAGE_AUX_SYMBOL_EX.Sym", sym, 0x0, 0xa0, true, 0x1aa8165b704ae321)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_IMAGE_AUX_SYMBOL_EX.File.Name", name, 0x0, 0xa0, true, 0x4b9d1214c6245e5c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_file_t), "_IMAGE_AUX_SYMBOL_EX.File", file, 0x0, 0xa0, true, 0x57fedecf96e6cc26)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_AUX_SYMBOL_EX.Section.Length", length, 0x0, 0x20, true, 0x5f94b3dbf0e864a7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_AUX_SYMBOL_EX.Section.NumberOfRelocations", number_of_relocations, 0x20, 0x10, true, 0x611caf7526f7629d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_AUX_SYMBOL_EX.Section.NumberOfLinenumbers", number_of_linenumbers, 0x30, 0x10, true, 0x400a06f03d82e308)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_AUX_SYMBOL_EX.Section.CheckSum", check_sum, 0x40, 0x20, true, 0x682dd9d755dde0b4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_IMAGE_AUX_SYMBOL_EX.Section.Number", number, 0x60, 0x10, true, 0x8c514beefad292b8)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_AUX_SYMBOL_EX.Section.Selection", selection, 0x70, 0x8, true, 0x3745cd82d6cb35dc)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_AUX_SYMBOL_EX.Section.bReserved", b_reserved, 0x78, 0x8, true, 0x5623cf472ca1e7e6)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_IMAGE_AUX_SYMBOL_EX.Section.HighNumber", high_number, 0x80, 0x10, true, 0xcb55e62c7ea1b8ac)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_IMAGE_AUX_SYMBOL_EX.Section.rgbReserved", rgb_reserved, 0x90, 0x10, true, 0xb763f7061a41aa2f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_section_t), "_IMAGE_AUX_SYMBOL_EX.Section", section, 0x0, 0xa0, true, 0xa8d6f7225370297e)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::aux_symbol_token_def_t), "_IMAGE_AUX_SYMBOL_EX.TokenDef", token_def, 0x0, 0x90, true, 0x9f74dcb78c8c2146)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_IMAGE_AUX_SYMBOL_EX.rgbReserved", rgb_reserved, 0x90, 0x10, true, 0x3c52760d245ba4c4)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_AUX_SYMBOL_EX.CRC.crc", crc, 0x0, 0x20, true, 0xb3cf20fe34d24c7c)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_IMAGE_AUX_SYMBOL_EX.CRC.rgbReserved", rgb_reserved, 0x20, 0x80, true, 0xe489b4bf84597f94)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_crc_t), "_IMAGE_AUX_SYMBOL_EX.CRC", crc, 0x0, 0xa0, true, 0xd2e2fb4e26590338)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#endif