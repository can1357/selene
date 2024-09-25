#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CSharedReadScalarMarshaler@DirectComposition$win32kbase.sys", 0x1ff408, 0x0, true, 0x3f062b51ac57d0ce)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeFromSharedResource@CSharedReadScalarMarshaler@DirectComposition$win32kbase.sys", 0xa79d0, 0x0, true, 0x54ace480a9d7a551)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif