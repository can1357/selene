#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_TOC.OperationCode", operation_code, 0x0, 0x8, true, 0x1962e7cfbcc783d3)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_TOC.Msf", msf, 0x9, 0x1, true, 0x34a9cfc9425ba87d, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_TOC.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0xc678dd9097e8cca, 3, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_READ_TOC.Format2", format2, 0x10, 0x4, true, 0xbbb75f3090d3bd7a, 4, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_TOC.StartingTrack", starting_track, 0x30, 0x8, true, 0x449310089dd6d29a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_READ_TOC.AllocationLength", allocation_length, 0x38, 0x10, true, 0xeb2bddb777ae4ca9)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_READ_TOC.Control", control, 0x48, 0x6, true, 0xad6d439e6b97ec60, 6, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_READ_TOC.Format", format, 0x4e, 0x2, true, 0x5e12f882cafd916, 2, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif