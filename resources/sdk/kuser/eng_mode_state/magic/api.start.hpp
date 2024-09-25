#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1EngModeState@@QEAA@XZ$win32kfull.sys", 0x156ca8, 0x0, true, 0x3799ea2f36ebf4a9)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0EngModeState@@QEAA@XZ$win32kfull.sys", 0x156c6c, 0x0, true, 0x1e283f1690cfb52)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif