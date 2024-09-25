#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PpvUtilCallAddDevice$ntoskrnl.exe", 0x36ae8c, 0x0, true, 0xeff1944351cb8104)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PpvUtilFailDriver$ntoskrnl.exe", 0x509e70, 0x0, true, 0xacf5c51a4a104360)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PpvUtilIsHardwareBeingVerified$ntoskrnl.exe", 0x9c2b4c, 0x0, true, 0xdd000b32c03486a0)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PpvUtilIsPdo$ntoskrnl.exe", 0x9c2b84, 0x0, true, 0xb1d91fbf30252c8d)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PpvUtilTestStartedPdoStack$ntoskrnl.exe", 0x36b8e0, 0x0, true, 0xa097a35c7ef0cac6)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PpvUtilVerifierEnabled$ntoskrnl.exe", 0xcf4b88, 0x0, true, 0xb3e68bc57694ad94)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif