#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z$dxgkrnl.sys", 0x0, 0x0, false, 0x49d4eaa4ebf54007)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE$dxgkrnl.sys", 0x1f3c, 0x0, true, 0x852ad3e6e37ef17b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z$dxgkrnl.sys", 0x8840, 0x0, true, 0x71cad8d2711423bb)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGDEVICEACCESSLOCKEXCLUSIVE$dxgkrnl.sys", 0x87fc, 0x0, true, 0x309ce325619dd70d)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE$dxgkrnl.sys", 0x2028, 0x0, true, 0xf70d373e24e283a4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif