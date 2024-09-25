#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpNodesPageOut@NP_CONTEXT$ntoskrnl.exe", 0x5928b8, 0x0, true, 0x1dcfc7ebf43dad1f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpCleanup@NP_CONTEXT$ntoskrnl.exe", 0x2d210c, 0x0, true, 0x7f600d095300a264)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpGetResidentLeaf@NP_CONTEXT$ntoskrnl.exe", 0x5926cc, 0x0, true, 0xaa311cfac83299bf)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpLeafDerefInternal@NP_CONTEXT$ntoskrnl.exe", 0x592700, 0x0, true, 0x730840405c10c21c)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpLeafRefInternal@NP_CONTEXT$ntoskrnl.exe", 0x5927c0, 0x0, true, 0x8fa69b206d126705)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpLeafRemoveInternal@NP_CONTEXT$ntoskrnl.exe", 0x592844, 0x0, true, 0x20a5adec36288805)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpNodeAllocate@NP_CONTEXT$ntoskrnl.exe", 0x31e910, 0x0, true, 0xe1d2fc2a990f25f4)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpNodeFree@NP_CONTEXT$ntoskrnl.exe", 0x37d228, 0x0, true, 0x6ef66395893752de)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpStart@NP_CONTEXT$ntoskrnl.exe", 0x2cac74, 0x0, true, 0x171050f80de1243)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpiGetReservedBuffer@NP_CONTEXT$ntoskrnl.exe", 0x5928e0, 0x0, true, 0xf8a1ff9052c8b5e0)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpiLeafPageIn@NP_CONTEXT$ntoskrnl.exe", 0x592958, 0x0, true, 0xfa5437a022affcce)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpiPerformPageOut@NP_CONTEXT$ntoskrnl.exe", 0x5929fc, 0x0, true, 0x3f7e81eaf0cbdcf3)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpiRebaseCallback@NP_CONTEXT$ntoskrnl.exe", 0x592ad0, 0x0, true, 0xe691a8ebe04d3f2f)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NpiTreeWalkCallback@NP_CONTEXT$ntoskrnl.exe", 0x592b20, 0x0, true, 0x5833d400b70bc767)
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
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#endif