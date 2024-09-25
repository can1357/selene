#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z$dxgkrnl.sys", 0x222710, 0x0, true, 0xbdd013a13bc567c5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGALLOCATION@@QEAA@XZ$dxgkrnl.sys", 0x116d08, 0x0, true, 0x5646a3a92b26c3eb)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif