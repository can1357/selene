#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DCOBJ@@QEAA@XZ$win32kfull.sys", 0x27ba70, 0x0, true, 0xd751549116b29e35)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DCOBJ@@QEAA@PEAUHDC__@@@Z$win32kfull.sys", 0x89f98, 0x0, true, 0x1af102620e8a63e8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DCOBJ@@QEAA@XZ$win32kfull.sys", 0x1280b0, 0x0, true, 0x8af3bf3fcee09eca)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif