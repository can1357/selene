#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXT_IOMMU_DEVICE.Context", context, 0x0, 0x0, false, 0x88217fc05716d8a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_t*), "_EXT_IOMMU_DEVICE.Iommu", iommu, 0x0, 0x0, false, 0xbde740393761665b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_domain_t*), "_EXT_IOMMU_DEVICE.Domain", domain, 0x0, 0x0, false, 0x70cddb70b419b336)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXT_IOMMU_DEVICE.AssociatedDomainId", associated_domain_id, 0x0, 0x0, false, 0x72b34803250ec4c0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXT_IOMMU_DEVICE.FirmwareDomainId", firmware_domain_id, 0x0, 0x0, false, 0x99317131680e354c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXT_IOMMU_DEVICE.FaultReportingEnabled", fault_reporting_enabled, 0x0, 0x0, false, 0x73d5f11c77d3929f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif