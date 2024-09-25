#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bIntersectMoveWithDirty@METAREGION$win32kfull.sys", 0x2c0ecc, 0x0, true, 0x50064dbe034de502)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bTrimMoveWithRegion@METAREGION$win32kfull.sys", 0x2c113c, 0x0, true, 0x79fe5efa60d429f3)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceMoveRemovedMoveRegions@METAREGION$win32kfull.sys", 0x2c0e44, 0x0, true, 0xc5cef82c9c49c87f)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vAddRectToMoveRegionHelper@METAREGION$win32kfull.sys", 0x2c1368, 0x0, true, 0xcc3c7ce152527bd4)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vApplyMoveData@METAREGION$win32kfull.sys", 0x2c14c8, 0x0, true, 0xb95bb57a3acda6ca)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vCalculateNoMoveDirty@METAREGION$win32kfull.sys", 0x2c1808, 0x0, true, 0xe676ce3d3b2f6)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vClearMoveData@METAREGION$win32kfull.sys", 0xcf0c8, 0x0, true, 0x7a6d728b3ae40bb4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif