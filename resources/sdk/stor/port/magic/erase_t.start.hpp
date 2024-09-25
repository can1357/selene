#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ERASE.OperationCode", operation_code, 0x0, 0x8, true, 0xcbe5c4b5527849c4)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ERASE.Long", _long, 0x8, 0x1, true, 0x5696e1b740f222c4, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ERASE.Immediate", immediate, 0x9, 0x1, true, 0xc39b38cbf696e76b, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_ERASE.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x837a255f67ea976f, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ERASE.Control", control, 0x28, 0x8, true, 0xa762ab7348c7ab77)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif