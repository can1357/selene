#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$KzHeteroRefreshWorkloadProperties$ntoskrnl.exe", 0x0, 0x0, false, 0xe5cfe150ae938d17)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$KzReleaseAdditionalPrcbLocks$ntoskrnl.exe", 0x0, 0x0, false, 0x15f23b3e716170a1)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$KzSetIrqlUnsafe$ntoskrnl.exe", 0x50cca0, 0x0, true, 0xecd75a474332b7ee)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(uint64_t*)>*), "$KzInitializeSpinLock$ntoskrnl.exe", 0x2c0830, 0x0, true, 0xbb2da64e5e1444d0)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$KzLowerIrql$ntoskrnl.exe", 0x293270, 0x0, true, 0xa9c2ee38525ddd44)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(uint8_t)>*), "$KzRaiseIrql$ntoskrnl.exe", 0x281580, 0x0, true, 0xaa89a3bb003b6bfe)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif