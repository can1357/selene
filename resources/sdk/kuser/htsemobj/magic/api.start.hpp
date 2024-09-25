#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1HTSEMOBJ@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0xa28c778203f6228e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vAcquire@HTSEMOBJ$win32kfull.sys", 0x0, 0x0, false, 0x413afc256a2957c0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vRelease@HTSEMOBJ$win32kfull.sys", 0x15420, 0x0, true, 0x371320e182afaabd)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif