#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AreMultipleThreadsAttached@tagQ$win32kfull.sys", 0x0, 0x0, false, 0x590e05650c316e18)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CheckTransferState@tagQ$win32kfull.sys", 0x0, 0x0, false, 0x28ae98185d984d5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsAnyThreadAttached@tagQ$win32kfull.sys", 0x0, 0x0, false, 0xcc1666a726a7f245)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsSingleThreadAttached@tagQ$win32kfull.sys", 0x0, 0x0, false, 0xe1ef15d7c1f58199)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockFocusWnd@tagQ$win32kbase.sys", 0x0, 0x0, false, 0x15a8efe116aa8761)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnlockFocusWnd@tagQ$win32kbase.sys", 0x0, 0x0, false, 0xd4ed3a68f04df137)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$zzzAttachToQueue@tagQ$win32kfull.sys", 0x0, 0x0, false, 0xce9c2b0c68677903)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif