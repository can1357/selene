#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClipSpInitialize$ntoskrnl.exe", 0x0, 0x0, false, 0xa2bc8887bda033b7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClipSpUninitialize$ntoskrnl.exe", 0x0, 0x0, false, 0x193ca9fd371cf5c5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClipInitHandles$ntoskrnl.exe", 0x3b3250, 0x0, true, 0xe187aa44bb9b2ac2)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClipPointToDesktop$win32kfull.sys", 0x0, 0x0, false, 0x24ed51f3be5afb0b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClipContact$win32kfull.sys", 0x2157b0, 0x0, true, 0xbc3db5ea1df757bf)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClipCurrentCursor$dxgkrnl.sys", 0x277bc0, 0x0, true, 0xfd623a1db5e2a6e8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif