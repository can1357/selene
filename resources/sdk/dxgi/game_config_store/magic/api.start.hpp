#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0GameConfigStore@@QEAA@XZ$dxgi.dll", 0x17880, 0x0, true, 0xae8860836fc834ad)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1GameConfigStore@@QEAA@XZ$dxgi.dll", 0x1f0a0, 0x0, true, 0x48e3a754a790db4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif