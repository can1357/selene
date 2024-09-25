#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ext::iommu_t*, struct ext::iommu_settings_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE.ConfigureSettings", configure_settings, 0x0, 0x0, false, 0x9ea3674a195de523)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ext::iommu_t*, uint32_t, uint8_t)>*), "_EXT_IOMMU_FUNCTION_TABLE.Initialize", initialize, 0x0, 0x0, false, 0x74085169f2150a2b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ext::iommu_t*, struct ext::iommu_domain_t*, struct ext::iommu_domain_t*, void*)>*), "_EXT_IOMMU_FUNCTION_TABLE.AllocateDomain", allocate_domain, 0x0, 0x0, false, 0x4079fd4ffb1b4e73)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ext::iommu_t*, struct ext::iommu_domain_t*, void*)>*), "_EXT_IOMMU_FUNCTION_TABLE.FreeDomain", free_domain, 0x0, 0x0, false, 0xa318f965568c9a42)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ext::iommu_t*, struct ext::iommu_device_id_t*, union ext::iommu_create_device_flags_t, void*, struct ext::iommu_device_t**, void*)>*), "_EXT_IOMMU_FUNCTION_TABLE.CreateDevice", create_device, 0x0, 0x0, false, 0xf78d8a6ee703d63a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ext::iommu_t*, struct ext::iommu_device_t*, void*)>*), "_EXT_IOMMU_FUNCTION_TABLE.DeleteDevice", delete_device, 0x0, 0x0, false, 0x8df24e7b5ffe6b7f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct ext::iommu_t*, struct ext::iommu_device_id_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE.OwnDevice", own_device, 0x0, 0x0, false, 0xf381b065d6797f5c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ext::iommu_t*, struct ext::iommu_device_t*, uint8_t)>*), "_EXT_IOMMU_FUNCTION_TABLE.ConfigureDeviceFaultReporting", configure_device_fault_reporting, 0x0, 0x0, false, 0x5b1268ec053b8067)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ext::iommu_t*, struct ext::iommu_device_t*, struct ext::iommu_domain_t*, void*)>*), "_EXT_IOMMU_FUNCTION_TABLE.AttachDeviceDomain", attach_device_domain, 0x0, 0x0, false, 0xe1b26db7b9cb2163)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ext::iommu_t*, struct ext::iommu_device_t*, void*)>*), "_EXT_IOMMU_FUNCTION_TABLE.DetachDeviceDomain", detach_device_domain, 0x0, 0x0, false, 0x949582290a5b390c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ext::iommu_t*, struct ext::iommu_domain_t*, struct ext::iommu_flush_context_t*, uint32_t, struct nt::ktb_flush_va_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE.FlushDomainTb", flush_domain_tb, 0x0, 0x0, false, 0xca4b7b00625e94c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ext::iommu_t*, struct ext::iommu_flush_context_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE.SyncFlush", sync_flush, 0x0, 0x0, false, 0xe96cb5d5520ca760)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ext::iommu_t*, struct ext::iommu_flush_context_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE.CompleteFlush", complete_flush, 0x0, 0x0, false, 0x21fec94ccfe4436b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, uint16_t, uint8_t, uint8_t, uint32_t, struct ext::iommu_device_id_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE.AllocateRemappingTableEntry", allocate_remapping_table_entry, 0x0, 0x0, false, 0x6045a3ad60836e9a)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t)>*), "_EXT_IOMMU_FUNCTION_TABLE.FreeRemappingTableEntry", free_remapping_table_entry, 0x0, 0x0, false, 0xd9a7b4727ce7d458)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint8_t, uint32_t, struct nt::interrupt_line_state_t*)>*), "_EXT_IOMMU_FUNCTION_TABLE.UpdateRemappingTableEntry", update_remapping_table_entry, 0x0, 0x0, false, 0x989b61c2807ee9e7)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_EXT_IOMMU_FUNCTION_TABLE.InvalidateRemappingTableEntry", invalidate_remapping_table_entry, 0x0, 0x0, false, 0x14dfc86f5230a7d8)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t, uint32_t*, uint32_t*, uint32_t)>*), "_EXT_IOMMU_FUNCTION_TABLE.UpdateRemappingDestination", update_remapping_destination, 0x0, 0x0, false, 0xc2cd8d1492cb80df)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_EXT_IOMMU_FUNCTION_TABLE.CaptureGlobalCrashdumpState", capture_global_crashdump_state, 0x0, 0x0, false, 0xf91f8c2b3b9360f0)
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
#endif