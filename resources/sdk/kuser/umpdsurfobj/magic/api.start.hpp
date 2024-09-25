#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1UMPDSURFOBJ@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0xfc5d2331918aa017)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z$win32kfull.sys", 0x12dd34, 0x0, true, 0xe651a024d8862e90)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetLockedSURFOBJ@UMPDSURFOBJ$win32kfull.sys", 0x12dda4, 0x0, true, 0xd7d6f84790c3e336)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif