#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xxxDisplayChangedHandler@CallShell$win32kfull.sys", 0x0, 0x0, false, 0x91998c3b190ef1df)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xxxMigrateWindowHandler@CallShell$win32kfull.sys", 0x0, 0x0, false, 0xf0a0efaa874da3cb)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xxxArrangementRectangleHandler@CallShell$win32kfull.sys", 0x23e260, 0x0, true, 0x376cf2ece5cf466d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xxxShowWindowPolicyHandler@CallShell$win32kfull.sys", 0xc16b8, 0x0, true, 0x842b463df1ad13fb)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xxxWindowSizeStartingHandler@CallShell$win32kfull.sys", 0x23e354, 0x0, true, 0xd3517e5455666db3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif