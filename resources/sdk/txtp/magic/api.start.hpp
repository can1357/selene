#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TxtpDestroyCacheEntry$ntoskrnl.exe", 0x0, 0x0, false, 0x7f3913373031156a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TxtpAddCacheEntry$ntoskrnl.exe", 0x9f15fc, 0x0, true, 0xefa291f74ac5d43f)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TxtpGetCacheEntry$ntoskrnl.exe", 0x3af900, 0x0, true, 0xd77e59ae74f6706d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TxtpJustifyRectangle$ntoskrnl.exe", 0x9f49b8, 0x0, true, 0xfcef69e535f44203)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TxtpTextCache$ntoskrnl.exe", 0xc02bb0, 0x0, true, 0xb766afd2911a9216)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif