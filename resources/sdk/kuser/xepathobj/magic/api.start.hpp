#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z$win32kfull.sys", 0x135690, 0x0, true, 0xf326d7ecfc53ace5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z$win32kfull.sys", 0x28692c, 0x0, true, 0xa638100c8e344335)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1XEPATHOBJ@@QEAA@XZ$win32kfull.sys", 0x135654, 0x0, true, 0x3ced4ffb7e93458f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif