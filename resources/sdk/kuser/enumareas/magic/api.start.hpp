#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bAdvanceToTopMostOpaqueLayer@ENUMAREAS$win32kfull.sys", 0x153edc, 0x0, true, 0x2a79a3c28c6721b5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bEnum@ENUMAREAS$win32kfull.sys", 0xf0eec, 0x0, true, 0xb9699d09c8280644)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bEnumLayers@ENUMAREAS$win32kfull.sys", 0x153d98, 0x0, true, 0x4bf63b7411a9127e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z$win32kfull.sys", 0xf0d34, 0x0, true, 0xfb48eace4f747b92)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1ENUMAREAS@@QEAA@XZ$win32kfull.sys", 0xf0ccc, 0x0, true, 0x2b84a043527e990e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif