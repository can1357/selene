#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z$dxgkrnl.sys", 0x46158, 0x0, true, 0x69eea0306b82e1d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z$dxgkrnl.sys", 0x44a08, 0x0, true, 0x8e55040465927dda)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPROTECTEDSESSIONMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x6964, 0x0, true, 0x866aa4c7f9a08f57)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif