#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z$dxgkrnl.sys", 0x2b6e58, 0x0, true, 0x2b7047078994ee22)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ$dxgkrnl.sys", 0x2b71c8, 0x0, true, 0xa4c7ac1a9d18abaa)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif