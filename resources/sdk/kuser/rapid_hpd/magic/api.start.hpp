#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ProcessModeChange@RapidHPD$win32kfull.sys", 0x0, 0x0, false, 0xe8614b50fc05d160)
#else
#define _m0(...) __VA_ARGS__
#endif