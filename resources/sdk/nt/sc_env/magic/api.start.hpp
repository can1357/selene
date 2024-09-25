#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Allocate@SC_ENV$ntoskrnl.exe", 0x8893d0, 0x0, true, 0xb9bccb5efeb08e7a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateGuid@SC_ENV$ntoskrnl.exe", 0x8894f0, 0x0, true, 0x1cbfcd39d8004f3c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Free@SC_ENV$ntoskrnl.exe", 0x6e26b0, 0x0, true, 0xfdb09f9de0f131a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif