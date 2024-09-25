#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGK_PHYSICALADAPTERINFO@@QEAA@XZ$dxgkrnl.sys", 0x23ef0, 0x0, true, 0x7114cdf630bc3267)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGK_PHYSICALADAPTERINFO@@QEAA@XZ$dxgkrnl.sys", 0x1adc0, 0x0, true, 0x27b1507d2eaa7047)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif