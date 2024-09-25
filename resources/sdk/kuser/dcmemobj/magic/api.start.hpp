#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z$win32kbase.sys", 0x170a0, 0x0, true, 0x2175aa34a8a2dae4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DCMEMOBJ@@QEAA@KHH@Z$win32kbase.sys", 0x1a6b0, 0x0, true, 0x4caf4421942d6fd3)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DCMEMOBJ@@QEAA@XZ$win32kbase.sys", 0x8e070, 0x0, true, 0x8a5e36075f0a326d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif