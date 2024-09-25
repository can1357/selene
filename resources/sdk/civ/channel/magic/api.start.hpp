#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ContainerConnected@CIVChannel$win32kbase.sys", 0x0, 0x0, false, 0x8341464b108ed9b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CIVChannel$win32kbase.sys", 0x0, 0x0, false, 0xa3f5699e6597a74e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnChildNotification@CIVChannel$win32kbase.sys", 0x0, 0x0, false, 0xecc5911b18b8b74d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PacketCallback@CIVChannel$win32kbase.sys", 0x0, 0x0, false, 0x474271bd8708dd92)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Receive@CIVChannel$win32kbase.sys", 0x0, 0x0, false, 0x7db3c8d57d321f44)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Reconnect@CIVChannel$win32kbase.sys", 0x0, 0x0, false, 0xceed337d05286b2b)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$sHeaderCallback@CIVChannel$win32kbase.sys", 0x0, 0x0, false, 0xc6d6c4e261f28276)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$sOnChildNotification@CIVChannel$win32kbase.sys", 0x0, 0x0, false, 0xeaf5d10c65954e3e)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$sPacketCallback@CIVChannel$win32kbase.sys", 0x0, 0x0, false, 0xcdea035565f5bfe)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Uninitialize@CIVChannel$win32kbase.sys", 0x0, 0x0, false, 0x7cf9cc8bd10c4759)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#endif