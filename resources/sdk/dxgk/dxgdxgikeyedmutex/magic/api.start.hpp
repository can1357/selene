#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGDXGIKEYEDMUTEX$dxgkrnl.sys", 0x294d58, 0x0, true, 0xbf6fb52934b5eb25)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Abandon@DXGDXGIKEYEDMUTEX$dxgkrnl.sys", 0x292e3c, 0x0, true, 0xcf0f091a51313a5b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireCPU@DXGDXGIKEYEDMUTEX$dxgkrnl.sys", 0x292e68, 0x0, true, 0x4ec439d4de14ab75)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CloseConsumerResources@DXGDXGIKEYEDMUTEX$dxgkrnl.sys", 0x293284, 0x0, true, 0x4a188c3c074d414c)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CloseFromDevice@DXGDXGIKEYEDMUTEX$dxgkrnl.sys", 0x29335c, 0x0, true, 0xd2dcae5512fd92ec)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CloseLocalMutex@DXGDXGIKEYEDMUTEX$dxgkrnl.sys", 0x29362c, 0x0, true, 0xf484c869e34a4af)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGDXGIKEYEDMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x292d10, 0x0, true, 0x6cf84c062d9605d7)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX$dxgkrnl.sys", 0x294cf8, 0x0, true, 0xb2f2d2f9f39f4504)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OpenForDevice@DXGDXGIKEYEDMUTEX$dxgkrnl.sys", 0x295788, 0x0, true, 0x799cca0fd719a508)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OpenLocalMutex@DXGDXGIKEYEDMUTEX$dxgkrnl.sys", 0x295a84, 0x0, true, 0x660bc624b48ca62e)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX$dxgkrnl.sys", 0x295b70, 0x0, true, 0x95080c532122096)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGDXGIKEYEDMUTEX$dxgkrnl.sys", 0x296c98, 0x0, true, 0x929fb6c950ab430b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#endif