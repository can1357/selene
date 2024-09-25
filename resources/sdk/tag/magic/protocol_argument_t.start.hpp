#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_tagPROTOCOL_ARGUMENT.szMethod", sz_method, 0x0, 0x40, true, 0x8d903e3e6372b68f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_tagPROTOCOL_ARGUMENT.szTargetUrl", sz_target_url, 0x40, 0x40, true, 0x76513a5e1025da9d)
#else
#define _m00
#define _m01
#endif