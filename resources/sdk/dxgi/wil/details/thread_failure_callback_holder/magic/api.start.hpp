#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil$dxgi.dll", 0x45420, 0x0, true, 0x28dbf5f27aa97dfe)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetThreadContext@ThreadFailureCallbackHolder@details@wil$dxgi.dll", 0x459f0, 0x0, true, 0xa066fbf843448cac)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_telemetryId@ThreadFailureCallbackHolder@details@wil$dxgi.dll", 0xcc4e4, 0x0, true, 0xadf95e72a4a29735)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif