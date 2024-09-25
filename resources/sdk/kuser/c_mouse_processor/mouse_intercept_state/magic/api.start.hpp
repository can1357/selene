#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CallInterceptor@MouseInterceptState@CMouseProcessor$win32kbase.sys", 0x1c63f8, 0x0, true, 0x10c190be592cd424)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Disable@MouseInterceptState@CMouseProcessor$win32kbase.sys", 0xbe6c0, 0x0, true, 0x8ef645f200736a7b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Enable@MouseInterceptState@CMouseProcessor$win32kbase.sys", 0x1c6dd0, 0x0, true, 0xe1e66971cf5c6ee3)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor$win32kbase.sys", 0x1c772c, 0x0, true, 0xa638b677ae9fa3f8)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor$win32kbase.sys", 0x1c7e00, 0x0, true, 0xea7e6950f5d57cae)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor$win32kbase.sys", 0x1c7f14, 0x0, true, 0x29015ed26e49c01b)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Marshal@MouseInterceptState@CMouseProcessor$win32kbase.sys", 0x1c7f4c, 0x0, true, 0x875c59bf6cc464df)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PerformMarashlingCheck@MouseInterceptState@CMouseProcessor$win32kbase.sys", 0x1c8060, 0x0, true, 0xc295d6cf5751777f)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PrepareForMarshaling@MouseInterceptState@CMouseProcessor$win32kbase.sys", 0x1c838c, 0x0, true, 0xcc08e0ac2d0cb63b)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UserModeCallout@MouseInterceptState@CMouseProcessor$win32kbase.sys", 0x1c94b0, 0x0, true, 0xbed71b7937732acc)
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