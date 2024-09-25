#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_ConfigAlphaLoad.dwFunction", dw_function, 0x0, 0x20, true, 0x9cc34b69b7e16a34)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_DXVA_ConfigAlphaLoad.dwReservedBits", dw_reserved_bits, 0x20, 0x60, true, 0xbbcd126ad5e586dd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigAlphaLoad.bConfigDataType", b_config_data_type, 0x80, 0x8, true, 0x7d45772350f4777a)
#else
#define _m00
#define _m01
#define _m02
#endif