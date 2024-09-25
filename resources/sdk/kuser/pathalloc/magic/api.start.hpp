#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$cAllocated@PATHALLOC$win32kbase.sys", 0x256f94, 0x0, true, 0x99f503ec6e429260)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$cFree@PATHALLOC$win32kbase.sys", 0x256f90, 0x0, true, 0x380ae8066bb8cb82)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$freelist@PATHALLOC$win32kbase.sys", 0x256fa0, 0x0, true, 0xe7e37c51a8cbb0ba)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$hsemFreelist@PATHALLOC$win32kbase.sys", 0x256f98, 0x0, true, 0xb09534f6b8665a13)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif