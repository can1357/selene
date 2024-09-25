#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogEvent@DXGPUSHLOCK$dxgkrnl.sys", 0x0, 0x0, false, 0xf6a967fbc66a38a3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireExclusive@DXGPUSHLOCK$dxgkrnl.sys", 0x4118, 0x0, true, 0xec5c9954450b3c37)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireShared@DXGPUSHLOCK$dxgkrnl.sys", 0x837c, 0x0, true, 0x1edd954f9683d3eb)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif