#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CDDI_PRIMARY_DESC@@QEAA@IAEBUDXGI_MODE_DESC1@@W4DXGI_MODE_ROTATION@@I@Z$dxgi.dll", 0x227fc, 0x0, true, 0xe2a4ea1b25d1095e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$flip_compatible@CDDI_PRIMARY_DESC$dxgi.dll", 0x24c74, 0x0, true, 0x70291788b86a3960)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif