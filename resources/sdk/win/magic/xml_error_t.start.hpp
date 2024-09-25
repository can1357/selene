#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_xml_error._nLine", n_line, 0x0, 0x20, true, 0x79e39f6abf88cf0b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_xml_error._pchBuf", pch_buf, 0x40, 0x40, true, 0x679f2dd6623e678e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_xml_error._cchBuf", cch_buf, 0x80, 0x20, true, 0x54e3f8ed3445c8d2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_xml_error._ich", ich, 0xa0, 0x20, true, 0x9f365b94ecf3682c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_xml_error._pszFound", psz_found, 0xc0, 0x40, true, 0x8016d7f09c06abdf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_xml_error._pszExpected", psz_expected, 0x100, 0x40, true, 0x1ba2f59395deb3dc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_xml_error._reserved1", reserved1, 0x140, 0x20, true, 0x9e878924c8d2ff35)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_xml_error._reserved2", reserved2, 0x160, 0x20, true, 0x433ae4b7aa0713d7)
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