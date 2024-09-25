#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z$win32kfull.sys", 0x2a0fa0, 0x0, true, 0xb85e397c2860c6ee)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyTable@MULTIBRUSH$win32kfull.sys", 0x2a1290, 0x0, true, 0xccb8a6db7cc30557)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LoadElement@MULTIBRUSH$win32kfull.sys", 0x2a13e0, 0x0, true, 0xaf68e2dc10da506c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StoreElement@MULTIBRUSH$win32kfull.sys", 0x2a59d4, 0x0, true, 0xca95d61bcc3d26ff)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif