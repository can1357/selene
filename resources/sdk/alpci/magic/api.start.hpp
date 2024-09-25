#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AlpciSendDeferredMessageBeforeWait$ntoskrnl.exe", 0x0, 0x0, false, 0x94102d410af6470f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AlpciDestroyDeferredMessageContext$ntoskrnl.exe", 0x62d0e0, 0x0, true, 0x1c60547c6e81df37)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif