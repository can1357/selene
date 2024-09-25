#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Control@NT_DISK$ntoskrnl.exe", 0x889400, 0x0, true, 0x3f7473734f498f95)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPnpProperty@NT_DISK$ntoskrnl.exe", 0x711930, 0x0, true, 0x483340c541774414)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@NT_DISK$ntoskrnl.exe", 0x889508, 0x0, true, 0x4a6732d349533f86)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Read@NT_DISK$ntoskrnl.exe", 0x889540, 0x0, true, 0x9fa2dabf32153149)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Write@NT_DISK$ntoskrnl.exe", 0x8895e0, 0x0, true, 0x631b88b05eaa0c1b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif