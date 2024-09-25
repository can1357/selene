#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetBaseWindow@CDiscardInputQueue$win32kbase.sys", 0xc8a90, 0x0, true, 0x7c83198c67d89964)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetInputFlags@CDiscardInputQueue$win32kbase.sys", 0xc8ac0, 0x0, true, 0x7271daadafec1fbb)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddRef@CDiscardInputQueue$win32kbase.sys", 0x8d1e0, 0x0, true, 0xe531ad76ce0a1c8c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetArgs@CDiscardInputQueue$win32kbase.sys", 0xb18e0, 0x0, true, 0x403d2063acea7818)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetType@CDiscardInputQueue$win32kbase.sys", 0x8d1e0, 0x0, true, 0xdff2d2cf906eef12)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetWindow@CDiscardInputQueue$win32kbase.sys", 0xc8a90, 0x0, true, 0x3b1a05eb8801e3fe)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MarkInvalid@CDiscardInputQueue$win32kbase.sys", 0x15eb0, 0x0, true, 0x15de7237df3d1af0)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@CDiscardInputQueue$win32kbase.sys", 0xc84a0, 0x0, true, 0x7386b38c5b878702)
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