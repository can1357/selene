#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PopProfilerEntry@DXGETWPROFILER_BASE$dxgkrnl.sys", 0x6fbc, 0x0, true, 0xffd986e2f1e0664a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PushProfilerEntry@DXGETWPROFILER_BASE$dxgkrnl.sys", 0x6f68, 0x0, true, 0x3b80d227e6245192)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif