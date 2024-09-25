#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_VPD_IDENTIFICATION_PAGE.DeviceType", device_type, 0x0, 0x5, true, 0xe29a3c4f69efb28d, 5, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VPD_IDENTIFICATION_PAGE.DeviceTypeQualifier", device_type_qualifier, 0x5, 0x3, true, 0x6ca4108d2c85c152, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_IDENTIFICATION_PAGE.PageCode", page_code, 0x8, 0x8, true, 0xe21fe010c43edb28)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_IDENTIFICATION_PAGE.PageLength", page_length, 0x18, 0x8, true, 0xd29723b5b43bb741)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_VPD_IDENTIFICATION_PAGE.Descriptors", descriptors, 0x20, 0x0, true, 0xd1e76821e82098a3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif