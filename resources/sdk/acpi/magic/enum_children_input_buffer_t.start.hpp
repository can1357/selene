#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_ENUM_CHILDREN_INPUT_BUFFER.Signature", signature, 0x0, 0x20, true, 0xc40f249fe7a0e797)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_ENUM_CHILDREN_INPUT_BUFFER.Flags", flags, 0x20, 0x20, true, 0x961e1d8ac15d376e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_ENUM_CHILDREN_INPUT_BUFFER.NameLength", name_length, 0x40, 0x20, true, 0x6313efffeee151c2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_ACPI_ENUM_CHILDREN_INPUT_BUFFER.Name", name, 0x60, 0x8, true, 0x979c1fe8bf18a62)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif