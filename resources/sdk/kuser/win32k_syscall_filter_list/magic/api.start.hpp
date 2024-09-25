#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FontDrvHost@Win32KSyscallFilterList$win32kbase.sys", 0x24e610, 0x0, true, 0xff009343f06edf6b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Rs1RestrictedAppcontainer@Win32KSyscallFilterList$win32kbase.sys", 0x24f020, 0x0, true, 0x2c823b7b0da0cfa2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Rs1RestrictedAppcontainerMiniPlugin@Win32KSyscallFilterList$win32kbase.sys", 0x24d850, 0x0, true, 0xdb70425a604f6e0a)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Rs1RestrictedAppcontainerPlugin@Win32KSyscallFilterList$win32kbase.sys", 0x24e620, 0x0, true, 0xa4ebea45b7ef1d2)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Rs3HvsiRdpClient@Win32KSyscallFilterList$win32kbase.sys", 0x24c3b0, 0x0, true, 0xb2fecd588316dbf4)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Rs3RestrictedAppcontainer@Win32KSyscallFilterList$win32kbase.sys", 0x24cfb0, 0x0, true, 0xe4cf0596b22accd4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif