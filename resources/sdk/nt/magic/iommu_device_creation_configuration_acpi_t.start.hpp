#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI.InputMappingBase", input_mapping_base, 0x0, 0x0, false, 0xe6d564bbbf81cc19)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI.MappingsCount", mappings_count, 0x0, 0x0, false, 0xa6ff590db2222d03)
#else
#define _m00
#define _m01
#endif