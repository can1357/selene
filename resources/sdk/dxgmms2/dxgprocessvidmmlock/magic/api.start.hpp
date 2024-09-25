#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireExclusive@DXGPROCESSVIDMMLOCK$dxgmms2.sys", 0x0, 0x0, false, 0x100e30e4eaa7e0ef)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGPROCESSVIDMMLOCK$dxgmms2.sys", 0x0, 0x0, false, 0xfb252ad5d5d41298)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif