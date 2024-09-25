#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CSharedReadInteractionMarshaler@DirectComposition$win32kbase.sys", 0x9f500, 0x0, true, 0xc16915ed5c6128fa)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeFromSharedResource@CSharedReadInteractionMarshaler@DirectComposition$win32kbase.sys", 0xa79d0, 0x0, true, 0x4020a62631371e36)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif