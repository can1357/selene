#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CAutoRefCountedBuffer@@QEAA@XZ$dxgkrnl.sys", 0x1ad40, 0x0, true, 0x91f29e33637bec6c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CAutoRefCountedBuffer@@QEAA@XZ$dxgkrnl.sys", 0x3e0e0, 0x0, true, 0x3ac3c206ca9106ee)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif