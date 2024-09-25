#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SEMOBJ@@QEAA@XZ$win32kfull.sys", 0x26e024, 0x0, true, 0xc8db7dc634b5e186)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlock@SEMOBJ$win32kfull.sys", 0x3775c, 0x0, true, 0xd9a510193070d291)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif