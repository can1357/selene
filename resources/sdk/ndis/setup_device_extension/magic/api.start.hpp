#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0NDIS_SETUP_DEVICE_EXTENSION@@QEAA@XZ$ndis.sys", 0x0, 0x0, false, 0xcd5d681968c22eb5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1NDIS_SETUP_DEVICE_EXTENSION@@QEAA@XZ$ndis.sys", 0x0, 0x0, false, 0x881c794a645a745)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif