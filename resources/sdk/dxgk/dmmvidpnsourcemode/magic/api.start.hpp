#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DMMVIDPNSOURCEMODE@@QEAA@I@Z$dxgkrnl.sys", 0x582e8, 0x0, true, 0xe2cd85e1e2544849)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetBitsPerPixel@DMMVIDPNSOURCEMODE$dxgkrnl.sys", 0x59624, 0x0, true, 0xf5e0521a352708ef)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetGraphicsInfo@DMMVIDPNSOURCEMODE$dxgkrnl.sys", 0xa530, 0x0, true, 0x131de7636526349a)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetTextInfo@DMMVIDPNSOURCEMODE$dxgkrnl.sys", 0x597e0, 0x0, true, 0x15ed42898eb422ee)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DMMVIDPNSOURCEMODE$dxgkrnl.sys", 0x599ec, 0x0, true, 0x80c1ddb62dba086c)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Serialize@DMMVIDPNSOURCEMODE$dxgkrnl.sys", 0x12fc4, 0x0, true, 0x34f7fdd716da1fed)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif