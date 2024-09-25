#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DEVICE_PFTOBJ@@QEAA@XZ$win32kbase.sys", 0x14c848, 0x0, true, 0xb0ac3a25bece974f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bLoadFonts@DEVICE_PFTOBJ$win32kfull.sys", 0x27318c, 0x0, true, 0xe2c68659c27a0659)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$pPFFGet@DEVICE_PFTOBJ$win32kfull.sys", 0x397bc, 0x0, true, 0xd57428a9516ed94c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif