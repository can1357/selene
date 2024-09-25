#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1XFERDCOBJ@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x3df53fa61aac8052)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z$win32kfull.sys", 0x27bad4, 0x0, true, 0xe33abdd68f3759a4)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bPrepareDCForXfer@XFERDCOBJ$win32kfull.sys", 0x1071cc, 0x0, true, 0x5e78cf20f3231498)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ThreadCleanup@XFERDCOBJ$win32kfull.sys", 0x156a50, 0x0, true, 0xe835013eac7ba237)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif