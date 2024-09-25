#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vRestore@MSURF$win32kfull.sys", 0x2a70f0, 0x0, true, 0x706be6512a735a3a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bFindSurface@MSURF$win32kfull.sys", 0x2a66a0, 0x0, true, 0x5da3236b8de2806c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bNextSurface@MSURF$win32kfull.sys", 0x2a6af4, 0x0, true, 0x7f8fb220075f5d13)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif