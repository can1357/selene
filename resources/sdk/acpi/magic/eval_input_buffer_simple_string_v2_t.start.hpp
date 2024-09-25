#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2.Signature", signature, 0x0, 0x20, true, 0x619c97bfdcdeab0e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2.MethodName", method_name, 0x20, 0x20, true, 0x59c8140a8cc23c1a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2.MethodNameAsUlong", method_name_as_ulong, 0x20, 0x20, true, 0x2ff67cf432cc91f6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2.StringLength", string_length, 0x40, 0x20, true, 0x7f4ddba7423b4c22)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2.String", string, 0x60, 0x8, true, 0xbafb711cf2679c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif