#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1.Signature", signature, 0x0, 0x20, true, 0x1723cd2765461470)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1.MethodName", method_name, 0x20, 0x20, true, 0x3f4b33e49ec3920)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1.MethodNameAsUlong", method_name_as_ulong, 0x20, 0x20, true, 0xb79ba3a7c074d2c1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1.IntegerArgument", integer_argument, 0x40, 0x20, true, 0xb3c463c4ee1a24b9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif