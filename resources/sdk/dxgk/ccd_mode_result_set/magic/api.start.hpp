#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddMode@CCD_MODE_RESULT_SET$dxgkrnl.sys", 0x2e51a0, 0x0, true, 0x749916a98593eefe)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CCD_MODE_RESULT_SET@@QEAA@XZ$dxgkrnl.sys", 0x2e514c, 0x0, true, 0x97248457021a011)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CCD_MODE_RESULT_SET@@QEAA@XZ$dxgkrnl.sys", 0x2526c, 0x0, true, 0xcde2a6dc2959f1d7)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PopLastMode@CCD_MODE_RESULT_SET$dxgkrnl.sys", 0x2e5d44, 0x0, true, 0xd729b4120e436234)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif