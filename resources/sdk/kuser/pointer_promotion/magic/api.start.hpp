#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnPointerInputRetrieval@PointerPromotion$win32kfull.sys", 0x2193ec, 0x0, true, 0x909945b76fd00daf)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xxxProcessPointerInputAsMouse@PointerPromotion$win32kfull.sys", 0x219f64, 0x0, true, 0x2c5e0e8c41f547fb)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$xxxPromotePointer@PointerPromotion$win32kfull.sys", 0x21a170, 0x0, true, 0xc3af34e06848f807)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif