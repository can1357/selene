#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendRootPnp@PnP@IVRootDeliver$win32kbase.sys", 0x1c3770, 0x0, true, 0x2697d7fce82cd583)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendRootPnpCreated@PnP@IVRootDeliver$win32kbase.sys", 0x1c3a10, 0x0, true, 0x4e18103a91505f20)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendRootPnpSyncState@PnP@IVRootDeliver$win32kbase.sys", 0x1c3da8, 0x0, true, 0x9f9060e235b2dd0c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif