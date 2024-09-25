#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CCompClockInfo@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x71c038b32d5a55f8)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CCompClockInfo@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0xc8ec27b1f7699842)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@CCompClockInfo@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x4fdadf2de1d12ae6)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WaitForTick@CCompClockInfo@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x41cf13cccf04f3f8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif