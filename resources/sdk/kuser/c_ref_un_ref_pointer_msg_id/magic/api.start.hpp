#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReferenceAndThreadLock@CRefUnRefPointerMsgId$win32kbase.sys", 0xd501c, 0x0, true, 0xb111bf92bc3cf7cf)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ThreadUnlockAndUnReference@CRefUnRefPointerMsgId$win32kbase.sys", 0xd505c, 0x0, true, 0x44d2c8d890cb2cb5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnReferenceOnThreadTermination@CRefUnRefPointerMsgId$win32kbase.sys", 0xd5490, 0x0, true, 0xcdc4f66f86a923ea)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif