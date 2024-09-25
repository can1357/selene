#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsProcessPriorityByClassBackground@PriorityBoost$win32kfull.sys", 0x223e84, 0x0, true, 0xe18e17abaec6645a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateProcessPriorityForSpinning@PriorityBoost$win32kfull.sys", 0x328bc, 0x0, true, 0x8250fe76d1ed36a9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif