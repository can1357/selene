#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ndispConvOffsetToPointer$ndis.sys", 0x0, 0x0, false, 0xb8bfe0d9062775d7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ndispConvVar$ndis.sys", 0x0, 0x0, false, 0x4c6720c7fda1a6fd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NdispRegisterShim$ndis.sys", 0x109518, 0x0, true, 0xdc494774e78c24b2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif