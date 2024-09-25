#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::pmem_error_section_validbits_t), "_WHEA_PMEM_ERROR_SECTION.ValidBits", valid_bits, 0x0, 0x40, true, 0x5cf78e709f7adf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "_WHEA_PMEM_ERROR_SECTION.LocationInfo", location_info, 0x40, 0x0, true, 0xa9b0d408096aff32)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::error_status_t), "_WHEA_PMEM_ERROR_SECTION.ErrorStatus", error_status, 0x240, 0x40, true, 0xae9aabf5f6e15793)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PMEM_ERROR_SECTION.NFITHandle", nfit_handle, 0x280, 0x20, true, 0x1146c1b01498c8c8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PMEM_ERROR_SECTION.PageRangeCount", page_range_count, 0x2a0, 0x20, true, 0x8f35031bae27a1f1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct whea::pmem_page_range_t, 1>), "_WHEA_PMEM_ERROR_SECTION.PageRange", page_range, 0x2c0, 0xc0, true, 0x20d527e3ab1f2e3c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif