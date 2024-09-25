#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@DXGSYNCOBJECTCA$dxgkrnl.sys", 0x28ad08, 0x0, true, 0xef2870ab73198741)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindAdapterObject@DXGSYNCOBJECTCA$dxgkrnl.sys", 0x466a8, 0x0, true, 0xa1011314577cb39)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDxgAdapterSyncObject@DXGSYNCOBJECTCA$dxgkrnl.sys", 0x28b440, 0x0, true, 0xf07fdeb7e81d86c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGSYNCOBJECTCA$dxgkrnl.sys", 0x28b710, 0x0, true, 0xd2e51984fe4f4f14)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif