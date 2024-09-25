#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsValid@DXGVAIL$dxgkrnl.sys", 0x1ae30, 0x0, true, 0x53a6616fe16aa333)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Delete@DXGVAIL$dxgkrnl.sys", 0x2afdb0, 0x0, true, 0xf110860ebe1dd3f5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetType@DXGVAIL$dxgkrnl.sys", 0x1ae20, 0x0, true, 0xf78bc6a49d375225)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif