#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2_EX.Signature", signature, 0x0, 0x20, true, 0xd32e70220a64ae29)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 256>), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2_EX.MethodName", method_name, 0x20, 0x0, true, 0xab46c04b1ae16a9e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2_EX.Size", size, 0x820, 0x20, true, 0x9bf544c15e6db4ee)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2_EX.ArgumentCount", argument_count, 0x840, 0x20, true, 0xeeb46656f9c4dd23)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct acpi::method_argument_v2_t, 1>), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2_EX.Argument", argument, 0x860, 0x60, true, 0x32ff4657af293717)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif