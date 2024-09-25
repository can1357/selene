#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Check@CTDR_DUMP_BUFFER_CANARY$dxgkrnl.sys", 0x25ec4c, 0x0, true, 0x7ba37ae48bb799ad)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z$dxgkrnl.sys", 0x25ea7c, 0x0, true, 0x8a9c0e3f486d629f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif