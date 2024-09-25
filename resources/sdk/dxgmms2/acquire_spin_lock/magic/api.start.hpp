#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Acquire@AcquireSpinLock$dxgmms2.sys", 0x1ca0, 0x0, true, 0xdca2f038fc4d8dea)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@AcquireSpinLock$dxgmms2.sys", 0x144c, 0x0, true, 0xbb1206b0f3d5cd7f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif