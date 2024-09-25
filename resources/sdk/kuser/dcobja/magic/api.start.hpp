#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DCOBJA@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0xe4fdcb65c61e5540)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DCOBJA@@QEAA@PEAUHDC__@@@Z$win32kfull.sys", 0xd29b0, 0x0, true, 0x2ac3c2b178d90963)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif