#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_FILTER_STRING_TOKEN.Count", count, 0x0, 0x10, true, 0x1f5071828875098f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct etw::filter_string_token_element_t, 1>), "_ETW_FILTER_STRING_TOKEN.Tokens", tokens, 0x40, 0x80, true, 0xecd3508f1156b9a5)
#else
#define _m00
#define _m01
#endif