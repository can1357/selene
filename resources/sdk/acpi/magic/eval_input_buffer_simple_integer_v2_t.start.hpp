#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2.Signature", signature, 0x0, 0x20, true, 0xff8488f1435f7f3b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2.MethodName", method_name, 0x20, 0x20, true, 0xb1ee8e3ec98a1965)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2.MethodNameAsUlong", method_name_as_ulong, 0x20, 0x20, true, 0x4c1f9f4eca491ab5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2.IntegerArgument", integer_argument, 0x40, 0x20, true, 0x38373b7cd4e1317d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif