#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ext::iommu_device_type_t), "_EXT_IOMMU_DEVICE_ID.DeviceType", device_type, 0x0, 0x20, true, 0xe49e88b7db2fcf7d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_device_id_pci_t), "_EXT_IOMMU_DEVICE_ID.Pci", pci, 0x40, 0x80, true, 0x42e6092cfe904dc2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_device_id_acpi_t), "_EXT_IOMMU_DEVICE_ID.Acpi", acpi, 0x40, 0x40, true, 0x699e81ceaacce057)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXT_IOMMU_DEVICE_ID.IoApicId", io_apic_id, 0x40, 0x8, true, 0x58ed1de5d24c4304)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXT_IOMMU_DEVICE_ID.LogicalId", logical_id, 0x40, 0x40, true, 0x2ee7b44db95ad0c1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_device_id_test_t), "_EXT_IOMMU_DEVICE_ID.Test", test, 0x40, 0x40, true, 0x1bfd8a1f5c01f97)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_device_id_gic_t), "_EXT_IOMMU_DEVICE_ID.Gic", gic, 0x40, 0x20, true, 0xa3fb2ecda26cda5c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ext::iommu_device_id_flags_t), "_EXT_IOMMU_DEVICE_ID.Flags", flags, 0x0, 0x0, false, 0x64acfc17fd8b0c73)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif