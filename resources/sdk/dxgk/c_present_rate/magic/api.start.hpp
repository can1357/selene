#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyFrame@CPresentRate$dxgkrnl.sys", 0x0, 0x0, false, 0x5ec58c422bc69acf)
#else
#define _m0(...) __VA_ARGS__
#endif