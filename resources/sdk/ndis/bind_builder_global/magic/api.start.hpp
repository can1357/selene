#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0NdisBindBuilderGlobal@@QEAA@XZ$ndis.sys", 0x0, 0x0, false, 0xbe8bda12234ba3f3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1NdisBindBuilderGlobal@@QEAA@XZ$ndis.sys", 0x123aec, 0x0, true, 0xa9f12f509b161bee)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif