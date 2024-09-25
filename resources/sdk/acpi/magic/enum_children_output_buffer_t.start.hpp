#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_ENUM_CHILDREN_OUTPUT_BUFFER.Signature", signature, 0x0, 0x20, true, 0xec14897bd55dbfe9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_ENUM_CHILDREN_OUTPUT_BUFFER.NumberOfChildren", number_of_children, 0x20, 0x20, true, 0xbe77bd3c75423568)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct acpi::enum_child_t, 1>), "_ACPI_ENUM_CHILDREN_OUTPUT_BUFFER.Children", children, 0x40, 0x60, true, 0x2962534912432c18)
#else
#define _m00
#define _m01
#define _m02
#endif