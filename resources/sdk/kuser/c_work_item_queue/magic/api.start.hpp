#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CWorkItemQueue$win32kfull.sys", 0x0, 0x0, false, 0xb3f76ce683217a1b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WaitForWorkItem@CWorkItemQueue$win32kfull.sys", 0x0, 0x0, false, 0x3c9fb09ec076370b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@CWorkItemQueue$win32kfull.sys", 0x121444, 0x0, true, 0x282f773d4247eb36)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueueWorkItem@CWorkItemQueue$win32kfull.sys", 0x2df00c, 0x0, true, 0xe5f8bc2eb5ead92)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif