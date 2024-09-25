#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_VPD_SUPPORTED_PAGES_PAGE.DeviceType", device_type, 0x0, 0x5, true, 0xcb7f2def872e7b45, 5, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VPD_SUPPORTED_PAGES_PAGE.DeviceTypeQualifier", device_type_qualifier, 0x5, 0x3, true, 0xe6e5a582b2ebf372, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_SUPPORTED_PAGES_PAGE.PageCode", page_code, 0x8, 0x8, true, 0xe10e1c6aa0aab8e3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_SUPPORTED_PAGES_PAGE.PageLength", page_length, 0x18, 0x8, true, 0x65e2e0ef4a0c65ae)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_VPD_SUPPORTED_PAGES_PAGE.SupportedPageList", supported_page_list, 0x20, 0x0, true, 0x773e9db06997c9be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif