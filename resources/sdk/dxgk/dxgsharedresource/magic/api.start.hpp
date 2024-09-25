#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseReference@DXGSHAREDRESOURCE$dxgkrnl.sys", 0x8000, 0x0, true, 0xd66d82bd9284a5a4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGSHAREDRESOURCE@@IEAA@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@@Z$dxgkrnl.sys", 0x115f98, 0x0, true, 0xf17c981dd32eec10)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateSharedResource@DXGSHAREDRESOURCE$dxgkrnl.sys", 0x115eb8, 0x0, true, 0x51cfd9a6d5cf44ab)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@DXGSHAREDRESOURCE$dxgkrnl.sys", 0x117180, 0x0, true, 0xbd95f8460fe63224)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyCoreAllocations@DXGSHAREDRESOURCE$dxgkrnl.sys", 0x116088, 0x0, true, 0x3abe7815ae02111d)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGSHAREDRESOURCE@@MEAA@XZ$dxgkrnl.sys", 0x115d68, 0x0, true, 0x7c3499ad2b1d8d64)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif