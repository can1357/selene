#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z$win32kfull.sys", 0x1571ac, 0x0, true, 0x5cbdd593c13b94f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ$win32kfull.sys", 0x15722c, 0x0, true, 0x58a401ef0f5476f8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif