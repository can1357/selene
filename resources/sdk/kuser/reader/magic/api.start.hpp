#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bNextFigure@READER$win32kfull.sys", 0x131dc0, 0x0, true, 0x262892b4d3ff7366)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bNextPoint@READER$win32kfull.sys", 0x1312dc, 0x0, true, 0x1855431f47bcae95)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif