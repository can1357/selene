#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetRestoreRectForMigrate@CRDPRecalcState$win32kfull.sys", 0x0, 0x0, false, 0xac398355514a6917)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsRdpVariant@CRDPRecalcState$win32kfull.sys", 0x0, 0x0, false, 0x63da5aa7b531a6f4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif