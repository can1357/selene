#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(enum nt::iommu_dma_domain_type_t, union nt::iommu_dma_domain_creation_flags_t, struct nt::iommu_dma_logical_allocator_config_t*, struct nt::iommu_dma_reserved_region_t*, struct nt::iommu_dma_domain_t**)>*), "_DMA_IOMMU_INTERFACE_V2.CreateDomainEx", create_domain_ex, 0x0, 0x0, false, 0x5d13b69a9d2edb36)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*)>*), "_DMA_IOMMU_INTERFACE_V2.DeleteDomain", delete_domain, 0x0, 0x0, false, 0xf7f6ac7a7209ec40)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::iommu_dma_device_t*)>*), "_DMA_IOMMU_INTERFACE_V2.AttachDeviceEx", attach_device_ex, 0x0, 0x0, false, 0x234d5cb9af5677fe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_device_t*)>*), "_DMA_IOMMU_INTERFACE_V2.DetachDeviceEx", detach_device_ex, 0x0, 0x0, false, 0xe8b525db6d058152)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*)>*), "_DMA_IOMMU_INTERFACE_V2.FlushDomain", flush_domain, 0x0, 0x0, false, 0xf85e9ccf930b7481)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint8_t, uint32_t, void*)>*), "_DMA_IOMMU_INTERFACE_V2.FlushDomainByVaList", flush_domain_by_va_list, 0x0, 0x0, false, 0x735648e81b1b7b01)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::input_mapping_element_t*, uint32_t, uint32_t*)>*), "_DMA_IOMMU_INTERFACE_V2.QueryInputMappings", query_input_mappings, 0x0, 0x0, false, 0xbb2bd12d54caa1e3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint32_t, struct nt::iommu_map_physical_address_t*, uint64_t*, uint64_t*, uint64_t*, uint64_t*)>*), "_DMA_IOMMU_INTERFACE_V2.MapLogicalRangeEx", map_logical_range_ex, 0x0, 0x0, false, 0xaa23127b39e14813)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint64_t, uint64_t)>*), "_DMA_IOMMU_INTERFACE_V2.UnmapLogicalRange", unmap_logical_range, 0x0, 0x0, false, 0x2ea498e37f4624b4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint32_t, struct nt::iommu_map_physical_address_t*)>*), "_DMA_IOMMU_INTERFACE_V2.MapIdentityRangeEx", map_identity_range_ex, 0x0, 0x0, false, 0x7ec43e6088f3d7f9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::iommu_map_physical_address_t*)>*), "_DMA_IOMMU_INTERFACE_V2.UnmapIdentityRangeEx", unmap_identity_range_ex, 0x0, 0x0, false, 0xcfa6b554b18f9aba)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_device_t*, uint32_t, uint8_t, struct nt::device_fault_configuration_t*)>*), "_DMA_IOMMU_INTERFACE_V2.SetDeviceFaultReportingEx", set_device_fault_reporting_ex, 0x0, 0x0, false, 0x7845f020d1e882fc)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::domain_configuration_t*)>*), "_DMA_IOMMU_INTERFACE_V2.ConfigureDomain", configure_domain, 0x0, 0x0, false, 0x48e893be4fa7bddd)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::iommu_dma_device_t*, uint32_t*)>*), "_DMA_IOMMU_INTERFACE_V2.QueryAvailableDomainTypes", query_available_domain_types, 0x0, 0x0, false, 0x1a631ba60fa01f1a)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<void(struct nt::iommu_interface_state_change_t*, void*)>*, void*, struct nt::iommu_dma_device_t*, union nt::iommu_interface_state_change_fields_t*)>*), "_DMA_IOMMU_INTERFACE_V2.RegisterInterfaceStateChangeCallback", register_interface_state_change_callback, 0x0, 0x0, false, 0x77d6a7a3e72edc0b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<void(struct nt::iommu_interface_state_change_t*, void*)>*, struct nt::iommu_dma_device_t*)>*), "_DMA_IOMMU_INTERFACE_V2.UnregisterInterfaceStateChangeCallback", unregister_interface_state_change_callback, 0x0, 0x0, false, 0xc7f5ae2b31bcc289)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint64_t, uint64_t*, uint64_t*, uint64_t*, struct nt::iommu_dma_logical_address_token_t**)>*), "_DMA_IOMMU_INTERFACE_V2.ReserveLogicalAddressRange", reserve_logical_address_range, 0x0, 0x0, false, 0x80179651c073f2cf)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_logical_address_token_t*)>*), "_DMA_IOMMU_INTERFACE_V2.FreeReservedLogicalAddressRange", free_reserved_logical_address_range, 0x0, 0x0, false, 0xf01b2c3202cf10a7)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_logical_address_token_t*, uint64_t, uint32_t, struct nt::iommu_map_physical_address_t*, struct nt::iommu_dma_logical_address_token_mapped_segment_t*)>*), "_DMA_IOMMU_INTERFACE_V2.MapReservedLogicalRange", map_reserved_logical_range, 0x0, 0x0, false, 0x8734719376ade08d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_logical_address_token_mapped_segment_t*)>*), "_DMA_IOMMU_INTERFACE_V2.UnmapReservedLogicalRange", unmap_reserved_logical_range, 0x0, 0x0, false, 0xa4a1a07b8ef256e4)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::iommu_device_creation_configuration_t*, struct nt::iommu_dma_device_t**)>*), "_DMA_IOMMU_INTERFACE_V2.CreateDevice", create_device, 0x0, 0x0, false, 0x3395851c52d80bfa)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_device_t*)>*), "_DMA_IOMMU_INTERFACE_V2.DeleteDevice", delete_device, 0x0, 0x0, false, 0xb65e30cc902640fa)
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
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#endif