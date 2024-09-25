#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetBaseWindow@CInputQueue$win32kbase.sys", 0xc8b00, 0x0, true, 0x4fb77a05b5db4caf)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetInputFlags@CInputQueue$win32kbase.sys", 0xc8b20, 0x0, true, 0x5659da3819e77633)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddRef@CInputQueue$win32kbase.sys", 0xc8ae0, 0x0, true, 0x92c05be08ccace53)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CInputQueue$win32kbase.sys", 0x95f24, 0x0, true, 0xff78345cb93f8a4b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetArgs@CInputQueue$win32kbase.sys", 0xa6d60, 0x0, true, 0xfacda82afe67605f)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetType@CInputQueue$win32kbase.sys", 0xc8b30, 0x0, true, 0x7cfe56a269444d4c)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetWindow@CInputQueue$win32kbase.sys", 0xc8b00, 0x0, true, 0x83df9b795b8fecdb)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CInputQueue$win32kbase.sys", 0x96020, 0x0, true, 0x89ac7ab9b4e25c60)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MarkInvalid@CInputQueue$win32kbase.sys", 0xa7be0, 0x0, true, 0xed4701c24f0c245b)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@CInputQueue$win32kbase.sys", 0xafaf0, 0x0, true, 0x6b350b25aa908d04)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#endif