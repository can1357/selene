#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_LOG_PAGE.PageCode", page_code, 0x0, 0x6, true, 0xd78406a3d8f37f29, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOG_PAGE.SPF", spf, 0x6, 0x1, true, 0x3695df9c193b541f, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOG_PAGE.DS", ds, 0x7, 0x1, true, 0xa9ce352d26efc344, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOG_PAGE.SubPageCode", sub_page_code, 0x8, 0x8, true, 0x53f8170117fc4174)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_LOG_PAGE.PageLength", page_length, 0x10, 0x10, true, 0x7f2e892d6d5fac47)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::log_parameter_t>), "_LOG_PAGE.Parameters", parameters, 0x20, 0x0, true, 0x2af03ab870ee21c4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif