#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0AutoSharedUmfdLookupLock@@QEAA@XZ$win32kfull.sys", 0x157290, 0x0, true, 0xd293c03cb6c1a5ee)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1AutoSharedUmfdLookupLock@@QEAA@XZ$win32kfull.sys", 0x157064, 0x0, true, 0xc706faebea8b89de)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif