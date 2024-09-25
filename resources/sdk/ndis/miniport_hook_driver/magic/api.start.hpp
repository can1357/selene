#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1MINIPORT_HOOK_DRIVER@@QEAA@XZ$ndis.sys", 0x126180, 0x0, true, 0x8765d39b05862d88)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Register@MINIPORT_HOOK_DRIVER$ndis.sys", 0x1262c4, 0x0, true, 0xb3459420a517c00b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MINIPORT_HOOK_DRIVER@@QEAA@XZ$ndis.sys", 0x10b734, 0x0, true, 0x40cbf14cbb72bb9e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Deregister@MINIPORT_HOOK_DRIVER$ndis.sys", 0x1261f8, 0x0, true, 0x7e31dfb71464728b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeregisterAsync@MINIPORT_HOOK_DRIVER$ndis.sys", 0x1262a0, 0x0, true, 0xe9190c0590b71c95)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FillDefaultHandlers@MINIPORT_HOOK_DRIVER$ndis.sys", 0x108844, 0x0, true, 0x15fe8cf9380416f8)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WaitForAllHookedDriversToDeregister@MINIPORT_HOOK_DRIVER$ndis.sys", 0x1263a8, 0x0, true, 0x52d01b7c22357be6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif