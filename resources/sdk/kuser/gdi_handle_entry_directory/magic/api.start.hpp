#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireEntryIndex@GdiHandleEntryDirectory$win32kbase.sys", 0x0, 0x0, false, 0x232d890d8fdc1b01)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_GetEntryTableIndexContainingEntry@GdiHandleEntryDirectory$win32kbase.sys", 0x0, 0x0, false, 0x504d3c51d11e1593)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseEntryLock@GdiHandleEntryDirectory$win32kbase.sys", 0x24a30, 0x0, true, 0x6c72e15756fd2a49)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetEntryObject@GdiHandleEntryDirectory$win32kbase.sys", 0x26ce0, 0x0, true, 0x422c0a758c12b929)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireEntryLock@GdiHandleEntryDirectory$win32kbase.sys", 0x25450, 0x0, true, 0x48268f7cf7335f0e)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@GdiHandleEntryDirectory$win32kbase.sys", 0x78ae4, 0x0, true, 0xe573ee9be20d0212)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@GdiHandleEntryDirectory$win32kbase.sys", 0xc647c, 0x0, true, 0x3b7fa151536cf20b)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetEntry@GdiHandleEntryDirectory$win32kbase.sys", 0x26d90, 0x0, true, 0x4afed54156dbef53)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseLockAndEntry@GdiHandleEntryDirectory$win32kbase.sys", 0x1bde0, 0x0, true, 0xaaa90f8006f88de8)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory$win32kbase.sys", 0x272d0, 0x0, true, 0xab3f6c1e435114f6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#endif