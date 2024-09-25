#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z$dxgkrnl.sys", 0x25258, 0x0, true, 0xe664104e6961fc5f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Acquire@DXGDEVICEACCESSLOCKSHARED$dxgkrnl.sys", 0x2458c, 0x0, true, 0x5ee178a4e93d3471)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z$dxgkrnl.sys", 0x8604, 0x0, true, 0xa9c01942a054619d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ$dxgkrnl.sys", 0x1ad64, 0x0, true, 0xce5406be25ebd12c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif