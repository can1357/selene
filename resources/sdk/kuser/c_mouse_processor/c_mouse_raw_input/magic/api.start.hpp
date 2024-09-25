#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CMouseRawInput@CMouseProcessor$win32kbase.sys", 0x644b4, 0x0, true, 0x6bae7eaa31f42450)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PostRawMouse@CMouseRawInput@CMouseProcessor$win32kbase.sys", 0x5e16c, 0x0, true, 0x88df09d0155753a8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif