#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IOMMU_DEVICE_CREATION_CONFIGURATION.NextConfiguration", next_configuration, 0x0, 0x0, false, 0xb17900322bbecdf7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::iommu_device_creation_configuration_type_t), "_IOMMU_DEVICE_CREATION_CONFIGURATION.ConfigType", config_type, 0x0, 0x0, false, 0x8cb099c3d9a1ddd4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_device_creation_configuration_acpi_t), "_IOMMU_DEVICE_CREATION_CONFIGURATION.Acpi", acpi, 0x0, 0x0, false, 0xff8067ee6f29edd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IOMMU_DEVICE_CREATION_CONFIGURATION.DeviceId", device_id, 0x0, 0x0, false, 0x2a50456dd7532303)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif