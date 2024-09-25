#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Stop@LongPowerButtonHoldListener$dxgkrnl.sys", 0x4def4, 0x0, true, 0x518b1d27386fb6dd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WnfCallback@LongPowerButtonHoldListener$dxgkrnl.sys", 0x4df30, 0x0, true, 0x46ee9641a6d85ea1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif