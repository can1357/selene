#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_METHOD_ARGUMENT_V1.Type", type, 0x0, 0x10, true, 0xb023a98fa7ff3574)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_METHOD_ARGUMENT_V1.DataLength", data_length, 0x10, 0x10, true, 0x9decb4dff140d9e0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_METHOD_ARGUMENT_V1.Argument", argument, 0x20, 0x20, true, 0xbd87c787097651b5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_ACPI_METHOD_ARGUMENT_V1.Data", data, 0x20, 0x8, true, 0x3ebf6bc2f2ad7897)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif