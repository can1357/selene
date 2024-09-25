#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CSharedReadDesktopTargetMarshaler@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x4ab30accd045aca7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeFromSharedResource@CSharedReadDesktopTargetMarshaler@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0xb8dd28150105475)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif