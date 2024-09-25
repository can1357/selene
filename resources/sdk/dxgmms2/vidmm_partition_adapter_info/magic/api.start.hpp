#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VIDMM_PARTITION_ADAPTER_INFO@@QEAA@XZ$dxgmms2.sys", 0x15b20, 0x0, true, 0xc14d0eb57b79b484)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1VIDMM_PARTITION_ADAPTER_INFO@@QEAA@XZ$dxgmms2.sys", 0x26c50, 0x0, true, 0x6ed6ad3aa0065b0a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif