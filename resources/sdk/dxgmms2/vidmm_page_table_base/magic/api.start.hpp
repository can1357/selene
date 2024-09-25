#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE$dxgmms2.sys", 0x25ffc, 0x0, true, 0x9244808a94000b67)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReportState@VIDMM_PAGE_TABLE_BASE$dxgmms2.sys", 0xc0884, 0x0, true, 0x5b796b5fb19b575b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE$dxgmms2.sys", 0x82df8, 0x0, true, 0x8cd70ca2c3385ca9)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE$dxgmms2.sys", 0x70f30, 0x0, true, 0x43c82a9ebff69ce2)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE$dxgmms2.sys", 0x6f1f8, 0x0, true, 0x4b9bf00a216ba32b)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE$dxgmms2.sys", 0x70e84, 0x0, true, 0x43df5085344ec301)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE$dxgmms2.sys", 0x70dac, 0x0, true, 0x8a9d5fb083bbfbfe)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE$dxgmms2.sys", 0x25fc4, 0x0, true, 0x5f5309a5eb1172d1)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsResident@VIDMM_PAGE_TABLE_BASE$dxgmms2.sys", 0x12944, 0x0, true, 0x7d3ab91a6a1abf65)
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