#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddData@VIDMM_PURGE_TELEMETRY$dxgmms2.sys", 0xc0de4, 0x0, true, 0x6f7a58af087a5f87)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VIDMM_PURGE_TELEMETRY@@QEAA@PEAVVIDMM_GLOBAL@@@Z$dxgmms2.sys", 0x934d4, 0x0, true, 0x139bdeade4b4a8e5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogBucket@VIDMM_PURGE_TELEMETRY$dxgmms2.sys", 0xc1080, 0x0, true, 0xbabdbdedaa5da629)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogData@VIDMM_PURGE_TELEMETRY$dxgmms2.sys", 0xc117c, 0x0, true, 0x717d7ddc5f9d481)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif