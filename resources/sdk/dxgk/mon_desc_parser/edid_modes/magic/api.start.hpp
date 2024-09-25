#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetModeCounts@EDID_MODES@MonDescParser$dxgkrnl.sys", 0x1ef54, 0x0, true, 0x31d95f7e67b6e156)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ModeFromCeaVideoFormat@EDID_MODES@MonDescParser$dxgkrnl.sys", 0x5ef80, 0x0, true, 0x72de115996450fef)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser$dxgkrnl.sys", 0x1e004, 0x0, true, 0xf37e40d06c58288f)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ModeFromStandardTimingBlock@EDID_MODES@MonDescParser$dxgkrnl.sys", 0x1e928, 0x0, true, 0x59975be0ba8bc8d1)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ModesFromEstablishedTimings@EDID_MODES@MonDescParser$dxgkrnl.sys", 0x1f1e8, 0x0, true, 0x3b9801955cafe8fb)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObtainSupportedFrequencyRanges@EDID_MODES@MonDescParser$dxgkrnl.sys", 0x20e50, 0x0, true, 0xf5779d437b821fa0)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObtainSupportedModes@EDID_MODES@MonDescParser$dxgkrnl.sys", 0x1e3f8, 0x0, true, 0x750fd96d6e67d52f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif