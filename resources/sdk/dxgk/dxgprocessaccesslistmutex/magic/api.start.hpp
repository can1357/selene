#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z$dxgkrnl.sys", 0x18e24, 0x0, true, 0x25fdd76709ef150a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPROCESSACCESSLISTMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x6980, 0x0, true, 0x1a11ac88a4b0fe27)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif