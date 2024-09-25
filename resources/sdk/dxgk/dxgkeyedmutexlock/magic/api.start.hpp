#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z$dxgkrnl.sys", 0x25230, 0x0, true, 0x5f63a27a48f37a66)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGKEYEDMUTEXLOCK@@QEAA@XZ$dxgkrnl.sys", 0x6964, 0x0, true, 0xebaf02371dedf491)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif