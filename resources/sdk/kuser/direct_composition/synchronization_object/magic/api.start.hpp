#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObjectInit@SynchronizationObject@DirectComposition$win32kbase.sys", 0x1dae80, 0x0, true, 0x3338aae7dae1bd0d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ResolveHandle@SynchronizationObject@DirectComposition$win32kbase.sys", 0x1daeb4, 0x0, true, 0xb62b49267007f6b3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif