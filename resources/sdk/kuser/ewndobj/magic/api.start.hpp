#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bDelete@EWNDOBJ$win32kfull.sys", 0x0, 0x0, false, 0xd92b36bf3a02b9d3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vDelete@EWNDOBJ$win32kfull.sys", 0x286ee4, 0x0, true, 0x37cee0f72f01c062)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bValid@EWNDOBJ$win32kfull.sys", 0x286eb8, 0x0, true, 0xe2e7567e415492fc)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vOffset@EWNDOBJ$win32kfull.sys", 0x287348, 0x0, true, 0x3cd837c847e443a8)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vSetClip@EWNDOBJ$win32kfull.sys", 0x2873a8, 0x0, true, 0x1288dead71de46ce)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif