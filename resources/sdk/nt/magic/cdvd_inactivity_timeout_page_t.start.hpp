#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_CDVD_INACTIVITY_TIMEOUT_PAGE.PageCode", page_code, 0x0, 0x6, true, 0x3f3f45c2583ad712, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_INACTIVITY_TIMEOUT_PAGE.PSBit", ps_bit, 0x7, 0x1, true, 0xf4dd5fc4e3903d4, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDVD_INACTIVITY_TIMEOUT_PAGE.PageLength", page_length, 0x8, 0x8, true, 0x811bf163bf4864a2)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_INACTIVITY_TIMEOUT_PAGE.SWPP", swpp, 0x20, 0x1, true, 0x5410a37487ad0bed, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_INACTIVITY_TIMEOUT_PAGE.DISP", disp, 0x21, 0x1, true, 0xf5f8902ea44be788, 1, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_INACTIVITY_TIMEOUT_PAGE.GroupOneMinimumTimeout", group_one_minimum_timeout, 0x30, 0x10, true, 0x67cca3d135ed8d84)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_INACTIVITY_TIMEOUT_PAGE.GroupTwoMinimumTimeout", group_two_minimum_timeout, 0x40, 0x10, true, 0xdb0eba3efe147349)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif