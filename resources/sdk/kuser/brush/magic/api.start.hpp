#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bAddIcmDIB@BRUSH$win32kbase.sys", 0x14b580, 0x0, true, 0xb328ffab1c348e42)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$hFindIcmDIB@BRUSH$win32kbase.sys", 0x14b660, 0x0, true, 0xdfc79fa676e4cb8a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_ulGlobalBrushUnique@BRUSH$win32kbase.sys", 0x25f3e0, 0x0, true, 0x4f2798e15cb1ddcf)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vDeleteIcmDIBs@BRUSH$win32kbase.sys", 0xccc58, 0x0, true, 0x393a1982203491dd)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif