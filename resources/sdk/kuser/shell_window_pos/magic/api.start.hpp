#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreePositionEvent@ShellWindowPos$win32kfull.sys", 0x0, 0x0, false, 0xfc3a2441f6c21ec7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MigrateWindowAsync@ShellWindowPos$win32kfull.sys", 0x0, 0x0, false, 0x6ec0976476f65864)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyPosAndStateApplied@ShellWindowPos$win32kfull.sys", 0x0, 0x0, false, 0x963da7d6599e8928)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PositionWindowAsync@ShellWindowPos$win32kfull.sys", 0x0, 0x0, false, 0xe6a650ebc7bb7688)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xxxProcessPositionEvent@ShellWindowPos$win32kfull.sys", 0x0, 0x0, false, 0xe196a207021e5b57)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif