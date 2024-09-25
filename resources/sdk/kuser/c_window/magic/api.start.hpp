#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CanTransferForeground@CWindow$win32kfull.sys", 0x240a1c, 0x0, true, 0x6f291fb4dd7174de)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ForceForeground@CWindow$win32kfull.sys", 0x240e28, 0x0, true, 0xeeadf0cb2530d041)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetWindowToForegroundActivate@CWindow$win32kfull.sys", 0x240f60, 0x0, true, 0xf977c75c5c993788)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TemplateWindow@CWindow$win32kfull.sys", 0x2414d8, 0x0, true, 0xe95dfb113fc8f285)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif