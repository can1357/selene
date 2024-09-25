#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DdiDsiCaps@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0xe900239944c46da8)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DdiDsiReset@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0x69c8b5c60e2277a6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DdiDsiTransmission@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0xd1beeffcb2fab64)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDisplayIdDescriptor@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0x30928ce49ef34318)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDisplayPortAddress@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0x49e273b1c9bd6a40)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDriverColorimetryOverride@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0xe4a804cb7ac0d46e)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDriverMonitorNativeTimingOverride@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0xd31a13c1b864b9f8)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetIntegratedDisplayIntendedUsage@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0xd1a9a57e832c7b53)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetIntegratedDisplayLinkInfo@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0x8bb814aaf19db239)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetMonitorDescriptor@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0x74a78b90de9a4bf0)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueryDriverRecommendedMonitorModes@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0xae799f7df2234b56)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetTargetAdjustedColorimetry@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0xcd056b1307cee71f)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateGammaRampOnVidPnTarget@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0xc1e1625ca6565a01)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateMonitorLinkInfo@KernelDriver$dxgkrnl.sys", 0x0, 0x0, false, 0xe50bf423234e228b)
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