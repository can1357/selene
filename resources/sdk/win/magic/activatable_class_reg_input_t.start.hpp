#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivatableClassRegInput.dwSize", dw_size, 0x0, 0x20, true, 0x95044eebee6f4fbd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::activatable_class_reg_input_entry_t, 1>), "ActivatableClassRegInput.rginent", rginent, 0x40, 0x80, true, 0x210fcf788ba8f257)
#else
#define _m00
#define _m01
#endif