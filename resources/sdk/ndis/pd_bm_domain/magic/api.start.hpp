#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1NDIS_PD_BM_DOMAIN@@QEAA@XZ$ndis.sys", 0x0, 0x0, false, 0x5d1a17e3e9f7827)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Deref@NDIS_PD_BM_DOMAIN$ndis.sys", 0x1194e4, 0x0, true, 0x709c6eac7deeeec6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif