#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPROCESSDDILOCK@@QEAA@XZ$dxgkrnl.sys", 0x4214, 0x0, true, 0x2028f834ce7c820f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z$dxgkrnl.sys", 0x3a9c, 0x0, true, 0x2d51ce26bbf47bc8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif