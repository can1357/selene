#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_ENUM_CHILD.Flags", flags, 0x0, 0x20, true, 0x61b578ad02837b60)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_ENUM_CHILD.NameLength", name_length, 0x20, 0x20, true, 0x807455f547369b14)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_ACPI_ENUM_CHILD.Name", name, 0x40, 0x8, true, 0xf2343a79e78bdecd)
#else
#define _m00
#define _m01
#define _m02
#endif