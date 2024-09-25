#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_RpcTransferSyntax_2_0$ntoskrnl.exe", 0x0, 0x0, false, 0xfcdf55f939dff279)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RpcNrpGetAddrInfo$afd.sys", 0x4104, 0x0, true, 0x1b732df2cbc897fa)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RpcNrpGetNameInfo$afd.sys", 0x1cf70, 0x0, true, 0x2d28a2dc381580d2)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RpcStatusToNrpNtStatus$afd.sys", 0x40e4, 0x0, true, 0x140621f0a21ea287)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif