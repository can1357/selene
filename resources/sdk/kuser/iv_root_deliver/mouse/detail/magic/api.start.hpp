#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendMouseInputToContainer@Detail@Mouse@IVRootDeliver$win32kbase.sys", 0x1c30bc, 0x0, true, 0x78b1b4eeb2694de7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver$win32kbase.sys", 0x1c4334, 0x0, true, 0x3e7eae46cd8dd696)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif