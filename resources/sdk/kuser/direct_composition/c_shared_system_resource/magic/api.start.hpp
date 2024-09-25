#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CSharedSystemResource@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x8b8edd3d1d2945e8)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OpenSharedHandle@CSharedSystemResource@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0xe21dff7145168915)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Delete@CSharedSystemResource@DirectComposition$win32kbase.sys", 0xa8b0, 0x0, true, 0x849aadd7cffb4621)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetType@CSharedSystemResource@DirectComposition$win32kbase.sys", 0x8d1e0, 0x0, true, 0xfec12bd9e4eecfaf)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsValid@CSharedSystemResource@DirectComposition$win32kbase.sys", 0xc86e0, 0x0, true, 0xd72ab160b89e7265)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MarkInvalid@CSharedSystemResource@DirectComposition$win32kbase.sys", 0xc86f0, 0x0, true, 0xa815fd7d6cc60379)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif