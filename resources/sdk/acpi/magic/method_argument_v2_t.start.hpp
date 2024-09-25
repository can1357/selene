#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_METHOD_ARGUMENT_V2.Type", type, 0x0, 0x10, true, 0xba0b4697e49c6d9d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_METHOD_ARGUMENT_V2.DataLength", data_length, 0x20, 0x20, true, 0x8d729d2ad565adea)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_METHOD_ARGUMENT_V2.Argument", argument, 0x40, 0x20, true, 0x2a66c8f81d7195b0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_ACPI_METHOD_ARGUMENT_V2.Data", data, 0x40, 0x8, true, 0xbf509d198815aa48)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif