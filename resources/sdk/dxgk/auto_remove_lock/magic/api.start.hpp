#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Acquire@AUTO_REMOVE_LOCK$dxgkrnl.sys", 0x1f404, 0x0, true, 0x669d5ccb9e51428a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@AUTO_REMOVE_LOCK$dxgkrnl.sys", 0x1dfc8, 0x0, true, 0x2a3960aec9b45431)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif