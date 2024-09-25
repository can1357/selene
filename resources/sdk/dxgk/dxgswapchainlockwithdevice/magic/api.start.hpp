#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Acquire@DXGSWAPCHAINLOCKWITHDEVICE$dxgkrnl.sys", 0x2a486c, 0x0, true, 0x555fbec87523d092)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z$dxgkrnl.sys", 0x2a47c8, 0x0, true, 0x4751f3dd2d23f024)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ$dxgkrnl.sys", 0x2a4838, 0x0, true, 0xa59e17363502f398)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGSWAPCHAINLOCKWITHDEVICE$dxgkrnl.sys", 0x2a6b8c, 0x0, true, 0x38b89d4cd3b8f9d7)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif