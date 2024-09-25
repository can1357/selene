#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_fBreakOnFailure@wil$dxgi.dll", 0xd0408, 0x0, true, 0x6c1836e9ab7ea3da)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_fIsDebuggerPresent@wil$dxgi.dll", 0xd03f8, 0x0, true, 0xb8bdd2a80e57a822)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_pfnIsDebuggerPresent@wil$dxgi.dll", 0xd03f0, 0x0, true, 0x7488ae28befc883d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_pfnWilFailFast@wil$dxgi.dll", 0xd0438, 0x0, true, 0xdb6705cd69d8c27d)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetFailureLogString@wil$dxgi.dll", 0x455b4, 0x0, true, 0xd77d7e856b340aeb)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ProcessShutdownInProgress@wil$dxgi.dll", 0x13e7c, 0x0, true, 0xc175cab3f09aa376)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif