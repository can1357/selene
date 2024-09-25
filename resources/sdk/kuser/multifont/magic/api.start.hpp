#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z$win32kfull.sys", 0x2a1084, 0x0, true, 0x15a2caa916a3e012)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1MULTIFONT@@QEAA@XZ$win32kfull.sys", 0x2a1234, 0x0, true, 0xc786891a1ee303c0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyTable@MULTIFONT$win32kfull.sys", 0x2a1368, 0x0, true, 0x418e828b20551e14)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif