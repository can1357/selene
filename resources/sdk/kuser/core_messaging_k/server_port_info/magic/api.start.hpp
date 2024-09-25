#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetSize@ServerPortInfo@CoreMessagingK$win32kbase.sys", 0xc8c10, 0x0, true, 0x7b518e5ce4eb8ec2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetType@ServerPortInfo@CoreMessagingK$win32kbase.sys", 0xc84a0, 0x0, true, 0xeb3714e850fd554e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnDelete@ServerPortInfo@CoreMessagingK$win32kbase.sys", 0xaa450, 0x0, true, 0x68dbc6f7ae8fb6b8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_Vtbl@ServerPortInfo@CoreMessagingK$win32kbase.sys", 0x20b190, 0x0, true, 0xbac8db0a31425b5)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif