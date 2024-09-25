#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_ZONE_DESCRIPTIOR.ZoneType", zone_type, 0x0, 0x4, true, 0xe28cf644ec28d3e4, 4, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ZONE_DESCRIPTIOR.Reset", reset, 0x8, 0x1, true, 0x7e326836b83c5069, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ZONE_DESCRIPTIOR.Non_Seq", non_seq, 0x9, 0x1, true, 0xe82967b5ad6ba3af, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_ZONE_DESCRIPTIOR.ZoneCondition", zone_condition, 0xc, 0x4, true, 0x38c84adadd2b80ca, 4, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_ZONE_DESCRIPTIOR.ZoneLength", zone_length, 0x40, 0x40, true, 0x34474867a439646d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_ZONE_DESCRIPTIOR.ZoneStartLBA", zone_start_lba, 0x80, 0x40, true, 0x909fc7f50c8e116e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_ZONE_DESCRIPTIOR.WritePointerLBA", write_pointer_lba, 0xc0, 0x40, true, 0xf6dd3ccf891abe8d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif