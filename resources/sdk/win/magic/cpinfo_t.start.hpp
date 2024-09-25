#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_cpinfo.MaxCharSize", max_char_size, 0x0, 0x20, true, 0x595a269b12a5235d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_cpinfo.DefaultChar", default_char, 0x20, 0x10, true, 0xee1b172c8ef48d3a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 12>), "_cpinfo.LeadByte", lead_byte, 0x30, 0x60, true, 0x10018c192590397a)
#else
#define _m00
#define _m01
#define _m02
#endif