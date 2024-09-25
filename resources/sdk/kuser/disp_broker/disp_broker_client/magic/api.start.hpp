#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LoadRegistrySettings@DispBrokerClient@DispBroker$win32kbase.sys", 0x8a5c0, 0x0, true, 0xe90c96402f56e83d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_pSessionBroker@DispBrokerClient@DispBroker$win32kbase.sys", 0x255d00, 0x0, true, 0x99be52aaba953706)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif