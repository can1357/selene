#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Add@RollingStats$dxgkrnl.sys", 0x6c304, 0x0, true, 0xba5f69d9a830393f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Scale@RollingStats$dxgkrnl.sys", 0x6c720, 0x0, true, 0xbca351a5d8e2a9c6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Update@RollingStats$dxgkrnl.sys", 0x6c900, 0x0, true, 0x23ffd48cd365f5e5)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif