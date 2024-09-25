#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t()>*), "_HAL_IOMMU_DISPATCH.HalIommuSupportEnabled", hal_iommu_support_enabled, 0x0, 0x40, true, 0x8417a6ae06b1fb46)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t*, uint32_t*, void**)>*), "_HAL_IOMMU_DISPATCH.HalIommuGetConfiguration", hal_iommu_get_configuration, 0x40, 0x40, true, 0x5831d5d21489fdcc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, void**)>*), "_HAL_IOMMU_DISPATCH.HalIommuGetLibraryContext", hal_iommu_get_library_context, 0x80, 0x40, true, 0x90f8ea929512464a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(void*, struct ext::iommu_device_id_t*, union nt::iommu_svm_capabilities_t*, void**)>*, sdk::function<int32_t(void*, struct ext::iommu_device_id_t*, struct nt::device_object_t*, union nt::iommu_svm_capabilities_t*, void**)>*>), "_HAL_IOMMU_DISPATCH.HalIommuMapDevice", hal_iommu_map_device, 0xc0, 0x40, true, 0x5209de5c8d65416c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_HAL_IOMMU_DISPATCH.HalIommuEnableDevicePasid", hal_iommu_enable_device_pasid, 0x100, 0x40, true, 0xb312e29a5f532625)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint64_t)>*), "_HAL_IOMMU_DISPATCH.HalIommuSetAddressSpace", hal_iommu_set_address_space, 0x140, 0x40, true, 0xdf28c138503934bc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_HAL_IOMMU_DISPATCH.HalIommuDisableDevicePasid", hal_iommu_disable_device_pasid, 0x180, 0x40, true, 0xdbbda0b99ea6e9b0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_HAL_IOMMU_DISPATCH.HalIommuUnmapDevice", hal_iommu_unmap_device, 0x1c0, 0x40, true, 0xa36ed34622ef74f1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_HAL_IOMMU_DISPATCH.HalIommuFreeLibraryContext", hal_iommu_free_library_context, 0x200, 0x40, true, 0xad9696429222974f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, struct nt::ktb_flush_va_t*)>*), "_HAL_IOMMU_DISPATCH.HalIommuFlushTb", hal_iommu_flush_tb, 0x240, 0x40, true, 0x335d48023f4c20fe)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, struct nt::ktb_flush_va_t*)>*), "_HAL_IOMMU_DISPATCH.HalIommuFlushAllPasid", hal_iommu_flush_all_pasid, 0x280, 0x40, true, 0x6065bca56542bc84)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t)>*), "_HAL_IOMMU_DISPATCH.HalIommuProcessPageRequestQueue", hal_iommu_process_page_request_queue, 0x2c0, 0x40, true, 0xda54ff177535e7c9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t)>*), "_HAL_IOMMU_DISPATCH.HalIommuFaultRoutine", hal_iommu_fault_routine, 0x300, 0x40, true, 0x2246919c4851b31b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint32_t)>*), "_HAL_IOMMU_DISPATCH.HalIommuReferenceAsid", hal_iommu_reference_asid, 0x340, 0x40, true, 0xd0986c590da2f1ce)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t)>*), "_HAL_IOMMU_DISPATCH.HalIommuDereferenceAsid", hal_iommu_dereference_asid, 0x380, 0x40, true, 0xf944f661b881fb97)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, void*, uint32_t)>*), "_HAL_IOMMU_DISPATCH.HalIommuServicePageFault", hal_iommu_service_page_fault, 0x3c0, 0x40, true, 0x14fb6481bfecbe97)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint8_t)>*), "_HAL_IOMMU_DISPATCH.HalIommuDevicePowerChange", hal_iommu_device_power_change, 0x400, 0x40, true, 0x1ba1b51865be4b01)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "_HAL_IOMMU_DISPATCH.HalIommuBeginDeviceReset", hal_iommu_begin_device_reset, 0x440, 0x40, true, 0x6269c9c68ddec4aa)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_HAL_IOMMU_DISPATCH.HalIommuFinalizeDeviceReset", hal_iommu_finalize_device_reset, 0x480, 0x40, true, 0x7dd53945651f2737)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ext::iommu_device_id_t*, union nt::iommu_ats_settings_t*)>*), "_HAL_IOMMU_DISPATCH.HalIommuGetAtsSettings", hal_iommu_get_ats_settings, 0x0, 0x0, false, 0xb6a9b4b56936db54)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ext::iommu_device_id_t*, struct nt::device_object_t*, union nt::iommu_svm_capabilities_t*, void**)>*), "_HAL_IOMMU_DISPATCH.HalIommuCreateAtsDevice", hal_iommu_create_ats_device, 0x0, 0x0, false, 0x6497ffeabbd68d3c)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_HAL_IOMMU_DISPATCH.HalIommuDeleteAtsDevice", hal_iommu_delete_ats_device, 0x0, 0x0, false, 0xa87137b69d798007)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ext::iommu_device_id_t*, uint8_t*)>*), "_HAL_IOMMU_DISPATCH.HalIommuGetDomainTransitionSupport", hal_iommu_get_domain_transition_support, 0x0, 0x0, false, 0x9339beedeab049c5)
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