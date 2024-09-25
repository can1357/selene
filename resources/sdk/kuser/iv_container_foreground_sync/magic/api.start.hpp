#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$windowToForeground@IVContainerForegroundSync$win32kfull.sys", 0x0, 0x0, false, 0xfdc184712ce2abf0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xxxIVSyncForeground@IVContainerForegroundSync$win32kfull.sys", 0x0, 0x0, false, 0x29c9545e86f93e14)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif