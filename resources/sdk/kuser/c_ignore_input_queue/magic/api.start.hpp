#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetBaseWindow@CIgnoreInputQueue$win32kbase.sys", 0xc8aa0, 0x0, true, 0xc25254e026f41096)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetInputFlags@CIgnoreInputQueue$win32kbase.sys", 0xc8ac0, 0x0, true, 0xa105486c2bf9ef9)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddRef@CIgnoreInputQueue$win32kbase.sys", 0x8d1e0, 0x0, true, 0x2f2815c38a7d9bc4)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetArgs@CIgnoreInputQueue$win32kbase.sys", 0xb18e0, 0x0, true, 0x312a2d914739a9d3)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetType@CIgnoreInputQueue$win32kbase.sys", 0xc84a0, 0x0, true, 0xc419bc14a343d2b9)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetWindow@CIgnoreInputQueue$win32kbase.sys", 0xc8aa0, 0x0, true, 0xd43a6854c02e2ef1)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MarkInvalid@CIgnoreInputQueue$win32kbase.sys", 0x15eb0, 0x0, true, 0xb2ea3f38fd448a17)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@CIgnoreInputQueue$win32kbase.sys", 0xc84a0, 0x0, true, 0xbf7548beb643122d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif