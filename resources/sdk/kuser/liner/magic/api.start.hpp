#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vNextEvent@LINER$win32kfull.sys", 0x130e94, 0x0, true, 0x9316e23514c15d4a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vNextPoint@LINER$win32kfull.sys", 0x130f74, 0x0, true, 0x555ca6b79354b544)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif