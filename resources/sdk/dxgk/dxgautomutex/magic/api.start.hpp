#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseIfAcquired@DXGAUTOMUTEX$dxgkrnl.sys", 0x2492c, 0x0, true, 0x509fe5c2454c746b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGAUTOMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x1ad50, 0x0, true, 0xafd5c6da93dae07)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGAUTOMUTEX$dxgkrnl.sys", 0x248a4, 0x0, true, 0xe2d48b32e3cdf58c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Acquire@DXGAUTOMUTEX$dxgkrnl.sys", 0x69a0, 0x0, true, 0xb917183b3231198c)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z$dxgkrnl.sys", 0x73b4, 0x0, true, 0xe45962ec37216d93)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGAUTOMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x6964, 0x0, true, 0x3637560eaaf27257)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGAUTOMUTEX$dxgkrnl.sys", 0x6850, 0x0, true, 0xb757f5f7f2aeba4c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif