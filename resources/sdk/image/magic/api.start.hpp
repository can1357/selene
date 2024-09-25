#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ImageLoad$ntoskrnl.exe", 0xa680, 0x0, true, 0x3265632133379ee)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ImageLoadGuid$ntoskrnl.exe", 0x9891e0, 0x0, true, 0xcac2ae7189c491c9)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ImageUnload$ntoskrnl.exe", 0x9c80, 0x0, true, 0xabafdcc7b969542b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif