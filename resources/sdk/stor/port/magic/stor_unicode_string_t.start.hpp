#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_UNICODE_STRING.Length", length, 0x0, 0x10, true, 0xc35dc556d3a1934)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_UNICODE_STRING.MaximumLength", maximum_length, 0x10, 0x10, true, 0xcec7ce1ab14b5199)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_STOR_UNICODE_STRING.Buffer", buffer, 0x40, 0x40, true, 0xc28af7e3316d2b28)
#else
#define _m00
#define _m01
#define _m02
#endif