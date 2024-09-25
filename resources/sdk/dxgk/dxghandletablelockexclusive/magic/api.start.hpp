#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z$dxgkrnl.sys", 0x3c9c, 0x0, true, 0xe048696faf23d4b7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ$dxgkrnl.sys", 0x4214, 0x0, true, 0xf46d7f4107c1e2f8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif