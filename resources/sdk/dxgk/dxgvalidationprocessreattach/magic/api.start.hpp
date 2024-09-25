#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ$dxgkrnl.sys", 0x3f574, 0x0, true, 0x47f6bb59bc2b1f94)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ$dxgkrnl.sys", 0x13a2c, 0x0, true, 0x7aeee65354ec6577)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif