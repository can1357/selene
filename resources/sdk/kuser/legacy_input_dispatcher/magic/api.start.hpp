#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1LegacyInputDispatcher@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x20d8960e6b8335ce)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@LegacyInputDispatcher$win32kbase.sys", 0xbeae0, 0x0, true, 0x7d75a55805ccba1f)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Dispatch@LegacyInputDispatcher$win32kbase.sys", 0x5868c, 0x0, true, 0x612915f3147481d0)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HasInputDispatcherObjects@LegacyInputDispatcher$win32kbase.sys", 0x5870c, 0x0, true, 0x84aa554382dd8f26)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@LegacyInputDispatcher$win32kbase.sys", 0xba040, 0x0, true, 0x30fe3536e8272822)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher$win32kfull.sys", 0x154da0, 0x0, true, 0xd3d8c6f6daa1ca07)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PurgeInputDispatcherObjects@LegacyInputDispatcher$win32kbase.sys", 0xbfce0, 0x0, true, 0xecd3c75ba4a56ef5)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RegisterInputDispatcherObjects@LegacyInputDispatcher$win32kfull.sys", 0x154dc0, 0x0, true, 0xf79fca13385b938c)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WaitAndDispatch@LegacyInputDispatcher$win32kbase.sys", 0x58330, 0x0, true, 0x5cff12751f771f10)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher$win32kbase.sys", 0x1ac400, 0x0, true, 0xfcc540e706377635)
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