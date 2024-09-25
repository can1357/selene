#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO$dxgmms2.sys", 0x0, 0x0, false, 0x8fd192c8296b3a48)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO$dxgmms2.sys", 0x0, 0x0, false, 0x49feee2835905359)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO$dxgmms2.sys", 0x64fe0, 0x0, true, 0xaf055510b3e0b200)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO$dxgmms2.sys", 0x7eb5c, 0x0, true, 0x5f86541a949df38f)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO$dxgmms2.sys", 0x65044, 0x0, true, 0x1b124b7ca7892bd4)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ$dxgmms2.sys", 0x80358, 0x0, true, 0xb0681e180c74a760)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ$dxgmms2.sys", 0x806cc, 0x0, true, 0x88fbc05da5a68f1)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO$dxgmms2.sys", 0x75d14, 0x0, true, 0x8ab3b0433c211d39)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO$dxgmms2.sys", 0xbb1b8, 0x0, true, 0xd97e8a3583b1247f)
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