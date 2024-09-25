#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CSharedWriteScalarMarshaler@DirectComposition$win32kbase.sys", 0x1ff4e0, 0x0, true, 0x712e13cbdacbd919)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EmitCreationCommand@CSharedWriteScalarMarshaler@DirectComposition$win32kbase.sys", 0x5930, 0x0, true, 0x7cdd2669aac6a4a5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OpenSharedHandle@CSharedWriteScalarMarshaler@DirectComposition$win32kbase.sys", 0x1feb90, 0x0, true, 0x6bd7893a06a2abab)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseAllReferences@CSharedWriteScalarMarshaler@DirectComposition$win32kbase.sys", 0x5720, 0x0, true, 0xf876297db76f683)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif