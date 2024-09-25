#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Unlock@CChannel@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0xbe4e257ab9ed23db)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CompleteDisconnection@CChannel@DirectComposition$win32kbase.sys", 0x15eb0, 0x0, true, 0x1428f135c801613)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CompleteReconnection@CChannel@DirectComposition$win32kbase.sys", 0x15eb0, 0x0, true, 0xa52e89ad59ecb374)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyHandle@CChannel@DirectComposition$win32kbase.sys", 0x80b08, 0x0, true, 0xf2c115b753cd59a1)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetType@CChannel@DirectComposition$win32kbase.sys", 0xc84a0, 0x0, true, 0x41cabf7db963f820)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CChannel@DirectComposition$win32kbase.sys", 0xa7b60, 0x0, true, 0x3114797eaf0be831)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnProcessCreation@CChannel@DirectComposition$win32kbase.sys", 0x7df20, 0x0, true, 0x28e671c5ded7d545)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnProcessDestruction@CChannel@DirectComposition$win32kbase.sys", 0x7e0f0, 0x0, true, 0xaf2b5ce5802472e1)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReferenceHandleAndLock@CChannel@DirectComposition$win32kbase.sys", 0xcd60, 0x0, true, 0x5120fec53c0bffbc)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@CChannel@DirectComposition$win32kbase.sys", 0x80bac, 0x0, true, 0x5da66e537ac36389)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnlockAndUnreference@CChannel@DirectComposition$win32kbase.sys", 0x1dc7d0, 0x0, true, 0x74698a1c5c7e4f1e)
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
#endif