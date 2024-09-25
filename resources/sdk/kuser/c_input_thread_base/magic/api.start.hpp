#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ActivateInputProcessing@CInputThreadBase$win32kbase.sys", 0x0, 0x0, false, 0xb00e1068b7ab44dc)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_CalledOnInputThread@CInputThreadBase$win32kbase.sys", 0x0, 0x0, false, 0x72f24416f48cf456)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeactivateInputProcessing@CInputThreadBase$win32kbase.sys", 0x0, 0x0, false, 0x5045071021666c27)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeclareThreadAsInput@CInputThreadBase$win32kbase.sys", 0x0, 0x0, false, 0x9b212ccb1497ba0a)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsInputThread@CInputThreadBase$win32kbase.sys", 0x0, 0x0, false, 0xc0a3a616c760dca6)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RevokeThreadAsInput@CInputThreadBase$win32kbase.sys", 0x0, 0x0, false, 0x72dc97ec4d2ae04d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif