#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUILANGINFO.Flags", flags, 0x0, 0x10, true, 0xf33aade801d8b13a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUILANGINFO.LangId", lang_id, 0x20, 0x10, true, 0x3110f98c18723803)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_MUILANGINFO.LangNameIndex", lang_name_index, 0x30, 0x10, true, 0x3ba5ed74841e6092)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUILANGINFO.FallbackTypes", fallback_types, 0x40, 0x10, true, 0x8b23ca3d3ec9372e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_MUILANGINFO.NeutralLangSpec", neutral_lang_spec, 0x50, 0x10, true, 0xc1bc9d8c300b987e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int16_t, 4>), "_MUILANGINFO.FallbackSpecs", fallback_specs, 0x60, 0x40, true, 0x601d199e83924dfc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int16_t, 4>), "_MUILANGINFO.AlternateCodePage", alternate_code_page, 0xa0, 0x40, true, 0xadf0001dd8ed4ebe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif