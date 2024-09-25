#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@CPushLockCriticalSection$dxgkrnl.sys", 0xda0c, 0x0, true, 0x4a335f1be565c0b4)
#else
#define _m0(...) __VA_ARGS__
#endif