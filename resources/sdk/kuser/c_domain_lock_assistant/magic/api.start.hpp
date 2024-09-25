#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$acquire@CDomainLockAssistant$win32kbase.sys", 0x0, 0x0, false, 0x5c772fc953cc9404)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$prepare@CDomainLockAssistant$win32kbase.sys", 0x0, 0x0, false, 0xcfc85def15b66265)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$release@CDomainLockAssistant$win32kbase.sys", 0x0, 0x0, false, 0x680ae08fe44a5481)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif