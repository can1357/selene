#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetType@CSharedSectionBaseMarshaler@DirectComposition$win32kbase.sys", 0xc8a40, 0x0, true, 0xd0faa12aaf0e951b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsOfType@CSharedSectionBaseMarshaler@DirectComposition$win32kbase.sys", 0x1fe4f0, 0x0, true, 0x6b788197728daa93)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetRemarshalingFlags@CSharedSectionBaseMarshaler@DirectComposition$win32kbase.sys", 0x1f00f0, 0x0, true, 0x85cdbb29243f28d2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif