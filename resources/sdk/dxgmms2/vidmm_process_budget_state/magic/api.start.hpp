#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VIDMM_PROCESS_BUDGET_STATE@@QEAA@XZ$dxgmms2.sys", 0x0, 0x0, false, 0x6f8855ec0a123a6)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CanBePromoted@VIDMM_PROCESS_BUDGET_STATE$dxgmms2.sys", 0xbb4f8, 0x0, true, 0xe8a0ee5f6d0391a8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE$dxgmms2.sys", 0x75dac, 0x0, true, 0xd99ac5b688cedc20)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE$dxgmms2.sys", 0x807e0, 0x0, true, 0x174b09c4e65b5f3a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif