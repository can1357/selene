#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireExclusive@COREDEVICEACCESS$dxgkrnl.sys", 0x20b8, 0x0, true, 0x22bf4bda41005620)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireExclusiveUncheck@COREDEVICEACCESS$dxgkrnl.sys", 0xb508, 0x0, true, 0xdc2d3cfc59199c12)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireShared@COREDEVICEACCESS$dxgkrnl.sys", 0x8080, 0x0, true, 0x182009b7a25c9e8e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireSharedUncheck@COREDEVICEACCESS$dxgkrnl.sys", 0x43a8, 0x0, true, 0x6be2429b2b34e0c3)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z$dxgkrnl.sys", 0x1cd8, 0x0, true, 0x83aa23e13e3a79fc)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1COREDEVICEACCESS@@QEAA@XZ$dxgkrnl.sys", 0x24200, 0x0, true, 0x97892f82fa4bb96c)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@COREDEVICEACCESS$dxgkrnl.sys", 0x3b64, 0x0, true, 0x31cc5e227a7924d2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif