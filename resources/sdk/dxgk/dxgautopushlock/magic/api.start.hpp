#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireExclusive@DXGAUTOPUSHLOCK$dxgkrnl.sys", 0x40f0, 0x0, true, 0xb16d57088fed5936)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseExclusive@DXGAUTOPUSHLOCK$dxgkrnl.sys", 0x42e8, 0x0, true, 0xb0dc7e844f102a27)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseShared@DXGAUTOPUSHLOCK$dxgkrnl.sys", 0x24084, 0x0, true, 0xb148f9f1ea0d58cf)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z$dxgkrnl.sys", 0x4190, 0x0, true, 0xbf8759c8c5d4106f)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGAUTOPUSHLOCK@@QEAA@XZ$dxgkrnl.sys", 0x4214, 0x0, true, 0xe05ca64b883638db)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGAUTOPUSHLOCK$dxgkrnl.sys", 0x422c, 0x0, true, 0xd38d4b8efe99f1ed)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif