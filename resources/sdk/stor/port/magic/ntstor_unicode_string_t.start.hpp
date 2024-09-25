#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTSTOR_UNICODE_STRING.Length", length, 0x0, 0x10, true, 0xf6b35a0c4dde3c47)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NTSTOR_UNICODE_STRING.MaximumLength", maximum_length, 0x10, 0x10, true, 0xcd302857b2b5814b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_NTSTOR_UNICODE_STRING.Buffer", buffer, 0x40, 0x40, true, 0xa0a97b05219a6ac9)
#else
#define _m00
#define _m01
#define _m02
#endif