#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGCRITICALREGION@@QEAA@XZ$dxgkrnl.sys", 0x344c8, 0x0, true, 0xc5abd20be935f858)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Enter@DXGCRITICALREGION$dxgkrnl.sys", 0x219d8, 0x0, true, 0xc647d7af1380ddeb)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Leave@DXGCRITICALREGION$dxgkrnl.sys", 0x21a80, 0x0, true, 0x51751eaf3b7fd9b0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif