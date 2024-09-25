#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_VPD_SERIAL_NUMBER_PAGE.DeviceType", device_type, 0x0, 0x5, true, 0xe65a06e1a1765a11, 5, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VPD_SERIAL_NUMBER_PAGE.DeviceTypeQualifier", device_type_qualifier, 0x5, 0x3, true, 0x5db8a170303005dd, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_SERIAL_NUMBER_PAGE.PageCode", page_code, 0x8, 0x8, true, 0x829374f21821e65b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_SERIAL_NUMBER_PAGE.PageLength", page_length, 0x18, 0x8, true, 0x87684bb231cec34b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_VPD_SERIAL_NUMBER_PAGE.SerialNumber", serial_number, 0x20, 0x0, true, 0xcd66809d9d6c04ed)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif