#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClearKnobInStore@NetSetupKnobCollection$ndis.sys", 0x0, 0x0, false, 0x6fabfbb563e97487)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Open@NetSetupKnobCollection$ndis.sys", 0x0, 0x0, false, 0x50059ce82e9b9509)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadKnobFromKey@NetSetupKnobCollection$ndis.sys", 0x0, 0x0, false, 0x529555720a01d4d7)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetKnobInStore@NetSetupKnobCollection$ndis.sys", 0x0, 0x0, false, 0x3d11bffc4228141e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif