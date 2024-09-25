#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GET_FILTER_FILE_IDENTIFIER_INPUT.AltitudeLength", altitude_length, 0x0, 0x10, true, 0x999f76016f7e029a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_GET_FILTER_FILE_IDENTIFIER_INPUT.Altitude", altitude, 0x10, 0x10, true, 0xdf652552942b3c4c)
#else
#define _m00
#define _m01
#endif