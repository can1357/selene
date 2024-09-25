#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AdjustRequiredPermission@DXGPROCESSMUTEXBYHANDLE$dxgkrnl.sys", 0x0, 0x0, false, 0x3820ce4cd40df12d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireInternal@DXGPROCESSMUTEXBYHANDLE$dxgkrnl.sys", 0xd7f60, 0x0, true, 0xedec16d314496181)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z$dxgkrnl.sys", 0xd7ea0, 0x0, true, 0x436660b028efd48)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ$dxgkrnl.sys", 0x27e8c8, 0x0, true, 0xff6305c918a432aa)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetProcess@DXGPROCESSMUTEXBYHANDLE$dxgkrnl.sys", 0x1ac0, 0x0, true, 0x3d114f1b48c12e06)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGPROCESSMUTEXBYHANDLE$dxgkrnl.sys", 0xd7ec0, 0x0, true, 0x93c6d42483549431)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif