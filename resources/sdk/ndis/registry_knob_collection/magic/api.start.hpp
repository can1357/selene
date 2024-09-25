#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClearKnobInStore@RegistryKnobCollection$ndis.sys", 0x0, 0x0, false, 0x8d6ea2285ed2a278)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Open@RegistryKnobCollection$ndis.sys", 0x0, 0x0, false, 0x2d42c75176b5c206)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadKnobFromKey@RegistryKnobCollection$ndis.sys", 0x0, 0x0, false, 0x233f34095462b835)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetKnobInStore@RegistryKnobCollection$ndis.sys", 0x0, 0x0, false, 0xd4aa8c16c2ea2d40)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif