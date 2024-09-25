#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindExportAddress@DXGMMS_EXPORT$dxgkrnl.sys", 0x182680, 0x0, true, 0x4d9b35ffdea76b08)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGMMS_EXPORT$dxgkrnl.sys", 0x182520, 0x0, true, 0xf546429e19358e5a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGMMS_EXPORT$dxgkrnl.sys", 0x2716ec, 0x0, true, 0x21be1bc4612551f4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif