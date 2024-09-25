#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Acquire@EntryLock@CoreMessagingK$win32kbase.sys", 0x69db4, 0x0, true, 0x4b2fb1b801c113c1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@EntryLock@CoreMessagingK$win32kbase.sys", 0xab8d4, 0x0, true, 0xb153c2ea29929e78)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_Initialized@EntryLock@CoreMessagingK$win32kbase.sys", 0x257e40, 0x0, true, 0xa6053cb74e701f47)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif