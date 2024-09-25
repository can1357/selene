#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PlatformAllocateFromPagedLookasideList@NSInstrumentation$win32kfull.sys", 0x2dcab8, 0x0, true, 0xac4929cb3b0eb9b5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PlatformFreeToPagedLookasideList@NSInstrumentation$win32kfull.sys", 0x2dcafc, 0x0, true, 0x83bcd4734cd35151)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PlatformDebugModeEnabled@NSInstrumentation$win32kbase.sys", 0xd44f8, 0x0, true, 0xe1726917d956bfc9)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PlatformAbort@NSInstrumentation$win32kfull.sys", 0x2dca08, 0x0, true, 0x59941fd6e754f826)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PlatformAllocate@NSInstrumentation$win32kfull.sys", 0xee8d0, 0x0, true, 0xe7078759a24df536)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PlatformCreateSection@NSInstrumentation$win32kfull.sys", 0x14f9ac, 0x0, true, 0x3e45eb42ac757ea6)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PlatformFree@NSInstrumentation$win32kfull.sys", 0x102a20, 0x0, true, 0xfa6ab14fd36e25a9)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PlatformMapViewInSessionSpace@NSInstrumentation$win32kfull.sys", 0x14f964, 0x0, true, 0x3477f313714fcea9)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteAllocTableDumpBufferCallback@NSInstrumentation$win32kfull.sys", 0x2de0b0, 0x0, true, 0x118387cba6baf09f)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteBackTraceDumpBufferCallback@NSInstrumentation$win32kfull.sys", 0x2de0f0, 0x0, true, 0x10acdab0bedb1d30)
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