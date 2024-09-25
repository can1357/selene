#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddData@VIDMM_TELEMETRY_PAGING_COSTS$dxgmms2.sys", 0x0, 0x0, false, 0x105a059408ce4eec)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ConvertTimingData@VIDMM_TELEMETRY_PAGING_COSTS$dxgmms2.sys", 0x0, 0x0, false, 0x3b76e90522877086)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogData@VIDMM_TELEMETRY_PAGING_COSTS$dxgmms2.sys", 0x0, 0x0, false, 0x3abadb0280532465)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif