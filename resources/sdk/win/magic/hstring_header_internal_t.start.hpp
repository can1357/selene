#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::windows_runtime_hstring_flags_t), "HSTRING_HEADER_INTERNAL.flags", flags, 0x0, 0x20, true, 0xbf386b72441f9ac1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "HSTRING_HEADER_INTERNAL.length", length, 0x20, 0x20, true, 0xed9c8527b9830ae5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "HSTRING_HEADER_INTERNAL.padding1", padding1, 0x40, 0x20, true, 0x396661679c46af49)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "HSTRING_HEADER_INTERNAL.padding2", padding2, 0x60, 0x20, true, 0x452bef55ef162541)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "HSTRING_HEADER_INTERNAL.stringRef", string_ref, 0x80, 0x40, true, 0xa080b78c1925227)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif