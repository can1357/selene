#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_VPD_THIRD_PARTY_COPY_PAGE.DeviceType", device_type, 0x0, 0x5, true, 0x6b9a83f81e029298, 5, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VPD_THIRD_PARTY_COPY_PAGE.DeviceTypeQualifier", device_type_qualifier, 0x5, 0x3, true, 0xf4c628d9c1b90733, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_THIRD_PARTY_COPY_PAGE.PageCode", page_code, 0x8, 0x8, true, 0x915a09f7c5b16cc2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_VPD_THIRD_PARTY_COPY_PAGE.PageLength", page_length, 0x10, 0x10, true, 0x8fb9353d065b4884)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_VPD_THIRD_PARTY_COPY_PAGE.ThirdPartyCopyDescriptors", third_party_copy_descriptors, 0x20, 0x8, true, 0xe3465f19a0d61f0a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif