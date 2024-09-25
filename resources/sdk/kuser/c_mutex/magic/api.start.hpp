#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CMutex@@QEAA@PEAJ@Z$win32kbase.sys", 0x0, 0x0, false, 0xc6d63c9add363d59)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CMutex@@QEAA@XZ$win32kbase.sys", 0x0, 0x0, false, 0x5eeafcff88610369)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Lock@CMutex$win32kbase.sys", 0x0, 0x0, false, 0x376adab2f7d833cf)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Unlock@CMutex$win32kbase.sys", 0x0, 0x0, false, 0xf7cb21285316ba0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif