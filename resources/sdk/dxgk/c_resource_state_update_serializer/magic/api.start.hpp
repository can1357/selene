#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Allocate@CResourceStateUpdateSerializer$dxgkrnl.sys", 0x6c18c, 0x0, true, 0x216b23934d51cedf)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetSerializedUpdate@CResourceStateUpdateSerializer$dxgkrnl.sys", 0x69c9c, 0x0, true, 0x1da90825a8a83c46)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IncreaseAddedBufferSize@CResourceStateUpdateSerializer$dxgkrnl.sys", 0x69d2c, 0x0, true, 0xd8f231aec9d52594)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IncreaseAddedContentSize@CResourceStateUpdateSerializer$dxgkrnl.sys", 0x69d60, 0x0, true, 0x86f8f4fa02f54c44)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IncreaseUpdatedContentSize@CResourceStateUpdateSerializer$dxgkrnl.sys", 0x69d94, 0x0, true, 0xefc195c42deaf45a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif