#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Dupe@NotificationRecord@NotificationRegistry$dxgi.dll", 0x6eb4, 0x0, true, 0xb512e76f5343f307)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsValidWindowMessage@NotificationRecord@NotificationRegistry$dxgi.dll", 0x70ec8, 0x0, true, 0xe63c5b4de3e67460)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Notify@NotificationRecord@NotificationRegistry$dxgi.dll", 0x73ec, 0x0, true, 0x409f1e519c13734e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif