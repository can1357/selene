#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CheckForChanges@WindowMargins$win32kfull.sys", 0x0, 0x0, false, 0x92022cc09c36953e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExtendRect@WindowMargins$win32kfull.sys", 0x0, 0x0, false, 0x5786c06563146222)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPhysicalFrameBounds@WindowMargins$win32kfull.sys", 0x0, 0x0, false, 0x9f1e47cd49524357)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReduceRect@WindowMargins$win32kfull.sys", 0x0, 0x0, false, 0x103f771c35037f5b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif