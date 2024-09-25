#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetButtonFlags@CMoveEvent@CMouseProcessor$win32kbase.sys", 0x0, 0x0, false, 0xa30c8a0318f2b604)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateInputMessage@CMoveEvent@CMouseProcessor$win32kbase.sys", 0x1c6930, 0x0, true, 0xe24c5029bec64c8b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetHitTestAttributes@CMoveEvent@CMouseProcessor$win32kbase.sys", 0xc84a0, 0x0, true, 0xfc239e352e32ed8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteChunkMouseInputData@CMoveEvent@CMouseProcessor$win32kbase.sys", 0xc8670, 0x0, true, 0x67d528ae21509fca)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif