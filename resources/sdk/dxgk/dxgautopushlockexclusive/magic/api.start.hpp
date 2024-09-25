#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z$dxgkrnl.sys", 0x3e0a4, 0x0, true, 0x16ae0dfe8b137cb)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z$dxgkrnl.sys", 0x40bc, 0x0, true, 0x87280b949cddaec5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ$dxgkrnl.sys", 0x4214, 0x0, true, 0x7fb599e96de517be)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif