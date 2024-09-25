#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddRef@SendHost@CoreMessagingK$win32kbase.sys", 0x8d1e0, 0x0, true, 0xaf81fbb5f6ffff9f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocateBuffer@SendHost@CoreMessagingK$win32kbase.sys", 0xaf920, 0x0, true, 0xb0c5bdbd625001b6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CancelBuffer@SendHost@CoreMessagingK$win32kbase.sys", 0x205980, 0x0, true, 0x8e67c6ba06730a37)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyInvalid@SendHost@CoreMessagingK$win32kbase.sys", 0x2059a0, 0x0, true, 0x61aedda65e46b67e)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueryInterface@SendHost@CoreMessagingK$win32kbase.sys", 0xc8b60, 0x0, true, 0x59b522f1240f0bef)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@SendHost@CoreMessagingK$win32kbase.sys", 0x8d1e0, 0x0, true, 0xf8d2226db3e8cc4a)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_Vtbl@SendHost@CoreMessagingK$win32kbase.sys", 0x211480, 0x0, true, 0x58989a5d67ded739)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SubmitBuffer@SendHost@CoreMessagingK$win32kbase.sys", 0xaf7d0, 0x0, true, 0x50aae0d503375638)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ValidateReceiveBuffer@SendHost@CoreMessagingK$win32kbase.sys", 0xaf744, 0x0, true, 0xedb45dbf07df91c9)
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
#endif