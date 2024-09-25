#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO$dxgkrnl.sys", 0x0, 0x0, false, 0xb757325adaa562fa)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetClientStatistics@DXGPROCESS_RENDER_ADAPTER_INFO$dxgkrnl.sys", 0x0, 0x0, false, 0xa294c2380263eeac)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGPROCESS_RENDER_ADAPTER_INFO$dxgkrnl.sys", 0x0, 0x0, false, 0xb271785f6fae9047)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif