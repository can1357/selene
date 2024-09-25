#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE$dxgkrnl.sys", 0x0, 0x0, false, 0xb2fb62910fe402fd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReportState@DXGHWQUEUE$dxgkrnl.sys", 0x0, 0x0, false, 0xfab41a886dc1ace8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyCoreState@DXGHWQUEUE$dxgkrnl.sys", 0x26792c, 0x0, true, 0x17441847d34c60ab)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGHWQUEUE@@IEAA@XZ$dxgkrnl.sys", 0x267170, 0x0, true, 0xed5ce50eeaac7597)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGHWQUEUE$dxgkrnl.sys", 0x2683b4, 0x0, true, 0x71b369eba8f194d7)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeOnHost@DXGHWQUEUE$dxgkrnl.sys", 0x268930, 0x0, true, 0x8f9fb995d2588439)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseReference@DXGHWQUEUE$dxgkrnl.sys", 0x24ab4, 0x0, true, 0xe2a15cf8c6dad289)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SubmitCommand@DXGHWQUEUE$dxgkrnl.sys", 0x2694ac, 0x0, true, 0x7de9c4807b325650)
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