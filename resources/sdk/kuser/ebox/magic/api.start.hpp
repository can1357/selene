#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z$win32kfull.sys", 0x133614, 0x0, true, 0x63b6e75fa9e11040)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0EBOX@@QEAA@AEAVERECTL@@H@Z$win32kfull.sys", 0x46998, 0x0, true, 0x7fb9f770e63966d4)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0EBOX@@QEAA@AEAVEXFORMOBJ@@AEAU_RECTL@@@Z$win32kfull.sys", 0x2b0214, 0x0, true, 0xe6e3ecebb8a76b1d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ptlXform@EBOX$win32kfull.sys", 0x2b0a14, 0x0, true, 0x53e752e1a0b06b93)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif