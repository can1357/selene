#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_STRSD_KEY_LOOKUP.Key", key, 0x0, 0x40, true, 0xb126c65167d74e2c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STRSD_KEY_LOOKUP.KeyLen", key_len, 0x40, 0x20, true, 0x1e0b3fabb7880a9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STRSD_KEY_LOOKUP.Value", value, 0x60, 0x20, true, 0xd97942068feb975e)
#else
#define _m00
#define _m01
#define _m02
#endif