#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddSource@DMMVIDPNSOURCESET$dxgkrnl.sys", 0x12476c, 0x0, true, 0xf20e936752b64f4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z$dxgkrnl.sys", 0x9140, 0x0, true, 0xb6d2e71d3b1092b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z$dxgkrnl.sys", 0xa734, 0x0, true, 0x7a373b162d5d8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DMMVIDPNSOURCESET@@UEAA@XZ$dxgkrnl.sys", 0x99f4, 0x0, true, 0x7ec85fad0532d403)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNextSource@DMMVIDPNSOURCESET$dxgkrnl.sys", 0x5a0f0, 0x0, true, 0x163a8b3efd08237d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif