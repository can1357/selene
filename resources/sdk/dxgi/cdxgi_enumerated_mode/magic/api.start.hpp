#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CDXGIEnumeratedMode@@QEAA@AEBU_D3DKMT_DISPLAYMODE@@W4DXGI_FORMAT@@@Z$dxgi.dll", 0x4248, 0x0, true, 0x75bedc708d9cbb92)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CDXGIEnumeratedMode@@QEAA@XZ$dxgi.dll", 0x1fa70, 0x0, true, 0x77abde09c3274f83)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif