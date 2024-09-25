#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PIXBeginCapture$dxgi.dll", 0x1fd40, 0x0, true, 0x8c44d4de753051b6)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PIXEndCapture$dxgi.dll", 0x1fd40, 0x0, true, 0x5e3ef98c78e5940)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PIXGetCaptureState$dxgi.dll", 0x1fd40, 0x0, true, 0x79af7d3924fc890c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif