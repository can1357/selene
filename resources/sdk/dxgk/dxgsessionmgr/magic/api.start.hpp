#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FinishPnPTransition@DXGSESSIONMGR$dxgkrnl.sys", 0x0, 0x0, false, 0x4445866349334ddc)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetSessionData@DXGSESSIONMGR$dxgkrnl.sys", 0x0, 0x0, false, 0xf180cae3d6bd28a0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR$dxgkrnl.sys", 0x15ad30, 0x0, true, 0xaac06d11ac9b98ae)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CheckPnPTransitionForSession@DXGSESSIONMGR$dxgkrnl.sys", 0x1830d4, 0x0, true, 0x7e865ada3db4f313)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR$dxgkrnl.sys", 0x298f64, 0x0, true, 0x9c924a966e902545)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CompletePnPTransition@DXGSESSIONMGR$dxgkrnl.sys", 0x1831b4, 0x0, true, 0x5ae58f4d5421db86)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IncreaseMonitorUniquenessAllSessions@DXGSESSIONMGR$dxgkrnl.sys", 0x16a86c, 0x0, true, 0xd7e0a43149fa0303)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReferenceSessionCSRSSProcess@DXGSESSIONMGR$dxgkrnl.sys", 0x2996e4, 0x0, true, 0xe44ed02b496e3823)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR$dxgkrnl.sys", 0x15acfc, 0x0, true, 0xe88edd9144287bf8)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGSESSIONMGR@@QEAA@XZ$dxgkrnl.sys", 0x17c178, 0x0, true, 0xcceaabd5c543c3c)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateSession@DXGSESSIONMGR$dxgkrnl.sys", 0x158428, 0x0, true, 0xebabfb02e2c5438b)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateTtmDevice@DXGSESSIONMGR$dxgkrnl.sys", 0x16aa84, 0x0, true, 0x5161960ac9e3ebad)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateTtmDeviceWorker@DXGSESSIONMGR$dxgkrnl.sys", 0x185d50, 0x0, true, 0xf92e9d24c6efb1a4)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGSESSIONMGR@@QEAA@XZ$dxgkrnl.sys", 0x298cf4, 0x0, true, 0xcb0eb7fa0a795ce6)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroySession@DXGSESSIONMGR$dxgkrnl.sys", 0x14cb28, 0x0, true, 0x55a4678b8991a9ee)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyTtmDevice@DXGSESSIONMGR$dxgkrnl.sys", 0x299128, 0x0, true, 0xe18f4c7d656956e)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyTtmDeviceWorker@DXGSESSIONMGR$dxgkrnl.sys", 0x299220, 0x0, true, 0xfdf173374ddd6a46)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FinishPnPTransitionOnSession@DXGSESSIONMGR$dxgkrnl.sys", 0x183250, 0x0, true, 0x5c4fbab6b6679565)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetSessionDataForSpecifiedSession@DXGSESSIONMGR$dxgkrnl.sys", 0x113664, 0x0, true, 0x8443031b70a985e8)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IncreaseNumSessions@DXGSESSIONMGR$dxgkrnl.sys", 0x299518, 0x0, true, 0xd6de4f78fedbed1)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetConsoleSession@DXGSESSIONMGR$dxgkrnl.sys", 0x1492c4, 0x0, true, 0x1b13e911b5be359c)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StartPnPTransition@DXGSESSIONMGR$dxgkrnl.sys", 0x16d978, 0x0, true, 0xfa462c8f79d89425)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WaitForPnPTransitionDone@DXGSESSIONMGR$dxgkrnl.sys", 0x12ef64, 0x0, true, 0xb8d06c4df354a885)
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
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#define _n4(...) __VA_ARGS__
#define _n5(...) __VA_ARGS__
#define _n6(...) __VA_ARGS__
#define _n7(...) __VA_ARGS__
#define _n8(...) __VA_ARGS__
#define _n9(...) __VA_ARGS__
#define _o0(...) __VA_ARGS__
#define _o1(...) __VA_ARGS__
#define _o2(...) __VA_ARGS__
#endif