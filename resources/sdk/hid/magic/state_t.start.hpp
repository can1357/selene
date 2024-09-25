#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STATE.StateAsUlong", state_as_ulong, 0x0, 0x20, true, 0x8dec5312a4b4667e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hid::generic_state_t), "_STATE.GenericState", generic_state, 0x0, 0x20, true, 0xd56c72f0645df3b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hid::hidsm_state_t), "_STATE.HidsmState", hidsm_state, 0x0, 0x8, true, 0xb1f38b8e2e241e4b)
#else
#define _m00
#define _m01
#define _m02
#endif