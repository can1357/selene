#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MEDIA_REMOVAL.OperationCode", operation_code, 0x0, 0x8, true, 0x84835c8f383d03fb)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MEDIA_REMOVAL.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x75de5d51c674fc60, 3, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEDIA_REMOVAL.Prevent", prevent, 0x20, 0x1, true, 0xe5ca8c6053451f10, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEDIA_REMOVAL.Persistant", persistant, 0x21, 0x1, true, 0xf76162d081f9243d, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MEDIA_REMOVAL.Control", control, 0x28, 0x8, true, 0x49a5bfe4dc678a74)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif