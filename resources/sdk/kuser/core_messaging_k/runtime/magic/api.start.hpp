#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Alloc@Runtime@CoreMessagingK$win32kbase.sys", 0xab6c4, 0x0, true, 0x777487b6d426da74)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocUninitialized@Runtime@CoreMessagingK$win32kbase.sys", 0xab70c, 0x0, true, 0x6ebd9e848221cfac)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CopyString@Runtime@CoreMessagingK$win32kbase.sys", 0xab53c, 0x0, true, 0x11ca9493f614a6ff)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BugCheck@Runtime@CoreMessagingK$win32kbase.sys", 0x205784, 0x0, true, 0x19e3d9a0ebb2d1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif