#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z$win32kfull.sys", 0x0, 0x0, false, 0xed31d40223e2d998)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z$win32kfull.sys", 0x6ec24, 0x0, true, 0x7b066f8d1110ac0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ$win32kfull.sys", 0x6ebdc, 0x0, true, 0x62a6d2d9f7ca233c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif