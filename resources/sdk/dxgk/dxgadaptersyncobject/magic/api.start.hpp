#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT$dxgkrnl.sys", 0x15b754, 0x0, true, 0x5aa74f7bdef14d68)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z$dxgkrnl.sys", 0x10ec48, 0x0, true, 0x918f6684a6f8d23e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGADAPTERSYNCOBJECT@@QEAA@XZ$dxgkrnl.sys", 0x112acc, 0x0, true, 0x7b02e71127a5202f)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeAdapterObject@DXGADAPTERSYNCOBJECT$dxgkrnl.sys", 0x10ef9c, 0x0, true, 0x82830a8c22e858a2)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReportAdapterObjectState@DXGADAPTERSYNCOBJECT$dxgkrnl.sys", 0x28c3b8, 0x0, true, 0xd1de2930b1950c5a)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Stop@DXGADAPTERSYNCOBJECT$dxgkrnl.sys", 0x28cff4, 0x0, true, 0x5c4db3452a90e797)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif