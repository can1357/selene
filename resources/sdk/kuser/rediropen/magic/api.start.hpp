#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1REDIROPEN@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x58b8c903a23c114)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z$win32kfull.sys", 0x29b768, 0x0, true, 0xeb19f269718b704d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif