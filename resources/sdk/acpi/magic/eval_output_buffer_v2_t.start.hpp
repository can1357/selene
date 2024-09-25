#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_OUTPUT_BUFFER_V2.Signature", signature, 0x0, 0x20, true, 0xde9cb751bcc5c7a6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_OUTPUT_BUFFER_V2.Length", length, 0x20, 0x20, true, 0x484a25aeacd3f98f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_EVAL_OUTPUT_BUFFER_V2.Count", count, 0x40, 0x20, true, 0x964264169242013c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct acpi::method_argument_v2_t, 1>), "_ACPI_EVAL_OUTPUT_BUFFER_V2.Argument", argument, 0x60, 0x60, true, 0x2815ae86fb1c3382)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif