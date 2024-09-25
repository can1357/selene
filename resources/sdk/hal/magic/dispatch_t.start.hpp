#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "HAL_DISPATCH.Version", version, 0x0, 0x20, true, 0xa8c085698dd02b8f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(p_hal_query_system_information_t ), "HAL_DISPATCH.HalQuerySystemInformation", hal_query_system_information, 0x40, 0x40, true, 0x878246a9234c326b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(p_hal_set_system_information_t ), "HAL_DISPATCH.HalSetSystemInformation", hal_set_system_information, 0x80, 0x40, true, 0xb607c350d5a9b4d8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(p_hal_query_bus_slots_t ), "HAL_DISPATCH.HalQueryBusSlots", hal_query_bus_slots, 0xc0, 0x40, true, 0x829ecf2f2e621d5d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(p_hal_examine_mbr_t ), "HAL_DISPATCH.HalExamineMBR", hal_examine_mbr, 0x140, 0x40, true, 0xd9b720e3a07e08c8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(p_hal_io_read_partition_table_t ), "HAL_DISPATCH.HalIoReadPartitionTable", hal_io_read_partition_table, 0x180, 0x40, true, 0x81faeb931efce857)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(p_hal_io_set_partition_information_t ), "HAL_DISPATCH.HalIoSetPartitionInformation", hal_io_set_partition_information, 0x1c0, 0x40, true, 0x60cd96c583cdb653)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(p_hal_io_write_partition_table_t ), "HAL_DISPATCH.HalIoWritePartitionTable", hal_io_write_partition_table, 0x200, 0x40, true, 0xfacaa478c9679650)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(p_hal_handler_for_bus_t ), "HAL_DISPATCH.HalReferenceHandlerForBus", hal_reference_handler_for_bus, 0x240, 0x40, true, 0x864ef30625aa8208)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::bus_handler_t*)>*), "HAL_DISPATCH.HalReferenceBusHandler", hal_reference_bus_handler, 0x280, 0x40, true, 0xf59710b48dcfb110)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::bus_handler_t*)>*), "HAL_DISPATCH.HalDereferenceBusHandler", hal_dereference_bus_handler, 0x2c0, 0x40, true, 0x9be1331e62827f43)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "HAL_DISPATCH.HalInitPnpDriver", hal_init_pnp_driver, 0x300, 0x40, true, 0xeb84e6f656389fa9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(p_hal_init_power_management_t ), "HAL_DISPATCH.HalInitPowerManagement", hal_init_power_management, 0x340, 0x40, true, 0xc2391d77d2323bd3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct dma::adapter_t*(void*, struct nt::device_description_t*, uint32_t*)>*), "HAL_DISPATCH.HalGetDmaAdapter", hal_get_dma_adapter, 0x380, 0x40, true, 0xf66ea6bf048d2745)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(p_hal_get_interrupt_translator_t ), "HAL_DISPATCH.HalGetInterruptTranslator", hal_get_interrupt_translator, 0x3c0, 0x40, true, 0xb62014ee48d287fb)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "HAL_DISPATCH.HalStartMirroring", hal_start_mirroring, 0x400, 0x40, true, 0x2e44718bc51e30a0)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "HAL_DISPATCH.HalEndMirroring", hal_end_mirroring, 0x440, 0x40, true, 0xbd7abd19101b45b6)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(int64_t, int64_t)>*), "HAL_DISPATCH.HalMirrorPhysicalMemory", hal_mirror_physical_memory, 0x480, 0x40, true, 0xe0f7e435db4ebd79)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "HAL_DISPATCH.HalEndOfBoot", hal_end_of_boot, 0x4c0, 0x40, true, 0x34b7effa9100bdd0)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(int64_t, int64_t)>*), "HAL_DISPATCH.HalMirrorVerify", hal_mirror_verify, 0x500, 0x40, true, 0xaf1c99d9ae8f163)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(p_hal_get_acpi_table_t ), "HAL_DISPATCH.HalGetCachedAcpiTable", hal_get_cached_acpi_table, 0x540, 0x40, true, 0xf44bca66fc21480c)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(sdk::function<void()>*)>*), "HAL_DISPATCH.HalSetPciErrorHandlerCallback", hal_set_pci_error_handler_callback, 0x580, 0x40, true, 0x870c8ce31c3c38d9)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(p_hal_get_prm_cache_t ), "HAL_DISPATCH.HalGetPrmCache", hal_get_prm_cache, 0x0, 0x0, false, 0xce1c95eddefd990d)
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