#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetTransform@InputTransform$win32kfull.sys", 0x2f600, 0x0, true, 0xd63690842bb77a2a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetTransformList@InputTransform$win32kfull.sys", 0x1f6064, 0x0, true, 0x892d5e16b631d651)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnInput@InputTransform$win32kfull.sys", 0x2f48c, 0x0, true, 0x48721d33b92be0b7)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetCompositionInput@InputTransform$win32kfull.sys", 0x2cf4, 0x0, true, 0xaf2489337ccc72ca)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StoreTransform@InputTransform$win32kfull.sys", 0x2d74, 0x0, true, 0x7c554f31a90e3c21)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif