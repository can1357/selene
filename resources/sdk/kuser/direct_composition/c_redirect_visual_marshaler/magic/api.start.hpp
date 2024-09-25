#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EmitUpdateCommands@CRedirectVisualMarshaler@DirectComposition$win32kbase.sys", 0x1f9c50, 0x0, true, 0xa70b8e625531acce)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseAllReferences@CRedirectVisualMarshaler@DirectComposition$win32kbase.sys", 0x1e3ab0, 0x0, true, 0xdef14a4df4e265a5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition$win32kbase.sys", 0x1f9cf0, 0x0, true, 0x9339375646f4cc21)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition$win32kbase.sys", 0x1f9db0, 0x0, true, 0x6ff33ce7b82ac1c9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif