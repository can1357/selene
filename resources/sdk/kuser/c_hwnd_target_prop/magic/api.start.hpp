#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReNotifyDwm@CHwndTargetProp$win32kfull.sys", 0x0, 0x0, false, 0x91ffd09bb4b22695)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Delete@CHwndTargetProp$win32kfull.sys", 0x154e80, 0x0, true, 0x8d3e07fdfefafd1b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClearSystemVisual@CHwndTargetProp$win32kbase.sys", 0xb22c0, 0x0, true, 0x798807d0e6d57ddf)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetAtom@CHwndTargetProp$win32kfull.sys", 0x12a2d0, 0x0, true, 0x3d021ef339f61f80)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_atom@CHwndTargetProp$win32kbase.sys", 0x25f348, 0x0, true, 0x102e5c681240db19)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetSystemVisual@CHwndTargetProp$win32kbase.sys", 0xafee0, 0x0, true, 0x19c0c568ab3b8938)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif