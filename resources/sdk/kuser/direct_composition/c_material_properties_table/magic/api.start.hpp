#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Shutdown@CMaterialPropertiesTable@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x8456203b4bcb08f6)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CMaterialPropertiesTable@DirectComposition$win32kbase.sys", 0x7d8d8, 0x0, true, 0xbf52c814727b201d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif