#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0AtomicExecutionCheck@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x39ad7c715d09243d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Disarm@AtomicExecutionCheck$win32kfull.sys", 0x0, 0x0, false, 0x8e6841f18bc15e0d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCount@AtomicExecutionCheck$win32kfull.sys", 0x0, 0x0, false, 0xfdf651c7396df89b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif