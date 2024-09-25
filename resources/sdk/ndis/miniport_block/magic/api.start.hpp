#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ$ndis.sys", 0x6c960, 0x0, true, 0x1d097afc6f6da849)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ$ndis.sys", 0x31874, 0x0, true, 0xcf33948b0e2926a3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif