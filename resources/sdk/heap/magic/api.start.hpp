#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HeapGuid$ntoskrnl.exe", 0xaab0, 0x0, true, 0x20b455d3991312b7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HeapRangeGuid$ntoskrnl.exe", 0x1da00, 0x0, true, 0x6b5fb82b8e99f130)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HeapSummaryGuid$ntoskrnl.exe", 0x1d9f0, 0x0, true, 0xa3d97b3e92445a62)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HeapVidMemAllocAligned$win32kfull.sys", 0x2782b0, 0x0, true, 0xfe1c3bdd9899f1ce)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HeapCommitFailAvoidTriageRules$ntdll.dll", 0x107670, 0x0, true, 0x751b9eefa5569b65)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HeapSnapshotEnd$ntdll.dll", 0x130828, 0x0, true, 0x2e1bde6671681cc9)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HeapSnapshotSnap$ntdll.dll", 0x130878, 0x0, true, 0xd570f8f7d9fb1fa1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif