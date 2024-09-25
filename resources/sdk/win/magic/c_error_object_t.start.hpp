#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CErrorObject._refCount", ref_count, 0xc0, 0x20, true, 0xe1d62cd6f2c43a42)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::error_object_data_t), "CErrorObject._data", data, 0xe0, 0xc0, true, 0xfa57ff1b97e4716d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CErrorObject._pszSource", psz_source, 0x1c0, 0x40, true, 0xcc7b6d7cfdbd3e9c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CErrorObject._pszDescription", psz_description, 0x200, 0x40, true, 0x914a93f3a4f59c20)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CErrorObject._pszHelpFile", psz_help_file, 0x240, 0x40, true, 0x66dbf5a86487b6d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif