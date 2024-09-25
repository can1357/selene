#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT.Size", size, 0x0, 0x20, true, 0xb48cd915fd17498e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT.Action", action, 0x20, 0x20, true, 0x23c166304f632b37)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT.Flags", flags, 0x40, 0x20, true, 0x7bf8ad48980c9969)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT.OperationStatus", operation_status, 0x60, 0x20, true, 0xa371610e5472433e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT.ExtendedError", extended_error, 0x80, 0x20, true, 0xd54b1da9a002d323)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT.TargetDetailedError", target_detailed_error, 0xa0, 0x20, true, 0xe612dc9655abc709)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT.ReservedStatus", reserved_status, 0xc0, 0x20, true, 0x6f019d6781290389)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT.OutputBlockOffset", output_block_offset, 0xe0, 0x20, true, 0x9b8278b1b194a79)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT.OutputBlockLength", output_block_length, 0x100, 0x20, true, 0x31c61e9220f3f001)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif