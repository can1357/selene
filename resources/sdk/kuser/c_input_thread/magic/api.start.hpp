#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ActivateInputProcessing@CInputThread$win32kbase.sys", 0xa948c, 0x0, true, 0x132fe9db4804b10c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_CalledOnInputThread@CInputThread$win32kbase.sys", 0xa9728, 0x0, true, 0xa83cacd917eab3fc)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeactivateInputProcessing@CInputThread$win32kbase.sys", 0xa953c, 0x0, true, 0x91016e59e8bd7b2)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeclareThreadAsInput@CInputThread$win32kbase.sys", 0xa9380, 0x0, true, 0xee6db1e0274385e0)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CInputThread$win32kbase.sys", 0x7a31c, 0x0, true, 0x501973c7364adc4d)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsInputThread@CInputThread$win32kbase.sys", 0x159c0, 0x0, true, 0x3639b9f85ddccfd3)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsInputThreadDesktopActive@CInputThread$win32kbase.sys", 0xa95d8, 0x0, true, 0x525e30e06be69b5b)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RevokeThreadAsInput@CInputThread$win32kbase.sys", 0xa941c, 0x0, true, 0xacd33e5b73088d97)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif