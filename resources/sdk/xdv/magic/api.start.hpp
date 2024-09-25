#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$XdvEnabled$ntoskrnl.exe", 0xd4600c, 0x0, true, 0x6c53981eaaae165)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$XdvExAllocatePoolInternal$ntoskrnl.exe", 0x9d15a0, 0x0, true, 0xbc78a33b2b621ae9)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$XdvName$ntoskrnl.exe", 0xc0eee0, 0x0, true, 0x6544a0e8fe71383e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$XdvExInitializeLookasideListExInternal$ntoskrnl.exe", 0x59b950, 0x0, true, 0x7f960e33a666b8a3)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$XdvExInitializeNPagedLookasideListInternal$ntoskrnl.exe", 0x9bf7e0, 0x0, true, 0x76d47069f49da8e7)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$XdvExInitializePagedLookasideListInternal$ntoskrnl.exe", 0x9bf7e0, 0x0, true, 0x9ad74296e73cb1)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$XdvIoAllocateIrp$ntoskrnl.exe", 0x59b9c0, 0x0, true, 0x5891d52c2e28b1d7)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$XdvIoAllocateMdl$ntoskrnl.exe", 0x59b9e0, 0x0, true, 0x2f53594bfc0603d1)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$XdvIoAllocateWorkItem$ntoskrnl.exe", 0x59ba20, 0x0, true, 0x8c112122aa6730aa)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$XdvIoBuildDeviceIoControlRequest$ntoskrnl.exe", 0x59ba40, 0x0, true, 0x1efe4544ff252d79)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$XdvIoBuildSynchronousFsdRequest$ntoskrnl.exe", 0x59bac0, 0x0, true, 0x26e61fb8790aae95)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$XdvIopBuildAsynchronousFsdRequest$ntoskrnl.exe", 0x59bb10, 0x0, true, 0xb771697b0f756e2e)
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