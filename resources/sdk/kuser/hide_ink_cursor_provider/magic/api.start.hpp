#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DoHideInkCursorStart@HideInkCursorProvider$win32kfull.sys", 0x25450c, 0x0, true, 0x8b43405f10f60f10)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DoHideInkCursorStop@HideInkCursorProvider$win32kfull.sys", 0x2545b8, 0x0, true, 0x84e7b7e594f80b7f)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider$win32kfull.sys", 0x254900, 0x0, true, 0x75d687a56aac0257)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ProcessInkFeedbackCommand@HideInkCursorProvider$win32kfull.sys", 0x254ac0, 0x0, true, 0x3bbb2849c093ead2)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TerminateActiveCommand@HideInkCursorProvider$win32kfull.sys", 0x2550a0, 0x0, true, 0xf52dff9c53f5b0b9)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ValidatePointer@HideInkCursorProvider$win32kfull.sys", 0x2550bc, 0x0, true, 0x1f2b978543ae22b4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif