#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0SOutputDesc@@QEAA@PEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@_N1@Z$dxgi.dll", 0x11040, 0x0, true, 0x802e5b10e662229a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0SOutputDesc@@QEAA@IAEBU_DISPLAY_DEVICEW@@_N@Z$dxgi.dll", 0x77378, 0x0, true, 0x58c3282b4e2febf9)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0SOutputDesc@@QEAA@IPEBG_N1@Z$dxgi.dll", 0x77418, 0x0, true, 0x7dfbdd60ba2ed3c4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif