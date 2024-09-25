#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor$win32kbase.sys", 0x63674, 0x0, true, 0x817c8f98929906f3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor$win32kbase.sys", 0x60e14, 0x0, true, 0xd714398051ac5583)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor$win32kbase.sys", 0x1c7cf4, 0x0, true, 0x4fafed0d7fae8ef0)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor$win32kbase.sys", 0x5e2fc, 0x0, true, 0x5ead5408df450a42)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TestProcessingOption@MouseInputDataEx@CMouseProcessor$win32kbase.sys", 0x60f64, 0x0, true, 0xb87035af0e3f6184)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif