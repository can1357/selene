#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SET_CD_SPEED.OperationCode", operation_code, 0x0, 0x8, true, 0xd1e916de291aea13)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_SET_CD_SPEED.RotationControl", rotation_control, 0x8, 0x2, true, 0x6ff111eded4c3d1d, 2, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SET_CD_SPEED.ReadSpeed", read_speed, 0x10, 0x10, true, 0xe2edd883931078d8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SET_CD_SPEED.WriteSpeed", write_speed, 0x20, 0x10, true, 0x46261141af0eff61)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SET_CD_SPEED.Control", control, 0x58, 0x8, true, 0x925ce385696e07bd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif