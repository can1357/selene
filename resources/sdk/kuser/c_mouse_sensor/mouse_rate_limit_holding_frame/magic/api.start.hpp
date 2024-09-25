#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CanCombineMouseReportBatches@MouseRateLimitHoldingFrame@CMouseSensor$win32kbase.sys", 0x1b9994, 0x0, true, 0xdc8a6b92478dded5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CopyMouseInputToHoldingBuffer@MouseRateLimitHoldingFrame@CMouseSensor$win32kbase.sys", 0x1b99f0, 0x0, true, 0x199585e6ab2d4c88)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HandleMouseReportRateLimitingTimer@MouseRateLimitHoldingFrame@CMouseSensor$win32kbase.sys", 0x1b9c08, 0x0, true, 0x848f9e1569164c79)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeHoldingFrame@MouseRateLimitHoldingFrame@CMouseSensor$win32kbase.sys", 0x1b9c70, 0x0, true, 0x8c41ae73d8abde47)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif