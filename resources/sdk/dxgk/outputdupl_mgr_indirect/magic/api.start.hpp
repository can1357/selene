#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z$dxgkrnl.sys", 0x47ab0, 0x0, true, 0x8232643f7294e0b1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT$dxgkrnl.sys", 0x297788, 0x0, true, 0x32c747fe8bb20bad)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif