#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PAUSE_RESUME.OperationCode", operation_code, 0x0, 0x8, true, 0xa591299250320a5b)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PAUSE_RESUME.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0xdbe83a8210f42e5, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PAUSE_RESUME.Action", action, 0x40, 0x8, true, 0xcfaa63110977c7e1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PAUSE_RESUME.Control", control, 0x48, 0x8, true, 0xb873ca7a2c0b2804)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif