#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ulUniqueREGION@REGION$win32kbase.sys", 0x256fb8, 0x0, true, 0x6980abe042192317)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vDeleteREGION@REGION$win32kbase.sys", 0x17de0, 0x0, true, 0xb982f565a5db7883)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif