#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_START_STOP.OperationCode", operation_code, 0x0, 0x8, true, 0xaa75edd78cf9424)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_START_STOP.Immediate", immediate, 0x8, 0x1, true, 0xa4e82af1ac12edb, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_START_STOP.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x67972b5980c9c2b2, 3, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_START_STOP.Start", start, 0x20, 0x1, true, 0xbfcceba56d82b955, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_START_STOP.LoadEject", load_eject, 0x21, 0x1, true, 0x4e41efd1872b7be9, 1, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_START_STOP.Control", control, 0x28, 0x8, true, 0xccb4081f85158a0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif