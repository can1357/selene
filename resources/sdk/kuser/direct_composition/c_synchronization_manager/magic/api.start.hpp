#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ShouldDeferToken@CSynchronizationManager@DirectComposition$win32kbase.sys", 0x90a28, 0x0, true, 0xea83be209ac8e84)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyPresent@CSynchronizationManager@DirectComposition$win32kbase.sys", 0x90aec, 0x0, true, 0x139b0372887339b8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnSessionCreation@CSynchronizationManager@DirectComposition$win32kbase.sys", 0x7d998, 0x0, true, 0xbc98eca2731b068a)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition$win32kbase.sys", 0xd2a4, 0x0, true, 0x819e27ae54703695)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_pSyncTable@CSynchronizationManager@DirectComposition$win32kbase.sys", 0x257e30, 0x0, true, 0x30dc28c5190d3d65)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_pSyncTableLock@CSynchronizationManager@DirectComposition$win32kbase.sys", 0x257e20, 0x0, true, 0x28adba98e2d87aea)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_syncIdCounter@CSynchronizationManager@DirectComposition$win32kbase.sys", 0x257e28, 0x0, true, 0xaf9f57c7f4c9466f)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Synchronize@CSynchronizationManager@DirectComposition$win32kbase.sys", 0xbb10, 0x0, true, 0x6ca4c3e6e3828669)
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