#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ$win32kfull.sys", 0xd2724, 0x0, true, 0xfc0d4c81db66e9ce)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ$win32kfull.sys", 0xd23f8, 0x0, true, 0x664cef3c1a1005fd)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif