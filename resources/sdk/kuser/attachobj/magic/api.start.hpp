#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z$win32kfull.sys", 0x0, 0x0, false, 0x4fcd7f203f421bd3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z$win32kfull.sys", 0x6afd8, 0x0, true, 0xd7ee76573da80155)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1ATTACHOBJ@@QEAA@XZ$win32kfull.sys", 0x6fc30, 0x0, true, 0x505bb12649393669)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif