#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bRedo@UNDOW32THREADPIDLOCKS$win32kfull.sys", 0xf0724, 0x0, true, 0x95bc0ef058196309)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUndo@UNDOW32THREADPIDLOCKS$win32kfull.sys", 0xf0774, 0x0, true, 0x52a21591e82dafc4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif