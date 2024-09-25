#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEND_DVD_STRUCTURE.OperationCode", operation_code, 0x0, 0x8, true, 0x1788f019385aaab5)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SEND_DVD_STRUCTURE.Lun", lun, 0xd, 0x3, true, 0xd3832c5c5bdeff71, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEND_DVD_STRUCTURE.Format", format, 0x38, 0x8, true, 0x3e5d7ef102dfed52)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SEND_DVD_STRUCTURE.ParameterListLength", parameter_list_length, 0x40, 0x10, true, 0x122863928efe5f90)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEND_DVD_STRUCTURE.Control", control, 0x58, 0x8, true, 0x99bfc5336c1b6b9e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif