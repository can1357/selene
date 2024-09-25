#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SUBCHANNEL.OperationCode", operation_code, 0x0, 0x8, true, 0x835f64ab8959d3bd)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SUBCHANNEL.Msf", msf, 0x9, 0x1, true, 0xed2757ffdc268b54, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SUBCHANNEL.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0xea88a456679c0888, 3, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SUBCHANNEL.SubQ", sub_q, 0x16, 0x1, true, 0x540783b4e046bc9e, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SUBCHANNEL.Format", format, 0x18, 0x8, true, 0x47207a3280a44bbe)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SUBCHANNEL.TrackNumber", track_number, 0x30, 0x8, true, 0xb5b9ddbf2af488df)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SUBCHANNEL.AllocationLength", allocation_length, 0x38, 0x10, true, 0x75df15d05c5175fb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SUBCHANNEL.Control", control, 0x48, 0x8, true, 0xd864487c5cca88da)
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