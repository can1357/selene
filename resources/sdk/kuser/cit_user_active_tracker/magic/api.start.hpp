#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CalculateUpToTime@CIT_USER_ACTIVE_TRACKER$win32kbase.sys", 0x6f7d8, 0x0, true, 0x268fc2a18d21b7c5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER$win32kbase.sys", 0xbb268, 0x0, true, 0xa7dcf0f47a54b756)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER$win32kbase.sys", 0x6f75c, 0x0, true, 0x2df3630719948d00)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif