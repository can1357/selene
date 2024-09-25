#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z$win32kfull.sys", 0x12fdc4, 0x0, true, 0x72983447c78c6d2d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$efNextStyleLength@STYLER$win32kfull.sys", 0x2ce85c, 0x0, true, 0x1cf5db273922446b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$efWorldLength@STYLER$win32kfull.sys", 0x2ce898, 0x0, true, 0x6beac47461a0c575)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif