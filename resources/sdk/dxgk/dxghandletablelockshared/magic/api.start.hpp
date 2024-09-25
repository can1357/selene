#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z$dxgkrnl.sys", 0x8784, 0x0, true, 0xba28cc8934259f03)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ$dxgkrnl.sys", 0x4214, 0x0, true, 0x984177d1a4c093ba)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif