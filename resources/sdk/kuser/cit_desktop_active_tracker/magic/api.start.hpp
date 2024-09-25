#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER$win32kbase.sys", 0x0, 0x0, false, 0xa3c4f4262ec08987)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER$win32kbase.sys", 0x0, 0x0, false, 0xd0d82b385dc5c49a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif