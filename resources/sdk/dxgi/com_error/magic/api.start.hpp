#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0_com_error@@QEAA@AEBV0@@Z$dxgi.dll", 0x5eb58, 0x0, true, 0x7c09dc0c951c5137)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1_com_error@@UEAA@XZ$dxgi.dll", 0x4b24c, 0x0, true, 0xef5351bae381dc58)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Error@_com_error$dxgi.dll", 0x49224, 0x0, true, 0x2ae515d820283b1c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif