#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetMigrateMonitor@AdvancedWindowPos$win32kfull.sys", 0x0, 0x0, false, 0x4bd7a8c2bddb6c38)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetWindowState@AdvancedWindowPos$win32kfull.sys", 0x0, 0x0, false, 0xd5b7ea9ebe8c51c9)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HasFullscreenState@AdvancedWindowPos$win32kfull.sys", 0x0, 0x0, false, 0x72b7d958921149e7)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MigrateCheckpoint@AdvancedWindowPos$win32kfull.sys", 0x0, 0x0, false, 0xa06abc803ad85727)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xxxApplyWindowPos@AdvancedWindowPos$win32kfull.sys", 0x0, 0x0, false, 0xde0663ddd2d3b457)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xxxMigrateWindowToMonitor@AdvancedWindowPos$win32kfull.sys", 0x0, 0x0, false, 0x448dff2e81fb439e)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xxxVerticalMaximize@AdvancedWindowPos$win32kfull.sys", 0x0, 0x0, false, 0xa3f657accd0d9d5a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif