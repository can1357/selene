#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1.Signature", signature, 0x0, 0x20, true, 0x579085bce3a5f12b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1.MethodName", method_name, 0x20, 0x20, true, 0x819114766eca4d56)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1.MethodNameAsUlong", method_name_as_ulong, 0x20, 0x20, true, 0x7fc0e9a84f1d0677)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1.StringLength", string_length, 0x40, 0x20, true, 0x8b260720155dc64f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V1.String", string, 0x60, 0x8, true, 0x937467b3c64ad91d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif