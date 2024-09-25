#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNativeResolution@DpiInternal$dxgkrnl.sys", 0x0, 0x0, false, 0xa84b341cdf20fd4b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HasValidPreferredDetailedTimingDescriptor@DpiInternal$dxgkrnl.sys", 0x0, 0x0, false, 0xe4efebd31c1778ff)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsPreferredModeInterlaced@DpiInternal$dxgkrnl.sys", 0x0, 0x0, false, 0xb2115f2e0e49e9b1)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsAudioAvailableInEdid@DpiInternal$dxgkrnl.sys", 0x2a40b8, 0x0, true, 0x1e77d1f79b0412d0)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AvgXY@DpiInternal$dxgkrnl.sys", 0xc188, 0x0, true, 0xecdb50d44bac4a88)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CalculateMinMaxOverride@DpiInternal$dxgkrnl.sys", 0x1907c, 0x0, true, 0xe9602de77ff8cb48)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FillOverridesAndAdjustedScaleFactor@DpiInternal$dxgkrnl.sys", 0xbfb0, 0x0, true, 0x8471c9eb5443fb1f)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindPlateauIndexForScaleFactor@DpiInternal$dxgkrnl.sys", 0xc160, 0x0, true, 0xbbdba5af50fd79ae)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCurrentSourceResolution@DpiInternal$dxgkrnl.sys", 0x1351e8, 0x0, true, 0xdc47f8b96e9f3821)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCurrentTargetResolution@DpiInternal$dxgkrnl.sys", 0x1350e0, 0x0, true, 0x144c02728342bb6)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPreferredScaleFactorForMonitor@DpiInternal$dxgkrnl.sys", 0x134c70, 0x0, true, 0xae7d0eea5bd1dca8)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal$dxgkrnl.sys", 0x48f90, 0x0, true, 0x4b563aa5bcb192bc)
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