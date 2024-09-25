#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetButtonFlags@CMouseEvent@CMouseProcessor$win32kbase.sys", 0x0, 0x0, false, 0xa294ccd7053b19dd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateInputMessage@CMouseEvent@CMouseProcessor$win32kbase.sys", 0xc84a0, 0x0, true, 0xcf25cd4eb5634340)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetExtraInfoForHook@CMouseEvent@CMouseProcessor$win32kbase.sys", 0x6852c, 0x0, true, 0xd7b2b139ab89902)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetHitTestAttributes@CMouseEvent@CMouseProcessor$win32kbase.sys", 0xc84a0, 0x0, true, 0xc1f9c295cc490b85)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetHitTestContext@CMouseEvent@CMouseProcessor$win32kbase.sys", 0x10c10, 0x0, true, 0xf31ecc486221820a)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UsingInjectorUIPI@CMouseEvent@CMouseProcessor$win32kbase.sys", 0x5f81c, 0x0, true, 0x4f2bb857cd17ca60)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteChunkMouseInputData@CMouseEvent@CMouseProcessor$win32kbase.sys", 0xc8630, 0x0, true, 0x549c0803982a8702)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif