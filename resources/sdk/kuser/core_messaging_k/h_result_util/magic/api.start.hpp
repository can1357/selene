#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NtStatusFromHRESULT@HResultUtil@CoreMessagingK$win32kbase.sys", 0x205a00, 0x0, true, 0xd28e6500e4237004)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HRESULTFromNTStatus@HResultUtil@CoreMessagingK$win32kbase.sys", 0xaf9e0, 0x0, true, 0x5cb8e8ec437ab84a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif