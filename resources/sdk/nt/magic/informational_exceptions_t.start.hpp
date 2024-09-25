#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_INFORMATIONAL_EXCEPTIONS.ASC", asc, 0x0, 0x8, true, 0x878c86ecf87e1d81)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_INFORMATIONAL_EXCEPTIONS.ASCQ", ascq, 0x8, 0x8, true, 0x424f4a9b0e20eb45)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_INFORMATIONAL_EXCEPTIONS.MostRecentTemperature", most_recent_temperature, 0x10, 0x8, true, 0x91de7a1864dbbc11)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_INFORMATIONAL_EXCEPTIONS.VendorSpecific", vendor_specific, 0x18, 0x8, true, 0x75612ce9d8a0682c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif