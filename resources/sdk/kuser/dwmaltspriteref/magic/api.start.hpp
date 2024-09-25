#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AltLockSpriteObj@DWMALTSPRITEREF$win32kfull.sys", 0x476ac, 0x0, true, 0x581de9399c64e397)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z$win32kfull.sys", 0x4767c, 0x0, true, 0xe819a36650f34326)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z$win32kfull.sys", 0xbc4e0, 0x0, true, 0x6f52e8e565354057)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$hspLookupWindow@DWMALTSPRITEREF$win32kfull.sys", 0x476e0, 0x0, true, 0x149fc12ca8ebfd98)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif