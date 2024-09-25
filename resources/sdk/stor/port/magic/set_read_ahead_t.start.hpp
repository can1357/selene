#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SET_READ_AHEAD.OperationCode", operation_code, 0x0, 0x8, true, 0xf9f95e2a2056025c)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SET_READ_AHEAD.Lun", lun, 0xd, 0x3, true, 0x5352e22ed00d563c, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SET_READ_AHEAD.TriggerLBA", trigger_lba, 0x10, 0x20, true, 0x4c88d79bd99614ac)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SET_READ_AHEAD.ReadAheadLBA", read_ahead_lba, 0x30, 0x20, true, 0x1bcb6081d797bfe5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SET_READ_AHEAD.Control", control, 0x58, 0x8, true, 0x61c2cefce7a0e24b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif