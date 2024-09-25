#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyProtocolViolationHelper@ReceiveProcessor@Calling@CoreMessaging$win32kbase.sys", 0xd55a0, 0x0, true, 0x37704a3fdfc32f31)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging$win32kbase.sys", 0xb2cd8, 0x0, true, 0x11452c3cb772abfe)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging$win32kbase.sys", 0xb58ac, 0x0, true, 0xc960c03763cf914d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif