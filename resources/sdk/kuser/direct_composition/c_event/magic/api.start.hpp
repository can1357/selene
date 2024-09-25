#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CEvent@DirectComposition$win32kbase.sys", 0x1dbec8, 0x0, true, 0x6f38bf3a1a068c78)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CEvent@DirectComposition$win32kbase.sys", 0x81b84, 0x0, true, 0xba1c492cc80cd301)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif