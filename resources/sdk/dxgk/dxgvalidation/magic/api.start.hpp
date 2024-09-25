#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CleanupForSession@DXGVALIDATION$dxgkrnl.sys", 0x18ef0, 0x0, true, 0x370ab3b96752d407)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateValidationProcessInCallerSession@DXGVALIDATION$dxgkrnl.sys", 0x4a6ac, 0x0, true, 0x9e7481188e06f0e0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeBootSettings@DXGVALIDATION$dxgkrnl.sys", 0x22434, 0x0, true, 0x7fe9bb9511f8f30c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeForSession@DXGVALIDATION$dxgkrnl.sys", 0x1aa38, 0x0, true, 0x5d2d46462c6a46f7)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION$dxgkrnl.sys", 0x3d70, 0x0, true, 0x7331d57f652ced1b)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetupValidationForProcess@DXGVALIDATION$dxgkrnl.sys", 0x18c78, 0x0, true, 0x6a7986e10c2cc4ac)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif