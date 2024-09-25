#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER$dxgmms2.sys", 0x0, 0x0, false, 0x23c4019f1dea8096)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER$dxgmms2.sys", 0x0, 0x0, false, 0x93c508d5020433bb)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnReset@VIDSCH_VSYNC_SMOOTHER$dxgmms2.sys", 0x0, 0x0, false, 0xf6d94217d57c8778)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ResetSmoother@VIDSCH_VSYNC_SMOOTHER$dxgmms2.sys", 0x0, 0x0, false, 0x868886faf104d57f)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SmoothenFrame@VIDSCH_VSYNC_SMOOTHER$dxgmms2.sys", 0x0, 0x0, false, 0x9ea21474c84d861e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif