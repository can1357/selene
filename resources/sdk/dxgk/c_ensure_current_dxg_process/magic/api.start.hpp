#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AttachToProcess@CEnsureCurrentDxgProcess$dxgkrnl.sys", 0x3929c, 0x0, true, 0x563eba07e107cade)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z$dxgkrnl.sys", 0x39198, 0x0, true, 0x7f7db4c98722e2a7)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif