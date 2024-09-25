#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@DXGPRESENTHISTORYTOKENQUEUE$dxgkrnl.sys", 0x156708, 0x0, true, 0x7828ea4c6f296f83)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE$dxgkrnl.sys", 0x27e6c4, 0x0, true, 0xbc0a6ad569386d6a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE$dxgkrnl.sys", 0x156600, 0x0, true, 0x593d829e979dc67)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ$dxgkrnl.sys", 0x139ab4, 0x0, true, 0xe99c1edc978cb391)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ$dxgkrnl.sys", 0x1566f0, 0x0, true, 0x60bb20ca856635df)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE$dxgkrnl.sys", 0x139a28, 0x0, true, 0xd9f8c5ae27f12540)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGPRESENTHISTORYTOKENQUEUE$dxgkrnl.sys", 0x1398c8, 0x0, true, 0xf74796e426d04d8c)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE$dxgkrnl.sys", 0xea20, 0x0, true, 0xfc33bafca5601492)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE$dxgkrnl.sys", 0xe9a4, 0x0, true, 0x92bfb90adbe92a2e)
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