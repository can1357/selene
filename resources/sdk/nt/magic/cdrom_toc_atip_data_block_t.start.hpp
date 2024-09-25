#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CDROM_TOC_ATIP_DATA_BLOCK.CdrwReferenceSpeed", cdrw_reference_speed, 0x0, 0x3, true, 0x9143f16957130616, 3, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CDROM_TOC_ATIP_DATA_BLOCK.WritePower", write_power, 0x4, 0x3, true, 0x32787a0ae82b8f19, 3, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_TOC_ATIP_DATA_BLOCK.True1", true1, 0x7, 0x1, true, 0x40b6d468d7fde848, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_TOC_ATIP_DATA_BLOCK.UnrestrictedUse", unrestricted_use, 0xe, 0x1, true, 0xf8d1dd740aa9979e, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_TOC_ATIP_DATA_BLOCK.A3Valid", a3_valid, 0x10, 0x1, true, 0xc41c16fbac1d50dc, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_TOC_ATIP_DATA_BLOCK.A2Valid", a2_valid, 0x11, 0x1, true, 0x8de66b743af80753, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_TOC_ATIP_DATA_BLOCK.A1Valid", a1_valid, 0x12, 0x1, true, 0xc59e52fe6fb6efa0, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CDROM_TOC_ATIP_DATA_BLOCK.DiscSubType", disc_sub_type, 0x13, 0x3, true, 0x90e34cbc7cb05831, 3, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_TOC_ATIP_DATA_BLOCK.IsCdrw", is_cdrw, 0x16, 0x1, true, 0xdfcf77f3e984146f, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_TOC_ATIP_DATA_BLOCK.True2", true2, 0x17, 0x1, true, 0xd753600fd4df2dd7, 1, uint8_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_CDROM_TOC_ATIP_DATA_BLOCK.LeadInMsf", lead_in_msf, 0x20, 0x18, true, 0x5315f4aa30ad4d55)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_CDROM_TOC_ATIP_DATA_BLOCK.LeadOutMsf", lead_out_msf, 0x40, 0x18, true, 0x8e845a3828cfc657)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_CDROM_TOC_ATIP_DATA_BLOCK.A1Values", a1_values, 0x60, 0x18, true, 0x13b7f599cd669b4c)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_CDROM_TOC_ATIP_DATA_BLOCK.A2Values", a2_values, 0x80, 0x18, true, 0x3fb043add1a62aab)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_CDROM_TOC_ATIP_DATA_BLOCK.A3Values", a3_values, 0xa0, 0x18, true, 0xad35529a9079cd31)
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