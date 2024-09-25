#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HTTPSPolicyCallbackData.cbStruct", cb_struct, 0x0, 0x20, true, 0x7cafcf3d03d1f970)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HTTPSPolicyCallbackData.cbSize", cb_size, 0x0, 0x20, true, 0x2b29e52bb4361dc0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HTTPSPolicyCallbackData.dwAuthType", dw_auth_type, 0x20, 0x20, true, 0xe0b20b285880088a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HTTPSPolicyCallbackData.fdwChecks", fdw_checks, 0x40, 0x20, true, 0xf97cc9877b67611)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_HTTPSPolicyCallbackData.pwszServerName", pwsz_server_name, 0x80, 0x40, true, 0xbb74b8cb38f4e5f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif