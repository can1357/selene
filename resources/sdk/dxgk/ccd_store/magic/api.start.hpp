#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ForConnectedSet@CCD_STORE$dxgkrnl.sys", 0x135eac, 0x0, true, 0x32453a34a0a075c9)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ForTopology@CCD_STORE$dxgkrnl.sys", 0x135e1c, 0x0, true, 0xd8580558c45acbcd)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif