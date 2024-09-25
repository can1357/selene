#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateMarginsProp@CWindowMarginProp@WindowMargins$win32kfull.sys", 0x0, 0x0, false, 0x1f23f9bd5d6d3c20)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetAtom@CWindowMarginProp@WindowMargins$win32kfull.sys", 0x0, 0x0, false, 0x15771fb5f71022e7)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_atom@CWindowMarginProp@WindowMargins$win32kfull.sys", 0x0, 0x0, false, 0xd5f1de8d461a9d36)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif