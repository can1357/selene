#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, struct ext::iommu_device_id_t*, uint8_t, struct ext::iommu_output_mapping_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.FindDevice", find_device, 0x0, 0x0, false, 0xcef2a6313e2c69c7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint64_t, uint8_t)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.SetDeviceSvmCapabilities", set_device_svm_capabilities, 0x0, 0x0, false, 0x7c92be55bb26a410)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint64_t, struct nt::iommu_pasid_table_object_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.SetDevicePasidTable", set_device_pasid_table, 0x0, 0x0, false, 0x15033ccaed0f7ff2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::iommu_pasid_table_object_t*, uint32_t)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.GrowPasidTable", grow_pasid_table, 0x0, 0x0, false, 0x38ef2504ad947342)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::iommu_pasid_table_object_t*, uint32_t, uint64_t, uint8_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.SetPasidAddressSpace", set_pasid_address_space, 0x0, 0x0, false, 0x637aaf399e026bd3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, void*, nt::list_entry_t*, uint32_t, struct nt::ktb_flush_va_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.FlushTb", flush_tb, 0x0, 0x0, false, 0xb563d1e31aff27f1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint64_t, uint32_t)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.FlushDeviceTbOnly", flush_device_tb_only, 0x0, 0x0, false, 0xa6842c3356bc59ae)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint64_t, uint16_t, int32_t)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.DismissPageFault", dismiss_page_fault, 0x0, 0x0, false, 0xad7b0adbcdd97aa5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t*, uint64_t*, uint16_t*, void**, uint64_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.GetPageFault", get_page_fault, 0x0, 0x0, false, 0xa58252a33620e74d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t, int64_t, uint32_t)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.SetMessageInterruptRouting", set_message_interrupt_routing, 0x0, 0x0, false, 0xa9c2b46ae164e968)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.EnableInterrupt", enable_interrupt, 0x0, 0x0, false, 0x6326f7972548a21)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.DisableInterrupt", disable_interrupt, 0x0, 0x0, false, 0xc51b156be1fed13b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.HandleInterrupt", handle_interrupt, 0x0, 0x0, false, 0xb9761502eab868e3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct ext::iommu_device_id_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.CheckForReservedRegion", check_for_reserved_region, 0x0, 0x0, false, 0x8f74c5f21ed06861)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, nt::list_entry_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.MarkHiberRegions", mark_hiber_regions, 0x0, 0x0, false, 0xda4f42ae57fd074b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint64_t, uint32_t)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.DrainSvmPageRequests", drain_svm_page_requests, 0x0, 0x0, false, 0x4e3b92266f72ba2d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint64_t, uint32_t)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.CancelPageRequests", cancel_page_requests, 0x0, 0x0, false, 0x6dec5f687792e735)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*, struct nt::iommu_reserved_device_t**)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.EnumerateReservedDevices", enumerate_reserved_devices, 0x0, 0x0, false, 0x76f9f997a5ed4e23)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct nt::iommu_reserved_device_t**)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.ProcessReservedDomains", process_reserved_domains, 0x0, 0x0, false, 0x627812c85ebd9b5f)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ext::iommu_device_id_t*, struct ext::iommu_device_id_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.QueryAcpiDeviceMapping", query_acpi_device_mapping, 0x0, 0x0, false, 0x176facfc8f93b899)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, struct ext::iommu_device_id_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.GetRidAcpiMapCount", get_rid_acpi_map_count, 0x0, 0x0, false, 0x353833cad73ab6bf)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct nt::iommu_pasid_table_object_t*, void*)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.FreePasidTable", free_pasid_table, 0x0, 0x0, false, 0xc9486c72efe7170e)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint64_t, uint8_t)>*), "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.ConfigureAts", configure_ats, 0x0, 0x0, false, 0x2aa139a141b9da92)
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
#define _m22
#endif