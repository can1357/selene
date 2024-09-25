#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddRegion@CInputSpace$win32kbase.sys", 0x5694c, 0x0, true, 0x351ed2496d1472b9)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z$win32kbase.sys", 0x56630, 0x0, true, 0x5ecc97910befc632)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeRegions@CInputSpace$win32kbase.sys", 0x53a20, 0x0, true, 0xbc19180628adbea8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Reset@CInputSpace$win32kbase.sys", 0x56354, 0x0, true, 0xf43b2696af0597a3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif