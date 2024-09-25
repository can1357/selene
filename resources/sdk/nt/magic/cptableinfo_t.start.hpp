#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CPTABLEINFO.CodePage", code_page, 0x0, 0x10, true, 0x111278de1887ab1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CPTABLEINFO.MaximumCharacterSize", maximum_character_size, 0x10, 0x10, true, 0x262834a4b94930a0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CPTABLEINFO.DefaultChar", default_char, 0x20, 0x10, true, 0x190c35fcd4e6af6e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CPTABLEINFO.UniDefaultChar", uni_default_char, 0x30, 0x10, true, 0x53d631b84a4a0446)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CPTABLEINFO.TransDefaultChar", trans_default_char, 0x40, 0x10, true, 0x268db197048e33e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CPTABLEINFO.TransUniDefaultChar", trans_uni_default_char, 0x50, 0x10, true, 0x69fa2a306569c46b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CPTABLEINFO.DBCSCodePage", dbcs_code_page, 0x60, 0x10, true, 0x58f640392cc6d916)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 12>), "_CPTABLEINFO.LeadByte", lead_byte, 0x70, 0x60, true, 0x1994d436ef3f220c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CPTABLEINFO.MultiByteTable", multi_byte_table, 0x100, 0x40, true, 0x4adefb728240e0e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CPTABLEINFO.WideCharTable", wide_char_table, 0x140, 0x40, true, 0x5e5f4b80041aa0fe)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CPTABLEINFO.DBCSRanges", dbcs_ranges, 0x180, 0x40, true, 0x113291896cee4f6d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CPTABLEINFO.DBCSOffsets", dbcs_offsets, 0x1c0, 0x40, true, 0xf52fde955d4fac96)
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
#endif