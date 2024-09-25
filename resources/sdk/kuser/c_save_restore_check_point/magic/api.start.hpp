#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CSaveRestoreCheckPoint@@QEAA@PEAUtagWND@@@Z$win32kfull.sys", 0x0, 0x0, false, 0xc88ff915c17eda9e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CSaveRestoreCheckPoint@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x6294bad43a098621)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif