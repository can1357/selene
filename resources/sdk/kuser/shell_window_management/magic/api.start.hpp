#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EligibleWindow@ShellWindowManagement$win32kfull.sys", 0x0, 0x0, false, 0xce3ce2a225591420)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExtendedBehaviorEnabled@ShellWindowManagement$win32kfull.sys", 0x0, 0x0, false, 0x548f2a2b868a068b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetWindowTrackState@ShellWindowManagement$win32kfull.sys", 0x0, 0x0, false, 0x3b642b5c9e29e56f)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BehaviorEnabled@ShellWindowManagement$win32kfull.sys", 0xad5a0, 0x0, true, 0xd6721cf026d21dd9)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetWindow@ShellWindowManagement$win32kfull.sys", 0xc1ed0, 0x0, true, 0xea6ced38ec603930)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TransformWindowTrackInfo@ShellWindowManagement$win32kfull.sys", 0x2f134, 0x0, true, 0xc55dfd4a3ab545e4)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WindowSubjectToBehavior@ShellWindowManagement$win32kfull.sys", 0xad55c, 0x0, true, 0xb86c3d3d089ad32e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif