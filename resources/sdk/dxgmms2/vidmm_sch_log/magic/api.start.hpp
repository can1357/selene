#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateSchLog@VIDMM_SCH_LOG$dxgmms2.sys", 0x3e674, 0x0, true, 0x675d3e02d7a55a71)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1VIDMM_SCH_LOG@@AEAA@XZ$dxgmms2.sys", 0x3e544, 0x0, true, 0x6408cf41cab5dff8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCpuVa@VIDMM_SCH_LOG$dxgmms2.sys", 0x3e9d8, 0x0, true, 0xac6adf8a0af5112f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif