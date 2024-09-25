#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT$dxgkrnl.sys", 0x0, 0x0, false, 0x23bba03b706f9741)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT$dxgkrnl.sys", 0x0, 0x0, false, 0x21a5c85e9631365b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif