#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InternalDiscard@CAdapterCollection$dxgkrnl.sys", 0xcf90, 0x0, true, 0xb61a07d9edca80ad)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PopulateFromInfo@CAdapterCollection$dxgkrnl.sys", 0xccc8, 0x0, true, 0xc69a22d2dc9d0a6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateCollection@CAdapterCollection$dxgkrnl.sys", 0xd6ac, 0x0, true, 0x607a43864bb36ac2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif