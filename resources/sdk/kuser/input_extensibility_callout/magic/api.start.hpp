#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CallUserModeWithLock@InputExtensibilityCallout$win32kbase.sys", 0x1aad00, 0x0, true, 0x3b8506aeae4f7cbd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CallUserModeLockFree@InputExtensibilityCallout$win32kbase.sys", 0x1aac40, 0x0, true, 0x6baef9153fd10697)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_CanSendMessageToDestinationInternal@InputExtensibilityCallout$win32kbase.sys", 0x69884, 0x0, true, 0x1f9d4b0d6b7f2400)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CloseCoreMsgPort@InputExtensibilityCallout$win32kbase.sys", 0x79e00, 0x0, true, 0x464697e333b515a5)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CoreMsgCloseAllDestinations@InputExtensibilityCallout$win32kbase.sys", 0xbae70, 0x0, true, 0x220db6aeac7ae621)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CoreMsgOpenDestinationHandle@InputExtensibilityCallout$win32kbase.sys", 0xaac84, 0x0, true, 0x7af6c8be2b15de5f)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CoreMsgSendMessage@InputExtensibilityCallout$win32kbase.sys", 0x697c4, 0x0, true, 0x4d5bd12bbf9d940d)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateCoreMsgPort@InputExtensibilityCallout$win32kbase.sys", 0xaa01c, 0x0, true, 0x1de8c7b2a515723d)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@InputExtensibilityCallout$win32kbase.sys", 0x7a488, 0x0, true, 0x326df589f07d5433)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnInputThreadStateChanged@InputExtensibilityCallout$win32kbase.sys", 0x7cdc8, 0x0, true, 0x8760428fb7795a51)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RegisterCoreMsgProvider@InputExtensibilityCallout$win32kbase.sys", 0x792dc, 0x0, true, 0xc37c6b62b26fde86)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnInitialize@InputExtensibilityCallout$win32kbase.sys", 0x79db4, 0x0, true, 0xd771a22293e3b7cb)
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
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#endif