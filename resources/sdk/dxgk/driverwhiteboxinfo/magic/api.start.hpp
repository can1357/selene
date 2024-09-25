#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CollectIntrusiveDriverData@DRIVERWHITEBOXINFO$dxgkrnl.sys", 0x2b5160, 0x0, true, 0x653494833a65de7c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CollectNonIntrusiveDriverData@DRIVERWHITEBOXINFO$dxgkrnl.sys", 0x2b533c, 0x0, true, 0x70ed972ef74b9611)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif