#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseLock@CLockedFactoryChild$dxgi.dll", 0x1e320, 0x0, true, 0xcf0df1626dde7e85)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TakeLock@CLockedFactoryChild$dxgi.dll", 0x1a9a0, 0x0, true, 0x26713ffc26adfd79)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif