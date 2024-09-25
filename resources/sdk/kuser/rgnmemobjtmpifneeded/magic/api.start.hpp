#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z$win32kfull.sys", 0x1381dc, 0x0, true, 0xf910f658d55bdb0a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ$win32kfull.sys", 0x138198, 0x0, true, 0xc18efec22af0b219)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif