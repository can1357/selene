#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClearForeground@CForegroundInfo$win32kbase.sys", 0x18ddd0, 0x0, true, 0xee5b4dfced4588d4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetForeground@CForegroundInfo$win32kbase.sys", 0x9f8a0, 0x0, true, 0xbb4de7be0540a703)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HasForeground@CForegroundInfo$win32kbase.sys", 0x1ab230, 0x0, true, 0xbfa7df720547d974)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CForegroundInfo$win32kbase.sys", 0x7a384, 0x0, true, 0x1ae284bc99aa1835)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetForeground@CForegroundInfo$win32kbase.sys", 0x1ab250, 0x0, true, 0x425872f1b408129a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif