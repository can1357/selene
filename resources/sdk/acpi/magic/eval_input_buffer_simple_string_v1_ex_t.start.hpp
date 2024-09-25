#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1_EX.Signature", signature, 0x0, 0x20, true, 0xd7a1b5946dd46085)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 256>), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1_EX.MethodName", method_name, 0x20, 0x0, true, 0x31395eaca3e3d65c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1_EX.StringLength", string_length, 0x820, 0x20, true, 0x395fc6a41de3cb02)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1_EX.String", string, 0x840, 0x8, true, 0xa49f078619784347)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif