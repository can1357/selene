#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VIDPNTARGETINFO@@QEAA@XZ$dxgkrnl.sys", 0x1ae90, 0x0, true, 0x6d30e1b90ebeabc2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@VIDPNTARGETINFO$dxgkrnl.sys", 0x2b63e0, 0x0, true, 0xaf7e94a4bf588b80)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif