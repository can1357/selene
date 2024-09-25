#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_DEFINITION.Action", action, 0x0, 0x20, true, 0x58865776f0fd75fb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_DSM_DEFINITION.SingleRange", single_range, 0x20, 0x8, true, 0x97fe510004d43bde)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_DEFINITION.ParameterBlockAlignment", parameter_block_alignment, 0x40, 0x20, true, 0xef83b2cc176bf98a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_DEFINITION.ParameterBlockLength", parameter_block_length, 0x60, 0x20, true, 0x687784526c8d9ae)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_DSM_DEFINITION.HasOutput", has_output, 0x80, 0x8, true, 0xc9efa670b2bce43a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_DEFINITION.OutputBlockAlignment", output_block_alignment, 0xa0, 0x20, true, 0xd6a7078602746b9b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_DEFINITION.OutputBlockLength", output_block_length, 0xc0, 0x20, true, 0xec5fba5c3cd84fb5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif