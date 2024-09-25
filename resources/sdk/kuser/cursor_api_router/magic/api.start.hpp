#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DwmSetPointer@CursorApiRouter$win32kfull.sys", 0x0, 0x0, false, 0xdd046f64bd0b4df3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ForceSetCurrentCursorShape@CursorApiRouter$win32kfull.sys", 0x0, 0x0, false, 0x93167bfcb63c58cf)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCursorColorPixels@CursorApiRouter$win32kfull.sys", 0x0, 0x0, false, 0xa557a6a418223d7e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCursorMaskAndXorBits@CursorApiRouter$win32kfull.sys", 0x0, 0x0, false, 0xab5c67ebaeb1c6b1)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HidePointer@CursorApiRouter$win32kfull.sys", 0x0, 0x0, false, 0x5721053440aee1cb)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MovePointer@CursorApiRouter$win32kfull.sys", 0x0, 0x0, false, 0xe45b9a33ad858310)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendMITCursorShape@CursorApiRouter$win32kfull.sys", 0x0, 0x0, false, 0x20f0e4f27c32f4b7)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetPointerShape@CursorApiRouter$win32kfull.sys", 0x0, 0x0, false, 0x27bcfda220bed5e8)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateStateWorker@CursorApiRouter$win32kfull.sys", 0x0, 0x0, false, 0x185ed80084eac4e5)
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
#endif