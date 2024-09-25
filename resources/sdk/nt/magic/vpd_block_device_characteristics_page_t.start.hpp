#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.DeviceType", device_type, 0x0, 0x5, true, 0x6755f41fafa40a71, 5, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.DeviceTypeQualifier", device_type_qualifier, 0x5, 0x3, true, 0x28b4c65c54c317b3, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.PageCode", page_code, 0x8, 0x8, true, 0x8044aa362d2eebd0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.PageLength", page_length, 0x18, 0x8, true, 0x1a61dde9b75e2f4d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.MediumRotationRateMsb", medium_rotation_rate_msb, 0x20, 0x8, true, 0x27aa568216f0308a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.MediumRotationRateLsb", medium_rotation_rate_lsb, 0x28, 0x8, true, 0xff91da1d0977c357)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.MediumProductType", medium_product_type, 0x30, 0x8, true, 0xed16d2f6e6ef3286)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.NominalFormFactor", nominal_form_factor, 0x38, 0x4, true, 0x1639768832abd449, 4, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.WACEREQ", wacereq, 0x3c, 0x2, true, 0x731ac3833f84467c, 2, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.WABEREQ", wabereq, 0x3e, 0x2, true, 0x274e0c8fe7ed21f, 2, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.VBULS", vbuls, 0x40, 0x1, true, 0x364c4176d31ad6e0, 1, uint8_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.FUAB", fuab, 0x41, 0x1, true, 0x6dd1d9f6dd61c0d9, 1, uint8_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.BOCS", bocs, 0x42, 0x1, true, 0x7302eb6b9fba7e34, 1, uint8_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.ZONED", zoned, 0x44, 0x2, true, 0xe0947a27462d85f8, 2, uint8_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE.DepopulationTime", depopulation_time, 0x60, 0x20, true, 0x1c041542abe683e1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif