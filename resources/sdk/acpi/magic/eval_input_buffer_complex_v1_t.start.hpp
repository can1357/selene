#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1.Signature", signature, 0x0, 0x20, true, 0x3da38bd1fe39aa58)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1.MethodName", method_name, 0x20, 0x20, true, 0x5d051a1f39f70a8c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1.MethodNameAsUlong", method_name_as_ulong, 0x20, 0x20, true, 0xd6dccf6adeb8c0cc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1.Size", size, 0x40, 0x20, true, 0xc6e1127519a4142c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1.ArgumentCount", argument_count, 0x60, 0x20, true, 0x4f0e3bb3a29f9a6e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct acpi::method_argument_v1_t, 1>), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1.Argument", argument, 0x80, 0x40, true, 0x69b54da377acbd25)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif