#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING$dxgkrnl.sys", 0x0, 0x0, false, 0xf9d75f1f7c8faca2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindMappingFromHostId@REMOTEMONITORMAPPING$dxgkrnl.sys", 0x0, 0x0, false, 0x62453d8f2b5db391)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveMappingEntry@REMOTEMONITORMAPPING$dxgkrnl.sys", 0x0, 0x0, false, 0xc7280c6608dc1760)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddMapping@REMOTEMONITORMAPPING$dxgkrnl.sys", 0x2bea28, 0x0, true, 0xa17dc2c10c96f36a)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Clear@REMOTEMONITORMAPPING$dxgkrnl.sys", 0x2beb1c, 0x0, true, 0x78ee83a184d61c0d)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindMappingFromGuestId@REMOTEMONITORMAPPING$dxgkrnl.sys", 0x2bebbc, 0x0, true, 0x30f8c839cab1fc06)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif