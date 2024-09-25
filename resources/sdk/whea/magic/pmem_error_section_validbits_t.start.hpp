#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PMEM_ERROR_SECTION_VALIDBITS.ErrorStatus", error_status, 0x0, 0x1, true, 0x419f884333a5bd71, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PMEM_ERROR_SECTION_VALIDBITS.NFITHandle", nfit_handle, 0x1, 0x1, true, 0x65a24844ab98df58, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PMEM_ERROR_SECTION_VALIDBITS.LocationInfo", location_info, 0x2, 0x1, true, 0xbeac50610355c5bb, 1, uint64_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PMEM_ERROR_SECTION_VALIDBITS.ValidBits", valid_bits, 0x0, 0x40, true, 0x6c1bd6a31a372e90)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif