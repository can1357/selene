#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Init@CSwapChainProp$win32kfull.sys", 0x0, 0x0, false, 0xec957443aa725334)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Delete@CSwapChainProp$win32kfull.sys", 0x23df40, 0x0, true, 0xa5f8e135b7c77dae)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClearCompositionSurfaceObj@CSwapChainProp$win32kfull.sys", 0x14e310, 0x0, true, 0x96a71be19ac0dd20)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateSwapChainProp@CSwapChainProp$win32kfull.sys", 0x14e354, 0x0, true, 0x23d9240614074926)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetAtom@CSwapChainProp$win32kfull.sys", 0x12a2a0, 0x0, true, 0xd82699167996bcb)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyDwm@CSwapChainProp$win32kfull.sys", 0x14e1c0, 0x0, true, 0x77cdbcd6fb7b0d44)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_atom@CSwapChainProp$win32kfull.sys", 0x339dec, 0x0, true, 0x8684f0344a595f9c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif