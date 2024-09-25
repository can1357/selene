#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$fwdExternalLeading@IFIOBJ$win32kfull.sys", 0x0, 0x0, false, 0x72c48d99b4a7d004)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bSimItalic@IFIOBJ$win32kfull.sys", 0x14614c, 0x0, true, 0x3990cea75c7ad34)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$lfOrientation@IFIOBJ$win32kfull.sys", 0x672ac, 0x0, true, 0x1ed4c5b929622ff7)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$lfOutPrecision@IFIOBJ$win32kfull.sys", 0x10e780, 0x0, true, 0x588f450b55f39adc)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$pptlBaseline@IFIOBJ$win32kfull.sys", 0x6de78, 0x0, true, 0x3247cb3f19765c0a)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$pvSimBold@IFIOBJ$win32kfull.sys", 0x102760, 0x0, true, 0x1bd7d7727a5a8f2f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif