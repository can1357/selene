#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR$dxgkrnl.sys", 0xe9f48, 0x0, true, 0x1f322fdb0e171dba)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR$dxgkrnl.sys", 0x2e7ccc, 0x0, true, 0x3c793a7332fccfcd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR$dxgkrnl.sys", 0xea05c, 0x0, true, 0x585cc529d47a918d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR$dxgkrnl.sys", 0xe93b0, 0x0, true, 0x4bccfcb2c136b3ff)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR$dxgkrnl.sys", 0xea33c, 0x0, true, 0xea96071e8f4f599a)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR$dxgkrnl.sys", 0xea2c4, 0x0, true, 0xcd3568576ce785c7)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_SortPathsModalityByPriorityOrderQSortCallback@CCD_BTL_ACTIVE_PATHS_COLLECTOR$dxgkrnl.sys", 0x14c510, 0x0, true, 0x1c491fe58bf27968)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif