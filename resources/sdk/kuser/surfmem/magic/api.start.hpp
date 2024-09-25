#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$pSurfobj@SURFMEM$win32kfull.sys", 0x0, 0x0, false, 0xe97aecb065c4b9f7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vAltUnlockFast@SURFMEM$win32kfull.sys", 0x0, 0x0, false, 0xda382e2861193153)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bCreateDIB@SURFMEM$win32kbase.sys", 0x1db70, 0x0, true, 0xb634633dffef28b4)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SURFMEM@@QEAA@XZ$win32kbase.sys", 0x33d20, 0x0, true, 0x5a8a39652b97a17b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif