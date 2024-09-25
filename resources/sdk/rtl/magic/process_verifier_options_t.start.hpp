#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_VERIFIER_OPTIONS.SizeStruct", size_struct, 0x0, 0x20, true, 0xcbd70667917b2c36)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_VERIFIER_OPTIONS.Option", option, 0x20, 0x20, true, 0x760393f885927cef)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_RTL_PROCESS_VERIFIER_OPTIONS.OptionData", option_data, 0x40, 0x8, true, 0xd5aa712c2d715032)
#else
#define _m00
#define _m01
#define _m02
#endif