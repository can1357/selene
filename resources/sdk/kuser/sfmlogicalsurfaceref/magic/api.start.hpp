#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z$win32kfull.sys", 0x74a40, 0x0, true, 0x2fd3a67c8d25dd6e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SFMLOGICALSURFACEREF@@QEAA@XZ$win32kfull.sys", 0x740d0, 0x0, true, 0xf0f7a9a347070dfd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockLogicalSurfaceObj@SFMLOGICALSURFACEREF$win32kfull.sys", 0x74a74, 0x0, true, 0x2b57cb6691322142)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif