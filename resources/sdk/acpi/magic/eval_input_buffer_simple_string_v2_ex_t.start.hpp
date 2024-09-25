#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2_EX.Signature", signature, 0x0, 0x20, true, 0x547dad8240050859)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 256>), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2_EX.MethodName", method_name, 0x20, 0x0, true, 0xb59b80d0af010d04)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2_EX.StringLength", string_length, 0x820, 0x20, true, 0xc78c23777aa4f2a7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2_EX.String", string, 0x840, 0x8, true, 0x67215e084585f6c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif