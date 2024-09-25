#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CFlipTokenOperation@@MEAA@XZ$dxgkrnl.sys", 0x6941c, 0x0, true, 0x55c0187746fe4aca)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Discard@CFlipTokenOperation$dxgkrnl.sys", 0x69450, 0x0, true, 0xf90578d2f714001d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Pending@CFlipTokenOperation$dxgkrnl.sys", 0x1adc0, 0x0, true, 0x70c81c056428ea98)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif