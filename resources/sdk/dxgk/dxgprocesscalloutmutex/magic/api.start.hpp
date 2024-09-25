#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPROCESSCALLOUTMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x6964, 0x0, true, 0xecc554c00cb048e4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x1a6c, 0x0, true, 0x4ccffe5620ec7520)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif