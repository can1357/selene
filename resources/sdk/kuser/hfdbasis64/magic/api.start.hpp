#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vError@HFDBASIS64$win32kbase.sys", 0x0, 0x0, false, 0xb30f558a330644a5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vInit@HFDBASIS64$win32kbase.sys", 0x1502a4, 0x0, true, 0x48e9c86afaaf3024)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vParentError@HFDBASIS64$win32kbase.sys", 0x15031c, 0x0, true, 0x4cd163f7692fd4e5)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUntransform@HFDBASIS64$win32kbase.sys", 0x150380, 0x0, true, 0xcc4dcb4c2c69b9bf)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif