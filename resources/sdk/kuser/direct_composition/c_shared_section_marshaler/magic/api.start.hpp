#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateDwmHandle@CSharedSectionMarshaler@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0xca12cc916ec0f3cc)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeSection@CSharedSectionMarshaler@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x4183e6421241b4c7)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetRemarshalingFlags@CSharedSectionMarshaler@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0xe3939767413f21af)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateSection@CSharedSectionMarshaler@DirectComposition$win32kbase.sys", 0xb1d30, 0x0, true, 0x24017e5e024ed7de)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EmitUpdateCommands@CSharedSectionMarshaler@DirectComposition$win32kbase.sys", 0x40d20, 0x0, true, 0xb7f6e238802e09a8)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetType@CSharedSectionMarshaler@DirectComposition$win32kbase.sys", 0xc8890, 0x0, true, 0x52405acd2c1e4d31)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsOfType@CSharedSectionMarshaler@DirectComposition$win32kbase.sys", 0xa3880, 0x0, true, 0xb42f4baea5cfe7d0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif