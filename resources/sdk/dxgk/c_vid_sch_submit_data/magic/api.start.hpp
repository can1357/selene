#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CVidSchSubmitData@@QEAA@XZ$dxgkrnl.sys", 0x4288, 0x0, true, 0x4042312628a09149)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeSubmitData@CVidSchSubmitData$dxgkrnl.sys", 0x16eb4, 0x0, true, 0xb2b8908df782677e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif