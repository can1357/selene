#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLock@DXGSTABLEVISRGNANDSPRITE$dxgkrnl.sys", 0x0, 0x0, false, 0x2e6a8e62a565defa)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlock@DXGSTABLEVISRGNANDSPRITE$dxgkrnl.sys", 0x250e8, 0x0, true, 0xbfdb1783e825d292)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif