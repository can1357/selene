#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CDXGIMutexInSeparateThread@@QEAA@XZ$dxgi.dll", 0x1cc04, 0x0, true, 0x9fa30aa473424df7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyMutex@CDXGIMutexInSeparateThread$dxgi.dll", 0x1cc3c, 0x0, true, 0x2cc6c67cf0e52384)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitMutex@CDXGIMutexInSeparateThread$dxgi.dll", 0x4a9dc, 0x0, true, 0xf0e78c74d30eadd5)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ProcessCommand@CDXGIMutexInSeparateThread$dxgi.dll", 0x4ac60, 0x0, true, 0x934d5dced9066106)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif