#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0LeaveEnterCritProperDisposition@@QEAA@XZ$win32kfull.sys", 0x574c8, 0x0, true, 0xcad37c460a429287)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1LeaveEnterCritProperDisposition@@QEAA@XZ$win32kfull.sys", 0x57490, 0x0, true, 0xab56c708752e0df9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif