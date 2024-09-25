#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_KEY_HEADER.DataLength", data_length, 0x0, 0x10, true, 0xaae31165e74a8342)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_CDVD_KEY_HEADER.Data", data, 0x20, 0x0, true, 0xb15387b59226d177)
#else
#define _m00
#define _m01
#endif