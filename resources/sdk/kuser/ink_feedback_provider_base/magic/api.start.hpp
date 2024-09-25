#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddActiveCommand@InkFeedbackProviderBase$win32kfull.sys", 0x254444, 0x0, true, 0x5f895e22204ce51f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EndActiveCommandsByOwnerThread@InkFeedbackProviderBase$win32kfull.sys", 0x108420, 0x0, true, 0x831918ebe4c8878e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EndActiveCommandsByPointerId@InkFeedbackProviderBase$win32kfull.sys", 0x254660, 0x0, true, 0x54a8f397bb8b4744)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindActiveCommandByTargetPointerId@InkFeedbackProviderBase$win32kfull.sys", 0x254754, 0x0, true, 0x3aeb57e8c1ceb9d9)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveActiveCommand@InkFeedbackProviderBase$win32kfull.sys", 0x254ec4, 0x0, true, 0xd9c6a93b6d73ff69)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveAndReleaseActiveCommand@InkFeedbackProviderBase$win32kfull.sys", 0x254f98, 0x0, true, 0x407452976d1a608e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif