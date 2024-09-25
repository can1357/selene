#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClearClipRgnOrMaxClip@tagWND$win32kfull.sys", 0x0, 0x0, false, 0xac01d4fb97bf8e1e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetExplicitClipRgn@tagWND$win32kfull.sys", 0x0, 0x0, false, 0xe51b7ded3c5d4b73)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HasState@tagWND$win32kfull.sys", 0x0, 0x0, false, 0xce855acd19405184)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PtOutsideClipRgnOrMaxClip@tagWND$win32kfull.sys", 0x0, 0x0, false, 0x61c726be822cf2b3)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReflectState@tagWND$win32kfull.sys", 0x0, 0x0, false, 0xbbbcd4c7a7445c06)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif