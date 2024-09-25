#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2.Signature", signature, 0x0, 0x20, true, 0x8a95b0ea0ebf76c0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2.MethodName", method_name, 0x20, 0x20, true, 0xdf5de02db2b3ed3d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2.MethodNameAsUlong", method_name_as_ulong, 0x20, 0x20, true, 0xb9435e0017bc531c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2.Size", size, 0x40, 0x20, true, 0x1c6596d6649bb10f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2.ArgumentCount", argument_count, 0x60, 0x20, true, 0x82f11f982063e541)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct acpi::method_argument_v2_t, 1>), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2.Argument", argument, 0x80, 0x60, true, 0x95af352d64be0cd3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif