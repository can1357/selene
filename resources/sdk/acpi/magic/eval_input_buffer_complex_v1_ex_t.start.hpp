#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1_EX.Signature", signature, 0x0, 0x20, true, 0x3e2365870cecb972)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 256>), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1_EX.MethodName", method_name, 0x20, 0x0, true, 0x3c74bea7c01bc3e4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1_EX.Size", size, 0x820, 0x20, true, 0x4bd9da874165e1ec)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1_EX.ArgumentCount", argument_count, 0x840, 0x20, true, 0xc65e8eb999f9e66e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct acpi::method_argument_v1_t, 1>), "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1_EX.Argument", argument, 0x860, 0x40, true, 0xe2fdf2c9e6a7e927)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif