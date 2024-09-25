#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Cleanup@CWindowGroupManager$win32kfull.sys", 0x240a54, 0x0, true, 0xc2e94a811ad6a7da)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateGroup@CWindowGroupManager$win32kfull.sys", 0x240b78, 0x0, true, 0x4a129214a3ad89d9)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetGroupActiveWindow@CWindowGroupManager$win32kfull.sys", 0x240f10, 0x0, true, 0xa4b7e9fde8e1ecac)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CWindowGroupManager$win32kfull.sys", 0x241090, 0x0, true, 0x8deb192a29ddd772)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsPolicySet@CWindowGroupManager$win32kfull.sys", 0x241144, 0x0, true, 0xb5d64c66d8bde352)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyTemplateApplied@CWindowGroupManager$win32kfull.sys", 0x241190, 0x0, true, 0x1bf57c868b2042a5)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Uninitialize@CWindowGroupManager$win32kfull.sys", 0x2415e8, 0x0, true, 0xa4ef9115b56633d6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif