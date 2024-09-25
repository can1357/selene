#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_IOMMU_INTERFACE.Version", version, 0x0, 0x20, true, 0x3a7bef4e1366cc78)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(piommu_domain_create_t ), "_DMA_IOMMU_INTERFACE.CreateDomain", create_domain, 0x40, 0x40, true, 0xd35107a70bb7e8d9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*)>*), "_DMA_IOMMU_INTERFACE.DeleteDomain", delete_domain, 0x80, 0x40, true, 0xb992c3262f9bf860)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(piommu_domain_attach_device_t ), "_DMA_IOMMU_INTERFACE.AttachDevice", attach_device, 0xc0, 0x40, true, 0x57798ee43609259d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(piommu_domain_detach_device_t ), "_DMA_IOMMU_INTERFACE.DetachDevice", detach_device, 0x100, 0x40, true, 0x8a834155629fb45c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*)>*), "_DMA_IOMMU_INTERFACE.FlushDomain", flush_domain, 0x140, 0x40, true, 0xe2e8cf00df2980fd)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(piommu_flush_domain_va_list_t ), "_DMA_IOMMU_INTERFACE.FlushDomainByVaList", flush_domain_by_va_list, 0x180, 0x40, true, 0x68aa0121d383de13)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(piommu_query_input_mappings_t ), "_DMA_IOMMU_INTERFACE.QueryInputMappings", query_input_mappings, 0x1c0, 0x40, true, 0x8fab82318777eb54)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(piommu_map_logical_range_t ), "_DMA_IOMMU_INTERFACE.MapLogicalRange", map_logical_range, 0x200, 0x40, true, 0x5d571d1abce25ce1)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(piommu_unmap_logical_range_t ), "_DMA_IOMMU_INTERFACE.UnmapLogicalRange", unmap_logical_range, 0x240, 0x40, true, 0xf853de2be37ee2d6)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(piommu_map_identity_range_t ), "_DMA_IOMMU_INTERFACE.MapIdentityRange", map_identity_range, 0x280, 0x40, true, 0x3993cbae33763d9c)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(piommu_unmap_identity_range_t ), "_DMA_IOMMU_INTERFACE.UnmapIdentityRange", unmap_identity_range, 0x2c0, 0x40, true, 0x2173a8b734147f5b)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(piommu_set_device_fault_reporting_t ), "_DMA_IOMMU_INTERFACE.SetDeviceFaultReporting", set_device_fault_reporting, 0x300, 0x40, true, 0x7ec66f5ca1e3acdb)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(piommu_domain_configure_t ), "_DMA_IOMMU_INTERFACE.ConfigureDomain", configure_domain, 0x340, 0x40, true, 0xc5acb6675383f40)
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
#define _m13
#endif