#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WRITE_BUFFER.OperationCode", operation_code, 0x0, 0x8, true, 0x3ca906c5c9db8fc9)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_WRITE_BUFFER.Mode", mode, 0x8, 0x5, true, 0xe5e66be798840b59, 5, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WRITE_BUFFER.ModeSpecific", mode_specific, 0xd, 0x3, true, 0x88b2d41c7d2d0dfa, 3, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WRITE_BUFFER.BufferID", buffer_id, 0x10, 0x8, true, 0x73e9be93ad6e7075)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_WRITE_BUFFER.BufferOffset", buffer_offset, 0x18, 0x18, true, 0x7ad5659750d1f34d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_WRITE_BUFFER.ParameterListLength", parameter_list_length, 0x30, 0x18, true, 0x46d62fb07afe99c2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WRITE_BUFFER.Control", control, 0x48, 0x8, true, 0xcc1f8e24b2a2515)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif