#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddNotificationToken@SfmTokenArray$win32kbase.sys", 0xa4550, 0x0, true, 0xbbe06e11fe4ab98a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddNotificationTokens@SfmTokenArray$win32kbase.sys", 0xa44d0, 0x0, true, 0xea5b6b6f34fa2952)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeInitialize@SfmTokenArray$win32kbase.sys", 0xae510, 0x0, true, 0x303903d9e591bdbc)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnsureTokenBufferSize@SfmTokenArray$win32kbase.sys", 0xa45d4, 0x0, true, 0xb9494208b385339c)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNotificationTokens@SfmTokenArray$win32kbase.sys", 0x3efd0, 0x0, true, 0x35fc23284b91947b)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@SfmTokenArray$win32kbase.sys", 0x716d0, 0x0, true, 0xd60b1cdc08e1a04f)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TransferTokens@SfmTokenArray$win32kbase.sys", 0xa44a0, 0x0, true, 0x7110bd71c317035b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif