#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT.VetoedFromAltitudeIntegral", vetoed_from_altitude_integral, 0x0, 0x40, true, 0xa7f2e906d6c2e31a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT.VetoedFromAltitudeDecimal", vetoed_from_altitude_decimal, 0x40, 0x40, true, 0xe1b48cd1f0f5a6cc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_CSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT.Reason", reason, 0x80, 0x0, true, 0x2cbc09f118eb67d5)
#else
#define _m00
#define _m01
#define _m02
#endif