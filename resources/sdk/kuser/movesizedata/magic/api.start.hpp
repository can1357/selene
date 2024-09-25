#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateMoveSizeData@MOVESIZEDATA$win32kfull.sys", 0x0, 0x0, false, 0xec3ee646412663d5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeMoveSizeData@MOVESIZEDATA$win32kfull.sys", 0x0, 0x0, false, 0x9a34b5984bf9d95f)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SHData_StoreSafetyZone@MOVESIZEDATA$win32kfull.sys", 0x0, 0x0, false, 0x9f56c31d444328a0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif