#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendPTPInertiaInput@Pointer@IVRootDeliver$win32kbase.sys", 0x1c33a8, 0x0, true, 0x47655717d2b6d1e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendTouchInput@Pointer@IVRootDeliver$win32kbase.sys", 0x1c3f2c, 0x0, true, 0xefcb06048179570)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif