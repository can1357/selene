#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_IsEntryInUse@GdiHandleEntryTable$win32kbase.sys", 0x0, 0x0, false, 0x5a8892acbee0b869)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetEntryObject@GdiHandleEntryTable$win32kbase.sys", 0x0, 0x0, false, 0x7f77db36127ed2fe)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseLockAndEntry@GdiHandleEntryTable$win32kbase.sys", 0x0, 0x0, false, 0xcabf91a65a9aeb4)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseEntryLock@GdiHandleEntryTable$win32kbase.sys", 0x24ad0, 0x0, true, 0x52642ba6a1993b0b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireEntryIndex@GdiHandleEntryTable$win32kbase.sys", 0x1bed4, 0x0, true, 0xbcc0e7c69b9d8646)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireEntryLock@GdiHandleEntryTable$win32kbase.sys", 0x25580, 0x0, true, 0x740b81abec496a01)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_Create@GdiHandleEntryTable$win32kbase.sys", 0x78b78, 0x0, true, 0xa24bf3016df0036d)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetEntryObject@GdiHandleEntryTable$win32kbase.sys", 0x26d60, 0x0, true, 0x864eaca6da30a971)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif