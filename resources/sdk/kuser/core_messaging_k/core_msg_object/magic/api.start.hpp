#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Open@CoreMsgObject@CoreMessagingK$win32kbase.sys", 0x0, 0x0, false, 0xd1c5912bf05c7095)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CoreMsgObject@CoreMessagingK$win32kbase.sys", 0xaaf70, 0x0, true, 0x39bca253455afc1b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReferenceByHandle@CoreMsgObject@CoreMessagingK$win32kbase.sys", 0x69d1c, 0x0, true, 0x3fadaec8a4c55dab)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif