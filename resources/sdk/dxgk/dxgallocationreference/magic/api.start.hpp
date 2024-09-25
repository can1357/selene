#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Assign@DXGALLOCATIONREFERENCE$dxgkrnl.sys", 0x0, 0x0, false, 0x252a0babb6cb9bc3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AssignNull@DXGALLOCATIONREFERENCE$dxgkrnl.sys", 0x2227d0, 0x0, true, 0x8ee68dc96851a671)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MoveAssign@DXGALLOCATIONREFERENCE$dxgkrnl.sys", 0xff2ec, 0x0, true, 0x9da440d9aff94dd1)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z$dxgkrnl.sys", 0xfc900, 0x0, true, 0x801f914eec7e0d47)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGALLOCATIONREFERENCE@@QEAA@XZ$dxgkrnl.sys", 0x157bd0, 0x0, true, 0x1436dd58e9b3eaed)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGALLOCATIONREFERENCE@@QEAA@XZ$dxgkrnl.sys", 0xfb180, 0x0, true, 0x8ca45c3842b8c1b0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif