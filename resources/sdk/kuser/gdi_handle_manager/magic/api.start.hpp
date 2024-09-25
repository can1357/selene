#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseLockAndEntry@GdiHandleManager$win32kbase.sys", 0x0, 0x0, false, 0xc7dfdbd6046dc046)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetEntryObject@GdiHandleManager$win32kbase.sys", 0x0, 0x0, false, 0xda9d61176bd577c3)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetEntryObject@GdiHandleManager$win32kbase.sys", 0x26c50, 0x0, true, 0xf471baf6d02637b4)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseEntryLock@GdiHandleManager$win32kbase.sys", 0x24950, 0x0, true, 0x2ff03dcb76789d7e)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireEntryIndex@GdiHandleManager$win32kbase.sys", 0x1f650, 0x0, true, 0x87a982239709588d)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@GdiHandleManager$win32kbase.sys", 0x78a50, 0x0, true, 0x75062f1b20f1ced2)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DecodeIndex@GdiHandleManager$win32kbase.sys", 0x27330, 0x0, true, 0x6793848f6d1a7773)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@GdiHandleManager$win32kbase.sys", 0xc6440, 0x0, true, 0xf56134ad71ecf703)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetEntryFromObject@GdiHandleManager$win32kbase.sys", 0x257c0, 0x0, true, 0x61eb4a660f07d8ce)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNextEntryIndex@GdiHandleManager$win32kbase.sys", 0x45280, 0x0, true, 0xf70238963b4147fb)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_IncrementOrDecrementUniqueness@GdiHandleManager$win32kbase.sys", 0x85558, 0x0, true, 0xe43a99f0a9bc1248)
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
#define _n0(...) __VA_ARGS__
#endif