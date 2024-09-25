#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FlushQueue@DXGWORKQUEUE$dxgkrnl.sys", 0x44508, 0x0, true, 0xf2282d61e1e94ba4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueueWork@DXGWORKQUEUE$dxgkrnl.sys", 0x488f4, 0x0, true, 0xfabf1b636bb27784)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif