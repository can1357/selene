#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGDEVICEBYHANDLE@@QEAA@XZ$dxgkrnl.sys", 0x3bc40, 0x0, true, 0x331421b42a97098)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z$dxgkrnl.sys", 0x8184, 0x0, true, 0xa64f06f7b8fb0f7b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif