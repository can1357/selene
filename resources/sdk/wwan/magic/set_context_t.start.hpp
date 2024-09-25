#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_SET_CONTEXT.ContextId", context_id, 0x0, 0x20, true, 0x79d6b44c61dd9506)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::context_type_t), "_WWAN_SET_CONTEXT.ContextType", context_type, 0x20, 0x20, true, 0xfb6b852ff76e48cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 101>), "_WWAN_SET_CONTEXT.AccessString", access_string, 0x40, 0x50, true, 0x21b9a35610ea820b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_WWAN_SET_CONTEXT.UserName", user_name, 0x690, 0x0, true, 0xddde8db74bed72a7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_WWAN_SET_CONTEXT.Password", password, 0x1690, 0x0, true, 0xa00907ca732002de)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::compression_t), "_WWAN_SET_CONTEXT.Compression", compression, 0x26a0, 0x20, true, 0x75e81f7b5fa218e4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::auth_protocol_t), "_WWAN_SET_CONTEXT.AuthType", auth_type, 0x26c0, 0x20, true, 0xda9ee9871de7b3a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 7>), "_WWAN_SET_CONTEXT.ProviderId", provider_id, 0x26e0, 0x70, true, 0xbd03c4e91e45a067)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif