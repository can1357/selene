#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_OUTPUT_BUFFER_V1.Signature", signature, 0x0, 0x20, true, 0x826ad441a59a49f9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_OUTPUT_BUFFER_V1.Length", length, 0x20, 0x20, true, 0x2c292afbd5ef99ad)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_OUTPUT_BUFFER_V1.Count", count, 0x40, 0x20, true, 0x38fa323b059fa107)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct acpi::method_argument_v1_t, 1>), "_ACPI_EVAL_OUTPUT_BUFFER_V1.Argument", argument, 0x60, 0x40, true, 0xa2a25a8b8635de20)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif