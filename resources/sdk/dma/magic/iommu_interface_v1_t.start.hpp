#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint8_t, struct nt::iommu_dma_domain_t**)>*), "_DMA_IOMMU_INTERFACE_V1.CreateDomain", create_domain, 0x0, 0x0, false, 0xd0be5ce9298cdcad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*)>*), "_DMA_IOMMU_INTERFACE_V1.DeleteDomain", delete_domain, 0x0, 0x0, false, 0x38f705edff797779)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::device_object_t*, uint32_t, uint32_t)>*), "_DMA_IOMMU_INTERFACE_V1.AttachDevice", attach_device, 0x0, 0x0, false, 0x5ddce4849a7a8ebe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::device_object_t*, uint32_t)>*), "_DMA_IOMMU_INTERFACE_V1.DetachDevice", detach_device, 0x0, 0x0, false, 0x776f489b91502da5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*)>*), "_DMA_IOMMU_INTERFACE_V1.FlushDomain", flush_domain, 0x0, 0x0, false, 0x42418e032c78f9f7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint8_t, uint32_t, void*)>*), "_DMA_IOMMU_INTERFACE_V1.FlushDomainByVaList", flush_domain_by_va_list, 0x0, 0x0, false, 0xf8caad1e8a4a18a9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::input_mapping_element_t*, uint32_t, uint32_t*)>*), "_DMA_IOMMU_INTERFACE_V1.QueryInputMappings", query_input_mappings, 0x0, 0x0, false, 0xb6e4597bc0e1eafe)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint32_t, struct nt::mdl_t*, uint64_t)>*), "_DMA_IOMMU_INTERFACE_V1.MapLogicalRange", map_logical_range, 0x0, 0x0, false, 0x595b4265a7b581cd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint64_t, uint64_t)>*), "_DMA_IOMMU_INTERFACE_V1.UnmapLogicalRange", unmap_logical_range, 0x0, 0x0, false, 0xb23586638a65d41b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint32_t, struct nt::mdl_t*)>*), "_DMA_IOMMU_INTERFACE_V1.MapIdentityRange", map_identity_range, 0x0, 0x0, false, 0xc34ebc848dbf8efc)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::mdl_t*)>*), "_DMA_IOMMU_INTERFACE_V1.UnmapIdentityRange", unmap_identity_range, 0x0, 0x0, false, 0x410d71586fe8f6a8)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, uint32_t, uint8_t, struct nt::device_fault_configuration_t*)>*), "_DMA_IOMMU_INTERFACE_V1.SetDeviceFaultReporting", set_device_fault_reporting, 0x0, 0x0, false, 0x507b9f162d090de6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::domain_configuration_t*)>*), "_DMA_IOMMU_INTERFACE_V1.ConfigureDomain", configure_domain, 0x0, 0x0, false, 0xc44b7497a390123a)
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