#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnableExperimentalRefreshRates@DMMVIDEOSIGNALMODE$dxgkrnl.sys", 0x0, 0x0, false, 0x8b0de187be65fb2d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsUnspecifiedFrequency@DMMVIDEOSIGNALMODE$dxgkrnl.sys", 0x2444, 0x0, true, 0x8c6741185f11c97)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DMMVIDEOSIGNALMODE$dxgkrnl.sys", 0x71c0, 0x0, true, 0x8e5870de4b75431e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DivideAndRound@DMMVIDEOSIGNALMODE$dxgkrnl.sys", 0x1957c, 0x0, true, 0x3c145e4f30a0161)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE$dxgkrnl.sys", 0x5bcc8, 0x0, true, 0x8832f8da3b2de6da)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE$dxgkrnl.sys", 0x2464, 0x0, true, 0x59aca8f43ed3b45d)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE$dxgkrnl.sys", 0x24b4, 0x0, true, 0xacf987ee09794cbd)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE$dxgkrnl.sys", 0x7224, 0x0, true, 0xad16caec302865b2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif