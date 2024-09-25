#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT$win32kbase.sys", 0x67334, 0x0, true, 0xa50c7a28255ad959)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetActive@CIT_USER_ACTIVITY_STAT$win32kbase.sys", 0x6f794, 0x0, true, 0x6078cc019bbb623)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif