#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOP_PLAY_SCAN.OperationCode", operation_code, 0x0, 0x8, true, 0x3ac0260ee7bac1cf)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_STOP_PLAY_SCAN.Lun", lun, 0xd, 0x3, true, 0x42923963f9877e71, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOP_PLAY_SCAN.Control", control, 0x48, 0x8, true, 0x2dac46f5a1bdf78c)
#else
#define _m00
#define _m01
#define _m02
#endif