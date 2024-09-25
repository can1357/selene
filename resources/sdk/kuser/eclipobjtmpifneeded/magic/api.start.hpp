#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ$win32kfull.sys", 0x153c28, 0x0, true, 0xeba73329074224f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vSetup@ECLIPOBJTMPIFNEEDED$win32kfull.sys", 0x153cfc, 0x0, true, 0x254c7804d96e933c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif