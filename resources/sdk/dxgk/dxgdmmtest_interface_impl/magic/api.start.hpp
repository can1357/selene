#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateVidPn@DXGDMMTEST_INTERFACE_IMPL$dxgkrnl.sys", 0x0, 0x0, false, 0xe393a0b6507569ec)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL$dxgkrnl.sys", 0x0, 0x0, false, 0xcf2e60960813c742)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL$dxgkrnl.sys", 0x0, 0x0, false, 0x3a6d62c4a4879657)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif