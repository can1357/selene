#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z$dxgkrnl.sys", 0x0, 0x0, false, 0x279fbf3bdd54d99)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0x75b5031d3060e338)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Open@DXGPAGINGQUEUEBYHANDLE$dxgkrnl.sys", 0x1d7c0, 0x0, true, 0x4146d545921a3e68)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif