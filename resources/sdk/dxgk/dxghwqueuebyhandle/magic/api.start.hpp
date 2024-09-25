#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z$dxgkrnl.sys", 0x17138, 0x0, true, 0xff3dc81cda67c595)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGHWQUEUEBYHANDLE@@QEAA@XZ$dxgkrnl.sys", 0x17010, 0x0, true, 0xf72b89ea8b797910)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif