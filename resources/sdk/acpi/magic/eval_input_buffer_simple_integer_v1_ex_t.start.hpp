#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1_EX.Signature", signature, 0x0, 0x20, true, 0x5c756c5b75425b0c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 256>), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1_EX.MethodName", method_name, 0x20, 0x0, true, 0x35ba5e9500ab9ae8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V1_EX.IntegerArgument", integer_argument, 0x840, 0x40, true, 0xc258e993e162cb46)
#else
#define _m00
#define _m01
#define _m02
#endif