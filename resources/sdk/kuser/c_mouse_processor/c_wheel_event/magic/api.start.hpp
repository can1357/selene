#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetButtonFlags@CWheelEvent@CMouseProcessor$win32kbase.sys", 0x0, 0x0, false, 0xfbcd87e924390c09)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateInputMessage@CWheelEvent@CMouseProcessor$win32kbase.sys", 0x1c69a0, 0x0, true, 0x115ac7fd7a554d4c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetHitTestAttributes@CWheelEvent@CMouseProcessor$win32kbase.sys", 0x1c7650, 0x0, true, 0x52d32747192d2a1c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetWheelMessage@CWheelEvent@CMouseProcessor$win32kbase.sys", 0x1c78b8, 0x0, true, 0x920b38f65e0e1b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteChunkMouseInputData@CWheelEvent@CMouseProcessor$win32kbase.sys", 0xc8690, 0x0, true, 0xa5afadb3983389b5)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif