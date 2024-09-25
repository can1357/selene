#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "HAL_PRIVATE_DISPATCH.Version", version, 0x0, 0x20, true, 0x938e5303e1c3ecfe)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct nt::bus_handler_t*(enum nt::interface_type_t, uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalHandlerForBus", hal_handler_for_bus, 0x40, 0x40, true, 0x68d429a73d9c70f0)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct nt::bus_handler_t*(enum nt::bus_data_type_t, uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalHandlerForConfigSpace", hal_handler_for_config_space, 0x80, 0x40, true, 0x27fdc945a65f17a)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "HAL_PRIVATE_DISPATCH.HalLocateHiberRanges", hal_locate_hiber_ranges, 0xc0, 0x40, true, 0x8602d588e920bdc4)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(enum nt::interface_type_t, enum nt::bus_data_type_t, uint32_t, enum nt::interface_type_t, uint32_t, uint32_t, sdk::function<int32_t(struct nt::bus_handler_t*)>*, struct nt::bus_handler_t**)>*), "HAL_PRIVATE_DISPATCH.HalRegisterBusHandler", hal_register_bus_handler, 0x100, 0x40, true, 0xe9f64e42c8a4bfa6)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t)>*), "HAL_PRIVATE_DISPATCH.HalSetWakeEnable", hal_set_wake_enable, 0x140, 0x40, true, 0xf0025390b2ca78a4)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, uint64_t)>*), "HAL_PRIVATE_DISPATCH.HalSetWakeAlarm", hal_set_wake_alarm, 0x180, 0x40, true, 0xc4eefd6ce17b3290)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(enum nt::interface_type_t, uint32_t, int64_t, uint32_t*, int64_t*)>*), "HAL_PRIVATE_DISPATCH.HalPciTranslateBusAddress", hal_pci_translate_bus_address, 0x1c0, 0x40, true, 0x6f94403ffc1d8e2a)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, struct nt::driver_object_t*, struct nt::device_object_t*, enum nt::interface_type_t, uint32_t, uint32_t, struct cm::resource_list_t**)>*), "HAL_PRIVATE_DISPATCH.HalPciAssignSlotResources", hal_pci_assign_slot_resources, 0x200, 0x40, true, 0xfbdfc3482291514)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "HAL_PRIVATE_DISPATCH.HalHaltSystem", hal_halt_system, 0x240, 0x40, true, 0xf74964c346646b1f)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(int64_t, uint32_t*, int64_t*, uint64_t*, uint8_t)>*), "HAL_PRIVATE_DISPATCH.HalFindBusAddressTranslation", hal_find_bus_address_translation, 0x280, 0x40, true, 0xd2cd287e716dc9d2)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t()>*), "HAL_PRIVATE_DISPATCH.HalResetDisplay", hal_reset_display, 0x2c0, 0x40, true, 0x81e9e5648ed60e1)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::adapter_object_t*, uint32_t, uint32_t, struct nt::map_register_entry_t*)>*), "HAL_PRIVATE_DISPATCH.HalAllocateMapRegisters", hal_allocate_map_registers, 0x300, 0x40, true, 0xc93c7f55bbf200b5)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::debug_device_descriptor_t*)>*), "HAL_PRIVATE_DISPATCH.KdSetupPciDeviceForDebugging", kd_setup_pci_device_for_debugging, 0x340, 0x40, true, 0xd68a19645f86ebd)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::debug_device_descriptor_t*)>*), "HAL_PRIVATE_DISPATCH.KdReleasePciDeviceForDebugging", kd_release_pci_device_for_debugging, 0x380, 0x40, true, 0xfb97b8ab7e53f5dd)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(struct nt::loader_parameter_block_t*, uint32_t)>*), "HAL_PRIVATE_DISPATCH.KdGetAcpiTablePhase0", kd_get_acpi_table_phase0, 0x3c0, 0x40, true, 0x55904147af4e005)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "HAL_PRIVATE_DISPATCH.KdCheckPowerButton", kd_check_power_button, 0x400, 0x40, true, 0x9dda039cd6687f29)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalVectorToIDTEntry", hal_vector_to_idt_entry, 0x440, 0x40, true, 0x3c15ad90e436b459)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(int64_t, uint32_t, uint8_t)>*), "HAL_PRIVATE_DISPATCH.KdMapPhysicalMemory64", kd_map_physical_memory64, 0x480, 0x40, true, 0xc0aa1bb0480cfb03)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint8_t)>*), "HAL_PRIVATE_DISPATCH.KdUnmapVirtualAddress", kd_unmap_virtual_address, 0x4c0, 0x40, true, 0x27559748fffcb02e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t, uint32_t, void*, uint32_t, uint32_t)>*), "HAL_PRIVATE_DISPATCH.KdGetPciDataByOffset", kd_get_pci_data_by_offset, 0x500, 0x40, true, 0x73b4dfe84913af01)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t, uint32_t, void*, uint32_t, uint32_t)>*), "HAL_PRIVATE_DISPATCH.KdSetPciDataByOffset", kd_set_pci_data_by_offset, 0x540, 0x40, true, 0x2597ae92f6f31195)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(enum nt::interface_type_t, uint32_t, uint32_t, uint32_t, uint8_t*, uint64_t*)>*), "HAL_PRIVATE_DISPATCH.HalGetInterruptVectorOverride", hal_get_interrupt_vector_override, 0x580, 0x40, true, 0x8ca9a28427de5490)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, struct nt::group_affinity_t*, uint32_t*, enum nt::kinterrupt_polarity_t*, struct nt::interrupt_remapping_info_t*)>*), "HAL_PRIVATE_DISPATCH.HalGetVectorInputOverride", hal_get_vector_input_override, 0x5c0, 0x40, true, 0x9b371a30b75fc319)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "HAL_PRIVATE_DISPATCH.HalLoadMicrocode", hal_load_microcode, 0x600, 0x40, true, 0x4109ca6597959f5a)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "HAL_PRIVATE_DISPATCH.HalUnloadMicrocode", hal_unload_microcode, 0x640, 0x40, true, 0x92240659244feb75)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "HAL_PRIVATE_DISPATCH.HalPostMicrocodeUpdate", hal_post_microcode_update, 0x680, 0x40, true, 0x21bdbb1a95ab2542)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::group_affinity_t*, uint32_t, enum nt::kinterrupt_mode_t, uint8_t, uint32_t*, uint8_t*, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalAllocateMessageTargetOverride", hal_allocate_message_target_override, 0x6c0, 0x40, true, 0x3f6c5b92c5ee83d7)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*, uint32_t, struct nt::group_affinity_t*)>*), "HAL_PRIVATE_DISPATCH.HalFreeMessageTargetOverride", hal_free_message_target_override, 0x700, 0x40, true, 0x66e5c11298ec58d2)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hal::dp_replace_parameters_t*, void**)>*), "HAL_PRIVATE_DISPATCH.HalDpReplaceBegin", hal_dp_replace_begin, 0x740, 0x40, true, 0x867c472719e7ad22)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "HAL_PRIVATE_DISPATCH.HalDpReplaceTarget", hal_dp_replace_target, 0x780, 0x40, true, 0x94a7c0a722ff649a)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void*)>*), "HAL_PRIVATE_DISPATCH.HalDpReplaceControl", hal_dp_replace_control, 0x7c0, 0x40, true, 0x66027b5e516f8c3e)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "HAL_PRIVATE_DISPATCH.HalDpReplaceEnd", hal_dp_replace_end, 0x800, 0x40, true, 0x34807e6bdd9f2ec7)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalPrepareForBugcheck", hal_prepare_for_bugcheck, 0x840, 0x40, true, 0x16a527a7906c8666)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(uint64_t*, uint64_t*)>*), "HAL_PRIVATE_DISPATCH.HalQueryWakeTime", hal_query_wake_time, 0x880, 0x40, true, 0x1e505dc12867e686)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t, struct nt::kaffinity_ex_t*)>*), "HAL_PRIVATE_DISPATCH.HalReportIdleStateUsage", hal_report_idle_state_usage, 0x8c0, 0x40, true, 0xcd7d2092d8d490e8)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalTscSynchronization", hal_tsc_synchronization, 0x900, 0x40, true, 0x49d46ba980cb7235)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct whea::error_record_section_descriptor_t*, struct whea::processor_generic_error_section_t*)>*), "HAL_PRIVATE_DISPATCH.HalWheaInitProcessorGenericSection", hal_whea_init_processor_generic_section, 0x940, 0x40, true, 0x777e8a509f81e5fb)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(enum nt::system_power_state_t)>*), "HAL_PRIVATE_DISPATCH.HalStopLegacyUsbInterrupts", hal_stop_legacy_usb_interrupts, 0x980, 0x40, true, 0xb9e50eab1730b8b0)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(int64_t, uint32_t, void*)>*), "HAL_PRIVATE_DISPATCH.HalReadWheaPhysicalMemory", hal_read_whea_physical_memory, 0x9c0, 0x40, true, 0x88c058671a8712e6)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(int64_t, uint32_t, void*)>*), "HAL_PRIVATE_DISPATCH.HalWriteWheaPhysicalMemory", hal_write_whea_physical_memory, 0xa00, 0x40, true, 0x173313316ff9f144)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "HAL_PRIVATE_DISPATCH.HalDpMaskLevelTriggeredInterrupts", hal_dp_mask_level_triggered_interrupts, 0xa40, 0x40, true, 0x3b1075569a97f362)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "HAL_PRIVATE_DISPATCH.HalDpUnmaskLevelTriggeredInterrupts", hal_dp_unmask_level_triggered_interrupts, 0xa80, 0x40, true, 0xb3bb4440b661c98d)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void**)>*), "HAL_PRIVATE_DISPATCH.HalDpGetInterruptReplayState", hal_dp_get_interrupt_replay_state, 0xac0, 0x40, true, 0x80f0c9134bbfc5a9)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "HAL_PRIVATE_DISPATCH.HalDpReplayInterrupts", hal_dp_replay_interrupts, 0xb00, 0x40, true, 0xc8ab9e54bbed09a6)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t()>*), "HAL_PRIVATE_DISPATCH.HalQueryIoPortAccessSupported", hal_query_io_port_access_supported, 0xb40, 0x40, true, 0xf6a35f21c89bbe8e)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::debug_device_descriptor_t*)>*), "HAL_PRIVATE_DISPATCH.KdSetupIntegratedDeviceForDebugging", kd_setup_integrated_device_for_debugging, 0xb80, 0x40, true, 0x1ef8bd69d47ab4e6)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::debug_device_descriptor_t*)>*), "HAL_PRIVATE_DISPATCH.KdReleaseIntegratedDeviceForDebugging", kd_release_integrated_device_for_debugging, 0xbc0, 0x40, true, 0x43d321244fb3558f)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct hal::intel_enlightenment_information_t*)>*), "HAL_PRIVATE_DISPATCH.HalGetEnlightenmentInformation", hal_get_enlightenment_information, 0xc00, 0x40, true, 0x1986547154467ef6)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(struct nt::loader_parameter_block_t*, uint32_t, uint64_t*, uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalAllocateEarlyPages", hal_allocate_early_pages, 0xc40, 0x40, true, 0xc2150b509d9a416c)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint64_t, uint32_t, uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalMapEarlyPages", hal_map_early_pages, 0xc80, 0x40, true, 0x583a7eb27341e1ed)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "HAL_PRIVATE_DISPATCH.Dummy1", dummy1, 0xcc0, 0x40, true, 0xfdb9ce0576936536)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "HAL_PRIVATE_DISPATCH.Dummy2", dummy2, 0xd00, 0x40, true, 0x6ed47169ab0d558a)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t, uint8_t)>*), "HAL_PRIVATE_DISPATCH.HalNotifyProcessorFreeze", hal_notify_processor_freeze, 0xd40, 0x40, true, 0x3dca0f7126af62dd)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalPrepareProcessorForIdle", hal_prepare_processor_for_idle, 0xd80, 0x40, true, 0x60c6a58999afb825)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct hal::log_register_context_t*)>*), "HAL_PRIVATE_DISPATCH.HalRegisterLogRoutine", hal_register_log_routine, 0xdc0, 0x40, true, 0x88f2553b324c301a)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "HAL_PRIVATE_DISPATCH.HalResumeProcessorFromIdle", hal_resume_processor_from_idle, 0xe00, 0x40, true, 0x8abc42b756e3698a)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "HAL_PRIVATE_DISPATCH.Dummy", dummy, 0xe40, 0x40, true, 0x86ea135d38407d79)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalVectorToIDTEntryEx", hal_vector_to_idt_entry_ex, 0xe80, 0x40, true, 0x18e72edab0c1fb6f)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::interrupt_vector_data_t*, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalSecondaryInterruptQueryPrimaryInformation", hal_secondary_interrupt_query_primary_information, 0xec0, 0x40, true, 0x3a4cceda91a94d74)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalMaskInterrupt", hal_mask_interrupt, 0xf00, 0x40, true, 0x6bc005cbe000a0c2)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalUnmaskInterrupt", hal_unmask_interrupt, 0xf40, 0x40, true, 0xbc1cdbeae386de1c)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t, uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalIsInterruptTypeSecondary", hal_is_interrupt_type_secondary, 0xf80, 0x40, true, 0x2bf3fb215bffbc31)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(char*, uint16_t, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalAllocateGsivForSecondaryInterrupt", hal_allocate_gsiv_for_secondary_interrupt, 0xfc0, 0x40, true, 0x192e8d52b8439d84)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, struct pci::busmaster_descriptor_t*, uint8_t, struct nt::interrupt_vector_data_t*, uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalAddInterruptRemapping", hal_add_interrupt_remapping, 0x1000, 0x40, true, 0x8785b83fe4ea81b9)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t, uint32_t, struct pci::busmaster_descriptor_t*, uint8_t, struct nt::interrupt_vector_data_t*, uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalRemoveInterruptRemapping", hal_remove_interrupt_remapping, 0x1040, 0x40, true, 0x561411102b4cf74e)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void()>*, sdk::function<void(uint8_t)>*>), "HAL_PRIVATE_DISPATCH.HalSaveAndDisableHvEnlightenment", hal_save_and_disable_hv_enlightenment, 0x1080, 0x40, true, 0x5b496f0b4bab7f89)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "HAL_PRIVATE_DISPATCH.HalRestoreHvEnlightenment", hal_restore_hv_enlightenment, 0x10c0, 0x40, true, 0x9db4499b070a8231)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::mdl_t*, uint8_t)>*), "HAL_PRIVATE_DISPATCH.HalFlushIoBuffersExternalCache", hal_flush_io_buffers_external_cache, 0x1100, 0x40, true, 0x1c39249035f66052)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t)>*), "HAL_PRIVATE_DISPATCH.HalFlushExternalCache", hal_flush_external_cache, 0x1140, 0x40, true, 0x64383080b2050da3)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(enum nt::system_power_state_t)>*), "HAL_PRIVATE_DISPATCH.HalPciEarlyRestore", hal_pci_early_restore, 0x1180, 0x40, true, 0xea3f541fd9768b0c)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t*, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalGetProcessorId", hal_get_processor_id, 0x11c0, 0x40, true, 0xe6882662be2fe894)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, enum nt::kprofile_source_t*, uint32_t, struct hal::pmc_counters_t**)>*), "HAL_PRIVATE_DISPATCH.HalAllocatePmcCounterSet", hal_allocate_pmc_counter_set, 0x1200, 0x40, true, 0xb9b4d06de166f663)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct hal::pmc_counters_t*, uint64_t*)>*), "HAL_PRIVATE_DISPATCH.HalCollectPmcCounters", hal_collect_pmc_counters, 0x1240, 0x40, true, 0x2523948ed38a8d2d)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct hal::pmc_counters_t*)>*), "HAL_PRIVATE_DISPATCH.HalFreePmcCounterSet", hal_free_pmc_counter_set, 0x1280, 0x40, true, 0x3421ddf5fc54b8a7)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void*, sdk::function<int32_t(void*)>*)>*), "HAL_PRIVATE_DISPATCH.HalProcessorHalt", hal_processor_halt, 0x12c0, 0x40, true, 0x397e2fa08b783a3e)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint64_t(uint64_t*)>*), "HAL_PRIVATE_DISPATCH.HalTimerQueryCycleCounter", hal_timer_query_cycle_counter, 0x1300, 0x40, true, 0x3211d69b2beb401)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "HAL_PRIVATE_DISPATCH.Dummy3", dummy3, 0x1340, 0x40, true, 0xc73f4ef3d0fff1b2)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "HAL_PRIVATE_DISPATCH.HalPciMarkHiberPhase", hal_pci_mark_hiber_phase, 0x1380, 0x40, true, 0x94ac9361f0188f23)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(int64_t*)>*), "HAL_PRIVATE_DISPATCH.HalQueryProcessorRestartEntryPoint", hal_query_processor_restart_entry_point, 0x13c0, 0x40, true, 0x919965925578e33c)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalRequestInterrupt", hal_request_interrupt, 0x1400, 0x40, true, 0xb1fa0747ff663238)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<uint8_t(void*, struct hal::unmasked_interrupt_information_t*)>*, void*, struct hal::unmasked_interrupt_information_t*)>*), "HAL_PRIVATE_DISPATCH.HalEnumerateUnmaskedInterrupts", hal_enumerate_unmasked_interrupts, 0x1440, 0x40, true, 0x5e38bb36393619d5)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int64_t)>*), "HAL_PRIVATE_DISPATCH.HalFlushAndInvalidatePageExternalCache", hal_flush_and_invalidate_page_external_cache, 0x1480, 0x40, true, 0x62eb14aacdf9b334)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::debug_device_descriptor_t*, sdk::function<enum kd::callback_action_t(struct nt::debug_device_descriptor_t*)>*)>*), "HAL_PRIVATE_DISPATCH.KdEnumerateDebuggingDevices", kd_enumerate_debugging_devices, 0x14c0, 0x40, true, 0x7fcb896cd1fee768)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::mdl_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t)>*), "HAL_PRIVATE_DISPATCH.HalFlushIoRectangleExternalCache", hal_flush_io_rectangle_external_cache, 0x1500, 0x40, true, 0xb472caf8ce7cc3b9)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalPowerEarlyRestore", hal_power_early_restore, 0x1540, 0x40, true, 0xe6cf2fba1d4ffe8f)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint64_t*, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalQueryCapsuleCapabilities", hal_query_capsule_capabilities, 0x1580, 0x40, true, 0xa1baba7737e4c8bf)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, int64_t)>*), "HAL_PRIVATE_DISPATCH.HalUpdateCapsule", hal_update_capsule, 0x15c0, 0x40, true, 0x5c56784c73a7acdd)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t()>*), "HAL_PRIVATE_DISPATCH.HalPciMultiStageResumeCapable", hal_pci_multi_stage_resume_capable, 0x1600, 0x40, true, 0xddddb0a39a441bcd)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalDmaFreeCrashDumpRegisters", hal_dma_free_crash_dump_registers, 0x1640, 0x40, true, 0xbe27a944ad206cee)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t()>*), "HAL_PRIVATE_DISPATCH.HalAcpiAoacCapable", hal_acpi_aoac_capable, 0x1680, 0x40, true, 0x1bfc3fdf7f89c772)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::interrupt_vector_data_t*, struct nt::group_affinity_t*, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalInterruptSetDestination", hal_interrupt_set_destination, 0x16c0, 0x40, true, 0xfe5898f16fe072d)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct hal::clock_timer_configuration_t*)>*), "HAL_PRIVATE_DISPATCH.HalGetClockConfiguration", hal_get_clock_configuration, 0x1700, 0x40, true, 0x5bfef39caa594295)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t)>*), "HAL_PRIVATE_DISPATCH.HalClockTimerActivate", hal_clock_timer_activate, 0x1740, 0x40, true, 0xd68b237c8b8fcac5)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "HAL_PRIVATE_DISPATCH.HalClockTimerInitialize", hal_clock_timer_initialize, 0x1780, 0x40, true, 0x482c3ee1ee9af4c8)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "HAL_PRIVATE_DISPATCH.HalClockTimerStop", hal_clock_timer_stop, 0x17c0, 0x40, true, 0x8cc237d45bf87181)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(enum hal::clock_timer_mode_t, uint64_t, uint64_t*)>*), "HAL_PRIVATE_DISPATCH.HalClockTimerArm", hal_clock_timer_arm, 0x1800, 0x40, true, 0xb8ad3a1ddb8da9eb)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t()>*), "HAL_PRIVATE_DISPATCH.HalTimerOnlyClockInterruptPending", hal_timer_only_clock_interrupt_pending, 0x1840, 0x40, true, 0x18e550f33906f65f)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*()>*), "HAL_PRIVATE_DISPATCH.HalAcpiGetMultiNode", hal_acpi_get_multi_node, 0x1880, 0x40, true, 0x4a1fae92bfb0308b)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::function<void(uint32_t, volatile int32_t*)>*(sdk::function<void(uint32_t, volatile int32_t*)>*)>*), "HAL_PRIVATE_DISPATCH.HalPowerSetRebootHandler", hal_power_set_reboot_handler, 0x18c0, 0x40, true, 0xcfb013c395e3e880)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct hal::iommu_dispatch_t*)>*), "HAL_PRIVATE_DISPATCH.HalIommuRegisterDispatchTable", hal_iommu_register_dispatch_table, 0x1900, 0x40, true, 0xc4106ca3c6ac8baf)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "HAL_PRIVATE_DISPATCH.HalTimerWatchdogStart", hal_timer_watchdog_start, 0x1940, 0x40, true, 0xfb79ccf3d9ac7ce9)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "HAL_PRIVATE_DISPATCH.HalTimerWatchdogResetCountdown", hal_timer_watchdog_reset_countdown, 0x1980, 0x40, true, 0x79bab115e1716eb7)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "HAL_PRIVATE_DISPATCH.HalTimerWatchdogStop", hal_timer_watchdog_stop, 0x19c0, 0x40, true, 0xd6ecfe85ea49a9b0)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t()>*), "HAL_PRIVATE_DISPATCH.HalTimerWatchdogGeneratedLastReset", hal_timer_watchdog_generated_last_reset, 0x1a00, 0x40, true, 0x753c3536372271af)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint8_t)>*), "HAL_PRIVATE_DISPATCH.HalTimerWatchdogTriggerSystemReset", hal_timer_watchdog_trigger_system_reset, 0x1a40, 0x40, true, 0x6f0d47a4213a37c2)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::interrupt_vector_data_t*, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalInterruptVectorDataToGsiv", hal_interrupt_vector_data_to_gsiv, 0x1a80, 0x40, true, 0xe207ea5d959ffea3)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t*, uint8_t*)>*), "HAL_PRIVATE_DISPATCH.HalInterruptGetHighestPriorityInterrupt", hal_interrupt_get_highest_priority_interrupt, 0x1ac0, 0x40, true, 0x7c720a6d3dc08c06)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalProcessorOn", hal_processor_on, 0x1b00, 0x40, true, 0x803d41cafba23082)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "HAL_PRIVATE_DISPATCH.HalProcessorOff", hal_processor_off, 0x1b40, 0x40, true, 0x3d6bebc3999a5d19)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "HAL_PRIVATE_DISPATCH.HalProcessorFreeze", hal_processor_freeze, 0x1b80, 0x40, true, 0xb18b048cbe776aa4)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, struct nt::device_object_t*)>*), "HAL_PRIVATE_DISPATCH.HalDmaLinkDeviceObjectByToken", hal_dma_link_device_object_by_token, 0x1bc0, 0x40, true, 0xe0c3afa14832d693)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t)>*), "HAL_PRIVATE_DISPATCH.HalDmaCheckAdapterToken", hal_dma_check_adapter_token, 0x1c00, 0x40, true, 0x4bb6c82a5ef6afbd)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "HAL_PRIVATE_DISPATCH.Dummy4", dummy4, 0x1c40, 0x40, true, 0x539206f9ef7fda3c)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, uint64_t*, uint64_t*)>*), "HAL_PRIVATE_DISPATCH.HalTimerConvertPerformanceCounterToAuxiliaryCounter", hal_timer_convert_performance_counter_to_auxiliary_counter, 0x1c80, 0x40, true, 0x5107dd6b824c6e1d)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, uint64_t*, uint64_t*)>*), "HAL_PRIVATE_DISPATCH.HalTimerConvertAuxiliaryCounterToPerformanceCounter", hal_timer_convert_auxiliary_counter_to_performance_counter, 0x1cc0, 0x40, true, 0x7b2f79f86b279f01)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t*)>*), "HAL_PRIVATE_DISPATCH.HalTimerQueryAuxiliaryCounterFrequency", hal_timer_query_auxiliary_counter_frequency, 0x1d00, 0x40, true, 0x70b936cd866e3343)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<uint8_t(struct nt::kinterrupt_t*, void*)>*)>*), "HAL_PRIVATE_DISPATCH.HalConnectThermalInterrupt", hal_connect_thermal_interrupt, 0x1d40, 0x40, true, 0x61fe5bc21a8995be)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t()>*), "HAL_PRIVATE_DISPATCH.HalIsEFIRuntimeActive", hal_is_efi_runtime_active, 0x1d80, 0x40, true, 0x33d94e4d90b14f16)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(uint8_t)>*), "HAL_PRIVATE_DISPATCH.HalTimerQueryAndResetRtcErrors", hal_timer_query_and_reset_rtc_errors, 0x1dc0, 0x40, true, 0x425fccd11fcb5ce7)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "HAL_PRIVATE_DISPATCH.HalAcpiLateRestore", hal_acpi_late_restore, 0x1e00, 0x40, true, 0xbd9804709faf47e8)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t*)>*), "HAL_PRIVATE_DISPATCH.KdWatchdogDelayExpiration", kd_watchdog_delay_expiration, 0x1e40, 0x40, true, 0x6ed9277ca48b8268)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(enum hal::processor_stat_type_t, uint32_t, uint32_t, uint64_t*)>*), "HAL_PRIVATE_DISPATCH.HalGetProcessorStats", hal_get_processor_stats, 0x1e80, 0x40, true, 0xf933c6f81ab0c019)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<uint64_t()>*, sdk::function<uint64_t(uint8_t)>*>), "HAL_PRIVATE_DISPATCH.HalTimerWatchdogQueryDueTime", hal_timer_watchdog_query_due_time, 0x1ec0, 0x40, true, 0xe9deab2e8a8c15a4)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<uint8_t(struct nt::kinterrupt_t*, void*)>*)>*), "HAL_PRIVATE_DISPATCH.HalConnectSyntheticInterrupt", hal_connect_synthetic_interrupt, 0x1f00, 0x40, true, 0xa6adc442285a783)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalPreprocessNmi", hal_preprocess_nmi, 0x1f40, 0x40, true, 0xd5146f3e34aaa054)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, sdk::function<uint8_t(const struct nt::guid_t*, const wchar_t*)>*, void*, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalEnumerateEnvironmentVariablesWithFilter", hal_enumerate_environment_variables_with_filter, 0x1f80, 0x40, true, 0xa9d887b43d62a929)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, struct hal::lbr_entry_t*, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalCaptureLastBranchRecordStack", hal_capture_last_branch_record_stack, 0x1fc0, 0x40, true, 0xf2a2d0ce3ea7bca8)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t()>*), "HAL_PRIVATE_DISPATCH.HalClearLastBranchRecordStack", hal_clear_last_branch_record_stack, 0x2000, 0x40, true, 0xa8bb123ac9fa6c2d)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalConfigureLastBranchRecord", hal_configure_last_branch_record, 0x2040, 0x40, true, 0x427bb1ecc4b30cc5)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t*, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalGetLastBranchInformation", hal_get_last_branch_information, 0x2080, 0x40, true, 0x12dd71f052c478fc)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t)>*), "HAL_PRIVATE_DISPATCH.HalResumeLastBranchRecord", hal_resume_last_branch_record, 0x20c0, 0x40, true, 0x784b0ff78c670532)
#define _m132 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalStartLastBranchRecord", hal_start_last_branch_record, 0x2100, 0x40, true, 0xe365e195dfc5905)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalStopLastBranchRecord", hal_stop_last_branch_record, 0x2140, 0x40, true, 0x4b1e2f2fbb89cf77)
#define _m134 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(void*)>*, sdk::function<int32_t(struct nt::iommu_dma_device_t*)>*>), "HAL_PRIVATE_DISPATCH.HalIommuBlockDevice", hal_iommu_block_device, 0x2180, 0x40, true, 0x7db745a44299519e)
#define _m135 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(struct ext::iommu_device_id_t*, void**)>*, sdk::function<int32_t(struct ext::iommu_device_id_t*, struct nt::device_object_t*, struct nt::iommu_dma_device_t**)>*>), "HAL_PRIVATE_DISPATCH.HalIommuUnblockDevice", hal_iommu_unblock_device, 0x21c0, 0x40, true, 0xdcfb7aad81ad5950)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, struct dma::iommu_interface_t*)>*), "HAL_PRIVATE_DISPATCH.HalGetIommuInterface", hal_get_iommu_interface, 0x2200, 0x40, true, 0xc0f0b11ed0bdd352)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalRequestGenericErrorRecovery", hal_request_generic_error_recovery, 0x2240, 0x40, true, 0xd0f3b2fecd76838)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t*)>*), "HAL_PRIVATE_DISPATCH.HalTimerQueryHostPerformanceCounter", hal_timer_query_host_performance_counter, 0x2280, 0x40, true, 0xd5a1b80a0d9b7a2)
#define _m139 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, uint8_t*, uint8_t*, uint8_t*, uint32_t*, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalTopologyQueryProcessorRelationships", hal_topology_query_processor_relationships, 0x22c0, 0x40, true, 0x3bbcbf56654199c3)
#define _m140 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "HAL_PRIVATE_DISPATCH.HalInitPlatformDebugTriggers", hal_init_platform_debug_triggers, 0x2300, 0x40, true, 0xaf9187e1ab3d6347)
#define _m141 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t)>*), "HAL_PRIVATE_DISPATCH.HalRunPlatformDebugTriggers", hal_run_platform_debug_triggers, 0x2340, 0x40, true, 0xf55838df6f882d86)
#define _m142 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*()>*), "HAL_PRIVATE_DISPATCH.HalTimerGetReferencePage", hal_timer_get_reference_page, 0x2380, 0x40, true, 0x6cfedc843bb80bb1)
#define _m143 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::hidden_processor_power_interface_t*)>*), "HAL_PRIVATE_DISPATCH.HalGetHiddenProcessorPowerInterface", hal_get_hidden_processor_power_interface, 0x23c0, 0x40, true, 0x585ef1a2f15f1078)
#define _m144 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalGetHiddenProcessorPackageId", hal_get_hidden_processor_package_id, 0x2400, 0x40, true, 0xaa2fc30e44dc9bbd)
#define _m145 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t)>*), "HAL_PRIVATE_DISPATCH.HalGetHiddenPackageProcessorCount", hal_get_hidden_package_processor_count, 0x2440, 0x40, true, 0xcae69941d7cd461e)
#define _m146 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalGetHiddenProcessorApicIdByIndex", hal_get_hidden_processor_apic_id_by_index, 0x2480, 0x40, true, 0x883329632217edb8)
#define _m147 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint64_t)>*), "HAL_PRIVATE_DISPATCH.HalRegisterHiddenProcessorIdleState", hal_register_hidden_processor_idle_state, 0x24c0, 0x40, true, 0xc8cf93cad860de9f)
#define _m148 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, struct nt::fault_information_t*)>*), "HAL_PRIVATE_DISPATCH.HalIommuReportIommuFault", hal_iommu_report_iommu_fault, 0x2500, 0x40, true, 0xaf5ed10ee4d0eaa5)
#define _m149 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct ext::iommu_device_id_t*, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalIommuDmaRemappingCapable", hal_iommu_dma_remapping_capable, 0x2540, 0x40, true, 0xe344093d31174654)
#define _m150 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, enum nt::kprofile_source_t*, uint32_t, uint32_t*, struct hal::pmc_counters_t**, uint32_t*)>*), "HAL_PRIVATE_DISPATCH.HalAllocatePmcCounterSetEx", hal_allocate_pmc_counter_set_ex, 0x0, 0x0, false, 0x651aa262767f1aa1)
#define _m151 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(enum nt::kprofile_source_t, uint32_t*, uint32_t*, struct hal::pmc_counters_t**)>*), "HAL_PRIVATE_DISPATCH.HalStartProfileInterruptEx", hal_start_profile_interrupt_ex, 0x0, 0x0, false, 0x759e815be33790a7)
#define _m152 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint64_t, struct dma::iommu_interface_ex_t*)>*), "HAL_PRIVATE_DISPATCH.HalGetIommuInterfaceEx", hal_get_iommu_interface_ex, 0x0, 0x0, false, 0x51677b40f960f51f)
#define _m153 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*)>*), "HAL_PRIVATE_DISPATCH.HalNotifyIommuDomainPolicyChange", hal_notify_iommu_domain_policy_change, 0x0, 0x0, false, 0xb90664f1872df102)
#define _m154 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(uint64_t, uint16_t*, uint8_t*, uint8_t*, uint8_t*)>*), "HAL_PRIVATE_DISPATCH.HalPciGetDeviceLocationFromPhysicalAddress", hal_pci_get_device_location_from_physical_address, 0x0, 0x0, false, 0x626b2aed494b9567)
#define _m155 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t*, uint64_t*, uint64_t*, uint64_t*)>*), "HAL_PRIVATE_DISPATCH.HalInvokeSmc", hal_invoke_smc, 0x0, 0x0, false, 0x26c1d2d0605e825e)
#define _m156 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t*, uint64_t*, uint64_t*, uint64_t*)>*), "HAL_PRIVATE_DISPATCH.HalInvokeHvc", hal_invoke_hvc, 0x0, 0x0, false, 0x45438bce1289f00a)
#define _m157 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int64_t()>*), "HAL_PRIVATE_DISPATCH.HalGetSoftRebootDatabase", hal_get_soft_reboot_database, 0x0, 0x0, false, 0x52a353df89fbd0ac)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m080
#define _m081
#define _m082
#define _m083
#define _m084
#define _m085
#define _m086
#define _m087
#define _m088
#define _m089
#define _m090
#define _m091
#define _m092
#define _m093
#define _m094
#define _m095
#define _m096
#define _m097
#define _m098
#define _m099
#define _m100
#define _m101
#define _m102
#define _m103
#define _m104
#define _m105
#define _m106
#define _m107
#define _m108
#define _m109
#define _m110
#define _m111
#define _m112
#define _m113
#define _m114
#define _m115
#define _m116
#define _m117
#define _m118
#define _m119
#define _m120
#define _m121
#define _m122
#define _m123
#define _m124
#define _m125
#define _m126
#define _m127
#define _m128
#define _m129
#define _m130
#define _m131
#define _m132
#define _m133
#define _m134
#define _m135
#define _m136
#define _m137
#define _m138
#define _m139
#define _m140
#define _m141
#define _m142
#define _m143
#define _m144
#define _m145
#define _m146
#define _m147
#define _m148
#define _m149
#define _m150
#define _m151
#define _m152
#define _m153
#define _m154
#define _m155
#define _m156
#define _m157
#endif