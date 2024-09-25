#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGADAPTERALLOCATION@@QEAA@XZ$dxgkrnl.sys", 0x14a9cc, 0x0, true, 0xabc2df3a5811e037)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGADAPTERALLOCATION@@QEAA@XZ$dxgkrnl.sys", 0x116d40, 0x0, true, 0xcc50986623ca2fd6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif