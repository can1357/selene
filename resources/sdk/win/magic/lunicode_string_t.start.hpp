#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LUNICODE_STRING.Length", length, 0x0, 0x40, true, 0x81726ec1527c3e98)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LUNICODE_STRING.MaximumLength", maximum_length, 0x40, 0x40, true, 0x50a31c94bfa6dcbd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_LUNICODE_STRING.Buffer", buffer, 0x80, 0x40, true, 0xb108a1aa258d4e64)
#else
#define _m00
#define _m01
#define _m02
#endif