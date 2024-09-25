#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0UNDORENDERLOCKCOUNTS@@QEAA@XZ$win32kfull.sys", 0x11d514, 0x0, true, 0xe00d9f732f8ac527)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1UNDORENDERLOCKCOUNTS@@QEAA@XZ$win32kfull.sys", 0x11f614, 0x0, true, 0x4db8bada135f4e61)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif