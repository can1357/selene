#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$pfnXlateBetweenBitfields@XLATE$win32kfull.sys", 0x1406a4, 0x0, true, 0xf1635dfaa3a9a605)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vCheckForICM@XLATE$win32kfull.sys", 0x2bf490, 0x0, true, 0x894ba5aba3c3d8ec)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vCheckForTrivial@XLATE$win32kfull.sys", 0x2bf528, 0x0, true, 0x29b28506723bbb19)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vMapNewXlate@XLATE$win32kfull.sys", 0x2bf648, 0x0, true, 0xa55f3b3a67033830)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif