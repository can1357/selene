#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddWindow@CWindowGroup$win32kfull.sys", 0x240758, 0x0, true, 0xc509193d116798a3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_FreeWindow@CWindowGroup$win32kfull.sys", 0x24163c, 0x0, true, 0x5967bc5845b80d46)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_GetWindowFromRole@CWindowGroup$win32kfull.sys", 0x241688, 0x0, true, 0xbd9a98281b0c08ec)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveAll@CWindowGroup$win32kfull.sys", 0x241214, 0x0, true, 0xd87edc9fa3d230bb)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_RemoveWindowAction@CWindowGroup$win32kfull.sys", 0x2416c8, 0x0, true, 0x30525b11315df116)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_TemplateWindow@CWindowGroup$win32kfull.sys", 0x2417dc, 0x0, true, 0xc441a8934d455adf)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_UpdateWindowInternal@CWindowGroup$win32kfull.sys", 0x24185c, 0x0, true, 0xe7dbd4c095a28296)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_UpdateWindowRole@CWindowGroup$win32kfull.sys", 0x241958, 0x0, true, 0x1f007677625f946e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif