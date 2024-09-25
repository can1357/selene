#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS.FRUId", fru_id, 0x0, 0x1, true, 0xdb60d3ed91c97f15, 1, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS.FRUText", fru_text, 0x1, 0x1, true, 0x44645e4b172cfe78, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS.AsUCHAR", as_uchar, 0x0, 0x8, true, 0x4d1bcd2a55e55e2)
#else
#define _m00
#define _m01
#define _m02
#endif