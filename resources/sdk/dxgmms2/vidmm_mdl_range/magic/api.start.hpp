#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNextRange@VIDMM_MDL_RANGE$dxgmms2.sys", 0x762c4, 0x0, true, 0x87892d680280ca9c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InsertBetween@VIDMM_MDL_RANGE$dxgmms2.sys", 0x76f94, 0x0, true, 0xc2ce4d99539ebc4)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Lock@VIDMM_MDL_RANGE$dxgmms2.sys", 0x76fd8, 0x0, true, 0x95093ae37a40200d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockUnlock@VIDMM_MDL_RANGE$dxgmms2.sys", 0x85950, 0x0, true, 0xbb75f5a38da2cb88)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Unlock@VIDMM_MDL_RANGE$dxgmms2.sys", 0x76bec, 0x0, true, 0xa8fba670575fa250)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif