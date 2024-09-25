#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1ReferenceCounted@@UEAA@XZ$dxgkrnl.sys", 0x9ba0, 0x0, true, 0x46ee9b0140aed39d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@ReferenceCounted$dxgkrnl.sys", 0x5724, 0x0, true, 0x3eb0956a6bda9d4c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif