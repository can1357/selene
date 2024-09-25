#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RegInput.dwSize", dw_size, 0x0, 0x20, true, 0xb9e86204e9ddc2ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::reg_input_entry_t, 1>), "_RegInput.rginent", rginent, 0x40, 0x80, true, 0x3a686f46c639bd2f)
#else
#define _m00
#define _m01
#endif