#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CTTMDEVICE@@QEAA@W4TTM_DEVICE_TYPE@@@Z$dxgkrnl.sys", 0x0, 0x0, false, 0x1be890a833b8ec9f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CTTMDEVICE@@AEAA@W4TTM_DEVICE_TYPE@@@Z$dxgkrnl.sys", 0x16aa1c, 0x0, true, 0x5744d9a4d06be1fc)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CloseCallback@CTTMDEVICE$dxgkrnl.sys", 0x299000, 0x0, true, 0x4388745b0dae9d16)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CTTMDEVICE$dxgkrnl.sys", 0x16ac5c, 0x0, true, 0x9dc823c22e633c0b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RegisterTtmDevice@CTTMDEVICE$dxgkrnl.sys", 0x299784, 0x0, true, 0xe7a65f5f2e489ad5)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetDisplayStateCallback@CTTMDEVICE$dxgkrnl.sys", 0x299b30, 0x0, true, 0x19a33319f68300a5)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnRegisterTtmDevice@CTTMDEVICE$dxgkrnl.sys", 0x29a4a8, 0x0, true, 0x4e8903344cfe8da)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif