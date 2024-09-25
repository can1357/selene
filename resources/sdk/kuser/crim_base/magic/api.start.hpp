#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CleanupHandles@CRIMBase$win32kbase.sys", 0x56160, 0x0, true, 0x5a09362461acd1e6)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CRIMBase@@IEAA@K@Z$win32kbase.sys", 0x7970c, 0x0, true, 0xa54faf2d9917f051)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateHandles@CRIMBase$win32kbase.sys", 0x7b140, 0x0, true, 0x5445f963afea6bb5)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CRIMBase@@UEAA@XZ$win32kbase.sys", 0x796d4, 0x0, true, 0xa395cc9f5c6bac6e)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDispatcherHandleByName@CRIMBase$win32kbase.sys", 0x7b51c, 0x0, true, 0x2d171a465f370dff)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDispatcherObjectByIndex@CRIMBase$win32kbase.sys", 0xae950, 0x0, true, 0xbde7f1d42c1d92b9)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDispatcherObjectByName@CRIMBase$win32kbase.sys", 0x57a0c, 0x0, true, 0xd157111e78081786)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsDispatcherObjectValid@CRIMBase$win32kbase.sys", 0xae90c, 0x0, true, 0xbed3bbc61d2762dc)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SensorDoWorkAndWait@CRIMBase$win32kbase.sys", 0x57b88, 0x0, true, 0x615b5706c21a2933)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SignalMarshalingCompleted@CRIMBase$win32kbase.sys", 0x64c70, 0x0, true, 0x22e3c9c6b20ab893)
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