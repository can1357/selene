#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pep::acpi_resource_type_t), "_PEP_ACPI_EXTENDED_ADDRESS.Type", type, 0x0, 0x20, true, 0xc51f0c91c1880333)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pep::acpi_resource_flags_t), "_PEP_ACPI_EXTENDED_ADDRESS.Flags", flags, 0x20, 0x20, true, 0xd1f1c451a9ae00ef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_ACPI_EXTENDED_ADDRESS.ResourceFlags", resource_flags, 0x40, 0x8, true, 0x6fdc2dc515e4a969)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_ACPI_EXTENDED_ADDRESS.GeneralFlags", general_flags, 0x48, 0x8, true, 0x775d5a1878274015)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_ACPI_EXTENDED_ADDRESS.TypeSpecificFlags", type_specific_flags, 0x50, 0x8, true, 0x5bd07739ec246018)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_ACPI_EXTENDED_ADDRESS.RevisionId", revision_id, 0x58, 0x8, true, 0x28a8a634b636d53)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEP_ACPI_EXTENDED_ADDRESS.Granularity", granularity, 0x80, 0x40, true, 0xb10028644f12677a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEP_ACPI_EXTENDED_ADDRESS.MinimumAddress", minimum_address, 0xc0, 0x40, true, 0x2c9e8e053de271e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEP_ACPI_EXTENDED_ADDRESS.MaximumAddress", maximum_address, 0x100, 0x40, true, 0xa2be835d39462f78)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEP_ACPI_EXTENDED_ADDRESS.TranslationAddress", translation_address, 0x140, 0x40, true, 0x7d94424376ae7a40)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEP_ACPI_EXTENDED_ADDRESS.AddressLength", address_length, 0x180, 0x40, true, 0x4a09f6826f2ecb89)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEP_ACPI_EXTENDED_ADDRESS.TypeAttribute", type_attribute, 0x1c0, 0x40, true, 0xbc07cbc4e4cf88b7)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_PEP_ACPI_EXTENDED_ADDRESS.DescriptorName", descriptor_name, 0x200, 0x40, true, 0x39bfd9ff9c73a139)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif