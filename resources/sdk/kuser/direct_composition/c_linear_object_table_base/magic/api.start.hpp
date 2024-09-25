#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnumerateObjects@CLinearObjectTableBase@DirectComposition$win32kbase.sys", 0x94428, 0x0, true, 0x331eb9d7a26af2cb)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InsertObject@CLinearObjectTableBase@DirectComposition$win32kbase.sys", 0x35590, 0x0, true, 0x1724737439303fcd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseHandle@CLinearObjectTableBase@DirectComposition$win32kbase.sys", 0x37768, 0x0, true, 0xb28f2335b5086b20)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif