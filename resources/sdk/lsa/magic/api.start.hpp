#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LsaCallAuthenticationPackage$ntoskrnl.exe", 0x917c90, 0x0, true, 0xad4098e7bd1bb6df)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LsaDeregisterLogonProcess$ntoskrnl.exe", 0x917d40, 0x0, true, 0xc4193227736ff1f0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LsaFreeReturnBuffer$ntoskrnl.exe", 0x6ed500, 0x0, true, 0x7886494db677ca9)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LsaLogonUser$ntoskrnl.exe", 0x917da0, 0x0, true, 0x282e77b325110938)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LsaLookupAuthenticationPackage$ntoskrnl.exe", 0x7bde00, 0x0, true, 0x5be1c46be3f9a1d4)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LsaRegisterLogonProcess$ntoskrnl.exe", 0x7bdd80, 0x0, true, 0xcc6edd0dcd7e98ae)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif