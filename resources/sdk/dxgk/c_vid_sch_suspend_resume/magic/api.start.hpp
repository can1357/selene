#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Resume@CVidSchSuspendResume$dxgkrnl.sys", 0x1a4b4, 0x0, true, 0x3261194665cde82a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetSuspendSourceMask@CVidSchSuspendResume$dxgkrnl.sys", 0x385b8, 0x0, true, 0x7161771cacc7f290)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif