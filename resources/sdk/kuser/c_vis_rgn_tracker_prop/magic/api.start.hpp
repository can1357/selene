#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeTrackedRegion@CVisRgnTrackerProp$win32kfull.sys", 0x0, 0x0, false, 0xe559c0352208be1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveTracker@CVisRgnTrackerProp$win32kfull.sys", 0x0, 0x0, false, 0xca5f7f01f08fb439)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Delete@CVisRgnTrackerProp$win32kfull.sys", 0xbeb10, 0x0, true, 0x7bf8ce5ef05f9d34)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeTrackedRegions@CVisRgnTrackerProp$win32kfull.sys", 0xbeb68, 0x0, true, 0xf14557fceecf1328)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetAtom@CVisRgnTrackerProp$win32kfull.sys", 0x12a290, 0x0, true, 0xc40d324d4e06aef8)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MarkDirty@CVisRgnTrackerProp$win32kfull.sys", 0xbeac4, 0x0, true, 0x6f0c73bf924ee5e)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_atom@CVisRgnTrackerProp$win32kfull.sys", 0x339de8, 0x0, true, 0xcb630af2b20ad624)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_DirtyList@CVisRgnTrackerProp$win32kfull.sys", 0x32b278, 0x0, true, 0x5e69e38b293be867)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Update@CVisRgnTrackerProp$win32kfull.sys", 0x4ec1c, 0x0, true, 0xd5258c62b1207dec)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateTrackerRegion@CVisRgnTrackerProp$win32kfull.sys", 0x4ed08, 0x0, true, 0x287855a64070de81)
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