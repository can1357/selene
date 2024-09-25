#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_V2.Signature", signature, 0x0, 0x20, true, 0xdc5370c922ee22a6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_ACPI_EVAL_INPUT_BUFFER_V2.MethodName", method_name, 0x20, 0x20, true, 0x3e64337be55ddb44)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_V2.MethodNameAsUlong", method_name_as_ulong, 0x20, 0x20, true, 0xa5766d011bbf1e8b)
#else
#define _m00
#define _m01
#define _m02
#endif