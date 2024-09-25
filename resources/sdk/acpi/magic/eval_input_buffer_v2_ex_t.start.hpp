#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_V2_EX.Signature", signature, 0x0, 0x20, true, 0xd39d491471ffc001)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 256>), "_ACPI_EVAL_INPUT_BUFFER_V2_EX.MethodName", method_name, 0x20, 0x0, true, 0xbf27a449655a9b59)
#else
#define _m00
#define _m01
#endif