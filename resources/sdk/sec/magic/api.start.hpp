#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SecurityMitigationsProviderGuid$ntoskrnl.exe", 0xcec8, 0x0, true, 0xf2239ef1e0ab79f2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint64_t)>*), "$__security_check_cookie$ntoskrnl.exe", 0x3cbe60, 0x0, true, 0x5f67b0b00c81fb95)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(uint64_t*), "$__security_cookie$ntoskrnl.exe", 0xc12270, 0x0, true, 0x4ac8ecf2f07b20b2)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(uint64_t*), "$__security_cookie_complement$ntoskrnl.exe", 0xc12278, 0x0, true, 0xca6097460e25475a)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void()>*), "$__security_init_cookie$ntoskrnl.exe", 0xa182e8, 0x0, true, 0x8ae4d3beff2564d7)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SecurityProviderGuid$ntoskrnl.exe", 0xa5d8, 0x0, true, 0xb828085907c525d0)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SecurityRod$tcpip.sys", 0x206b20, 0x0, true, 0x386afaef98fd5ae)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SecurityCookieInitCount$ntdll.dll", 0x16c77c, 0x0, true, 0xa041024629013101)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SecurityCookieInitialized$ntdll.dll", 0x16c68c, 0x0, true, 0x795fdcc49d7c5d43)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#endif