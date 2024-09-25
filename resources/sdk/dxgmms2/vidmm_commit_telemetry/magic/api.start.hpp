#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogAllProcesses@VIDMM_COMMIT_TELEMETRY$dxgmms2.sys", 0x0, 0x0, false, 0x697e927ec954763e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Init@VIDMM_COMMIT_TELEMETRY$dxgmms2.sys", 0xc0f0c, 0x0, true, 0xd1330fa7a8016b57)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogAllocationInformation@VIDMM_COMMIT_TELEMETRY$dxgmms2.sys", 0xc0f34, 0x0, true, 0x246e8aab81307f8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY$dxgmms2.sys", 0xc1288, 0x0, true, 0x2ebbf9449b0bad27)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogFullDefragPass@VIDMM_COMMIT_TELEMETRY$dxgmms2.sys", 0xc1490, 0x0, true, 0x7e49673c2981b647)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY$dxgmms2.sys", 0xc15bc, 0x0, true, 0x77c3ab7b7d39c84c)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogMemoryState@VIDMM_COMMIT_TELEMETRY$dxgmms2.sys", 0xc1768, 0x0, true, 0x7eb3471db0d03bb4)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY$dxgmms2.sys", 0xc1a04, 0x0, true, 0x220b1f0cf77fc199)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogProcessInformation@VIDMM_COMMIT_TELEMETRY$dxgmms2.sys", 0xc1b48, 0x0, true, 0x1f4da584a6cbb2be)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY$dxgmms2.sys", 0xc1d70, 0x0, true, 0x2af90e2d2df24a66)
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
#endif