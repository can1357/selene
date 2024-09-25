#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0LeaveEnterCrit@@QEAA@XZ$win32kfull.sys", 0x155284, 0x0, true, 0xcd6fcbac7cc8a3b5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1LeaveEnterCrit@@QEAA@XZ$win32kfull.sys", 0x1552ac, 0x0, true, 0x83fa86bb1c9278dd)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif