#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DMMVIDEOPRESENTSOURCE@@UEAA@XZ$dxgkrnl.sys", 0x5af84, 0x0, true, 0x9480f50ac460a297)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z$dxgkrnl.sys", 0x22d70, 0x0, true, 0xe22d62e17ccf5bc)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Serialize@DMMVIDEOPRESENTSOURCE$dxgkrnl.sys", 0x2e4e88, 0x0, true, 0x38d2d1d2bba183d9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif