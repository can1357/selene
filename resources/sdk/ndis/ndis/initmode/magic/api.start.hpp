#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CheckAllDriversRunning@Initmode@Ndis$ndis.sys", 0x107fc0, 0x0, true, 0x7dadb2c42aa42b6f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DisableIfNeeded@Initmode@Ndis$ndis.sys", 0x107f2c, 0x0, true, 0xc762e5100e655b86)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif