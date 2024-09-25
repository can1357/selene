#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO$dxgkrnl.sys", 0x15458c, 0x0, true, 0x7f2c28bb59713f0a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetClientStatistics@DXGPROCESS_ADAPTER_INFO$dxgkrnl.sys", 0xef9dc, 0x0, true, 0x8612adc50736f9bf)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGPROCESS_ADAPTER_INFO$dxgkrnl.sys", 0x14ab94, 0x0, true, 0x12a58266bc0a2157)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif