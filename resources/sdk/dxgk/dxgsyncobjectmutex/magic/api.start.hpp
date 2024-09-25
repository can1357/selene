#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGSYNCOBJECTMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xd9dba906d31f049c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z$dxgkrnl.sys", 0x24564, 0x0, true, 0x171d72f3492465e2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGSYNCOBJECTMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x6964, 0x0, true, 0xa87e5fbf3077e8b8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif