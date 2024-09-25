#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pep::acpi_resource_type_t), "_PEP_ACPI_SPB_RESOURCE.Type", type, 0x0, 0x20, true, 0xa032fceb41a3a492)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pep::acpi_resource_flags_t), "_PEP_ACPI_SPB_RESOURCE.Flags", flags, 0x20, 0x20, true, 0xc94a276b1ef65bde)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEP_ACPI_SPB_RESOURCE.TypeSpecificFlags", type_specific_flags, 0x40, 0x10, true, 0x2be0e3611bff4598)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_ACPI_SPB_RESOURCE.ResourceSourceIndex", resource_source_index, 0x50, 0x8, true, 0x72fecf5ad8a42e37)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_PEP_ACPI_SPB_RESOURCE.ResourceSourceName", resource_source_name, 0x80, 0x40, true, 0x8d36c0e6aa3074fb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_PEP_ACPI_SPB_RESOURCE.VendorData", vendor_data, 0xc0, 0x40, true, 0x41e7122857883c58)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEP_ACPI_SPB_RESOURCE.VendorDataLength", vendor_data_length, 0x100, 0x10, true, 0x6cbd6c0f475a54d3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif