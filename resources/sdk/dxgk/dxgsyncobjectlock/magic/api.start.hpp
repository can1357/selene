#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z$dxgkrnl.sys", 0x0, 0x0, false, 0x40dee702be24d5bd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z$dxgkrnl.sys", 0x8478, 0x0, true, 0xba4e03fdbbdea690)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGSYNCOBJECTLOCK@@QEAA@XZ$dxgkrnl.sys", 0x391fc, 0x0, true, 0x5badb6587b1b76a9)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireExclusive@DXGSYNCOBJECTLOCK$dxgkrnl.sys", 0x39218, 0x0, true, 0x814c93d39890cd30)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireShared@DXGSYNCOBJECTLOCK$dxgkrnl.sys", 0x8424, 0x0, true, 0x2c487d9a0b482464)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGSYNCOBJECTLOCK$dxgkrnl.sys", 0x8334, 0x0, true, 0x1b90069b6d2f31c3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif