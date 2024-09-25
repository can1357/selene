#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ghInjectionDevice@TouchExtensibility$win32kbase.sys", 0x25bdb8, 0x0, true, 0xa6865e4a54b12989)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$hDeviceUser@TouchExtensibility$win32kbase.sys", 0x25bcd8, 0x0, true, 0xdb699ee3e5d83f0c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$rcHimetricRect@TouchExtensibility$win32kbase.sys", 0x25f370, 0x0, true, 0x1a00e50a237586f)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$rcLogicalRect@TouchExtensibility$win32kbase.sys", 0x25f360, 0x0, true, 0xdc3be76465354d29)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif