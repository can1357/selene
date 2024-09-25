#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DYNAMICMODECHANGELOCK@@QEAA@XZ$win32kfull.sys", 0x148b58, 0x0, true, 0x66e91a6c4f86aee9)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DYNAMICMODECHANGELOCK@@QEAA@XZ$win32kfull.sys", 0xd23f8, 0x0, true, 0x2d135d382e8f8397)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif