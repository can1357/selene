#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@NonReferenceCounted$dxgkrnl.sys", 0x18e4c, 0x0, true, 0xb6b8843cb4adb824)
#else
#define _m0(...) __VA_ARGS__
#endif