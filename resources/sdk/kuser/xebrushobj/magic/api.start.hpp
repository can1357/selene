#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bSaveAttributes@XEBRUSHOBJ$win32kfull.sys", 0xfaddc, 0x0, true, 0x2e4c530094d250)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RestoreAttributes@XEBRUSHOBJ$win32kfull.sys", 0xfad40, 0x0, true, 0xee7fc16c54f52c7f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif