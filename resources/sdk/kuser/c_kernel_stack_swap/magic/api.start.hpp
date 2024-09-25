#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DisableStackSwap@CKernelStackSwap$win32kfull.sys", 0x156358, 0x0, true, 0xbce3fe41ec149533)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TryEnableStackSwap@CKernelStackSwap$win32kfull.sys", 0x1563c4, 0x0, true, 0xf4a90ac2b2d13278)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif