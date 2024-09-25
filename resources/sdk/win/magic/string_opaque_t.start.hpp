#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::windows_runtime_hstring_flags_t), "STRING_OPAQUE.flags", flags, 0x0, 0x20, true, 0xb5f88ab8bedd3888)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "STRING_OPAQUE.length", length, 0x20, 0x20, true, 0x859938163b2b05a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "STRING_OPAQUE.padding1", padding1, 0x40, 0x20, true, 0x7c204ec532c297cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "STRING_OPAQUE.padding2", padding2, 0x60, 0x20, true, 0xbbc74376584d9ab9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "STRING_OPAQUE.stringRef", string_ref, 0x80, 0x40, true, 0x72d5842248872154)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "STRING_OPAQUE.refcount", refcount, 0xc0, 0x20, true, 0x66944bf783ca8723)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "STRING_OPAQUE.string", string, 0xe0, 0x10, true, 0x9acb42f94ccf70b8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif