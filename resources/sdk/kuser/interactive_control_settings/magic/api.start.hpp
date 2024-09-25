#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$m_Value@InteractiveControlSettings$win32kfull.sys", 0x2e0c00, 0x0, true, 0x8afbf10cbb362298)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_OpenDeviceKey@InteractiveControlSettings$win32kfull.sys", 0xbabd4, 0x0, true, 0xe034f99e24815e25)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadSettings@InteractiveControlSettings$win32kfull.sys", 0xbaa88, 0x0, true, 0x1231d515c4347343)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteSettings@InteractiveControlSettings$win32kfull.sys", 0x257204, 0x0, true, 0xa352d0a0fe27181c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif