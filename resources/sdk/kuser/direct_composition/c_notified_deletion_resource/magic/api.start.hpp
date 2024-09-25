#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CNotifiedDeletionResource@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x5a62ca8dff87114e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReturnResourceLifetimeTag@CNotifiedDeletionResource@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x5ef557178abd076b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetResourceLifetimeTag@CNotifiedDeletionResource@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0xea47aae47580d1a2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif