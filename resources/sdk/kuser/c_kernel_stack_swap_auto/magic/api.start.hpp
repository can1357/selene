#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CKernelStackSwapAuto@@QEAA@XZ$win32kfull.sys", 0x156314, 0x0, true, 0x5d9ecd83caad8502)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CKernelStackSwapAuto@@QEAA@XZ$win32kfull.sys", 0x15633c, 0x0, true, 0x52eb891bbb28682d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif