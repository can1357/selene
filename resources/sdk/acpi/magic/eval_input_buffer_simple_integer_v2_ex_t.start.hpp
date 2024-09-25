#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2_EX.Signature", signature, 0x0, 0x20, true, 0xc8712ee6e38391c4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 256>), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2_EX.MethodName", method_name, 0x20, 0x0, true, 0xa3fc7f38b1994944)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2_EX.IntegerArgument", integer_argument, 0x840, 0x40, true, 0xa071baa9ac3075ba)
#else
#define _m00
#define _m01
#define _m02
#endif