#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCATE.OperationCode", operation_code, 0x0, 0x8, true, 0x43d881d8b78f3dba)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOCATE.Immediate", immediate, 0x8, 0x1, true, 0x38a33ca83fa5a821, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOCATE.CPBit", cp_bit, 0x9, 0x1, true, 0xb8218b0e6bc78df3, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOCATE.BTBit", bt_bit, 0xa, 0x1, true, 0x57c1c97bcce6728c, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_LOCATE.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x436de1a872fd4a6b, 3, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_LOCATE.LogicalBlockAddress", logical_block_address, 0x18, 0x20, true, 0x86f03063539bf53b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCATE.Partition", partition, 0x40, 0x8, true, 0xbb10c0a5b32ae4c1)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCATE.Control", control, 0x48, 0x8, true, 0xbac3deff40038880)
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