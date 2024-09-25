#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Close@DriverService$ndis.sys", 0x0, 0x0, false, 0xfd0d0a9f418375cb)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Dereference@DriverService$ndis.sys", 0x0, 0x0, false, 0x6b9957bad7d12f97)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DriverService@@QEAA@XZ$ndis.sys", 0x0, 0x0, false, 0x3facd2db2ed7e1ef)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Open@DriverService$ndis.sys", 0x0, 0x0, false, 0xd3d048368832ba28)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Reference@DriverService$ndis.sys", 0x0, 0x0, false, 0x2e802c4422a240e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif