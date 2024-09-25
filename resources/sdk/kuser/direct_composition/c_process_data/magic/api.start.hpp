#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CProcessData@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x6e0505ef4a9095f1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Current@CProcessData@DirectComposition$win32kbase.sys", 0x8113c, 0x0, true, 0x934eb19597b620f0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnProcessCreation@CProcessData@DirectComposition$win32kbase.sys", 0x7de98, 0x0, true, 0xc71471f641d1632c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif