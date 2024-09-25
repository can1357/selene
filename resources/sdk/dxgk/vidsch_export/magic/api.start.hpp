#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VidSchGetDeviceFlipMode@VIDSCH_EXPORT$dxgkrnl.sys", 0x1739c, 0x0, true, 0xa743c6535d7cc765)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VidSchGetMonitorPowerState@VIDSCH_EXPORT$dxgkrnl.sys", 0x1b7e4, 0x0, true, 0x30d7a37037f0f7da)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT$dxgkrnl.sys", 0x1b808, 0x0, true, 0xa83a171af3c9a9b6)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VidSchIsGpuAccessBlocked@VIDSCH_EXPORT$dxgkrnl.sys", 0x89bc, 0x0, true, 0x8f31c806276e2809)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT$dxgkrnl.sys", 0x3c860, 0x0, true, 0xc0b381f15424bec3)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT$dxgkrnl.sys", 0x3c8f0, 0x0, true, 0x6c9bb44142ce646a)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VidSchQueryProcessStatistics@VIDSCH_EXPORT$dxgkrnl.sys", 0x3c984, 0x0, true, 0x6242ed477bb8c2fc)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT$dxgkrnl.sys", 0x3ca14, 0x0, true, 0xce4dcdd064b91c62)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VidSchRegisterAsDwm@VIDSCH_EXPORT$dxgkrnl.sys", 0x1a18c, 0x0, true, 0x8d450c9057421886)
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
#endif