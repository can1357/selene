#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pep::acpi_resource_type_t), "_PEP_ACPI_IO_MEMORY_RESOURCE.Type", type, 0x0, 0x20, true, 0xf073ecb0ee98eb3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_ACPI_IO_MEMORY_RESOURCE.Information", information, 0x20, 0x8, true, 0x5cedfe9828e186ea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PEP_ACPI_IO_MEMORY_RESOURCE.MinimumAddress", minimum_address, 0x40, 0x40, true, 0x943aa371e3630a01)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PEP_ACPI_IO_MEMORY_RESOURCE.MaximumAddress", maximum_address, 0x80, 0x40, true, 0x4120797df6cea3cc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEP_ACPI_IO_MEMORY_RESOURCE.Alignment", alignment, 0xc0, 0x20, true, 0xe99e71ab36c331db)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEP_ACPI_IO_MEMORY_RESOURCE.Length", length, 0xe0, 0x20, true, 0x42269538dc55506d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif