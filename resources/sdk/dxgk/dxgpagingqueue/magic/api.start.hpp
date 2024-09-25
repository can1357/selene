#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveReference@DXGPAGINGQUEUE$dxgkrnl.sys", 0x0, 0x0, false, 0x465a8c989f0bd3ca)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseReference@DXGPAGINGQUEUE$dxgkrnl.sys", 0x24950, 0x0, true, 0xa3b42233afc7eb23)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyCoreState@DXGPAGINGQUEUE$dxgkrnl.sys", 0xda600, 0x0, true, 0xbe8a60d78b78297c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPAGINGQUEUE@@IEAA@XZ$dxgkrnl.sys", 0xda59c, 0x0, true, 0x62fca055480f04c8)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGPAGINGQUEUE$dxgkrnl.sys", 0xef450, 0x0, true, 0x5a4f95c267fa2274)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif