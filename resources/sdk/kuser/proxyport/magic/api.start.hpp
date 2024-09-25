#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Close@PROXYPORT$win32kfull.sys", 0x1054a4, 0x0, true, 0xebdb85ee5c05d1c5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0PROXYPORT@@QEAA@_K@Z$win32kfull.sys", 0x111908, 0x0, true, 0xc4f64e7b42f5623)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SecureConnectPort@PROXYPORT$win32kfull.sys", 0x111cb0, 0x0, true, 0xfb2615ba2e656933)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendRequest@PROXYPORT$win32kfull.sys", 0x19a68, 0x0, true, 0x4ec28ec3fc208e17)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif