#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_LOG_PAGE_LOGICAL_BLOCK_PROVISIONING.PageCode", page_code, 0x0, 0x6, true, 0x7ec154c92929368f, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOG_PAGE_LOGICAL_BLOCK_PROVISIONING.SPF", spf, 0x6, 0x1, true, 0x667de0314b1fe93e, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOG_PAGE_LOGICAL_BLOCK_PROVISIONING.DS", ds, 0x7, 0x1, true, 0xb47afef1a223f57e, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOG_PAGE_LOGICAL_BLOCK_PROVISIONING.SubPageCode", sub_page_code, 0x8, 0x8, true, 0xece959df7c81db93)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_LOG_PAGE_LOGICAL_BLOCK_PROVISIONING.PageLength", page_length, 0x10, 0x10, true, 0xe79d48d65e113c2e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::log_parameter_header_t>), "_LOG_PAGE_LOGICAL_BLOCK_PROVISIONING.Parameters", parameters, 0x20, 0x0, true, 0x5e3560bcf9960a12)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif