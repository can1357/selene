#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendLastActionTelemetry@CBasePTPEngine$win32kbase.sys", 0x0, 0x0, false, 0x36c5ab8b6b38253e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendTotalTimeTelemetry@CBasePTPEngine$win32kbase.sys", 0x0, 0x0, false, 0xc13d604250b33a97)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnEvent@CBasePTPEngine$win32kbase.sys", 0x1cd710, 0x0, true, 0x509829778873b564)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnInput@CBasePTPEngine$win32kbase.sys", 0x1cd740, 0x0, true, 0x31ec12d5a0a4f983)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendEtwOutput@CBasePTPEngine$win32kbase.sys", 0x1cf488, 0x0, true, 0xb96597e343f0e51b)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendGestureOutput@CBasePTPEngine$win32kbase.sys", 0x1cf4e4, 0x0, true, 0x8343b28c80cbe57e)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendInertiaOutput@CBasePTPEngine$win32kbase.sys", 0x1cf56c, 0x0, true, 0x1fd8b09c872f220c)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendMouseOutput@CBasePTPEngine$win32kbase.sys", 0x1cf980, 0x0, true, 0xa8ff02417c81d54d)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendShellOutput@CBasePTPEngine$win32kbase.sys", 0x1cfb1c, 0x0, true, 0xb3ec8e0e21c7bc1c)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendSqmOutput@CBasePTPEngine$win32kbase.sys", 0x1cfb68, 0x0, true, 0xbaef7eb6a2f623b3)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendTelemetryOutput@CBasePTPEngine$win32kbase.sys", 0x1cfbac, 0x0, true, 0x8883408461a44639)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendTimerOutput@CBasePTPEngine$win32kbase.sys", 0x1cfc0c, 0x0, true, 0x52b24e757052c563)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendWarpbackTelemetry@CBasePTPEngine$win32kbase.sys", 0x1cfc5c, 0x0, true, 0x244bd1a717c31a66)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetEnvironment@CBasePTPEngine$win32kbase.sys", 0x1cfd70, 0x0, true, 0x83312589f37df2c9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#endif