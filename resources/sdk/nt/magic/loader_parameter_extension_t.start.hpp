#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.Size", size, 0x0, 0x20, true, 0x17d0fb4ba38816)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::profile_parameter_block_t), "_LOADER_PARAMETER_EXTENSION.Profile", profile, 0x20, 0x80, true, 0x649379e3da0a55e2)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.EmInfFileImage", em_inf_file_image, 0xc0, 0x40, true, 0x2ce344f23f5bc039)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.EmInfFileSize", em_inf_file_size, 0x100, 0x20, true, 0xc79e17a5466fd65d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.TriageDumpBlock", triage_dump_block, 0x140, 0x40, true, 0xacc63855548529f5)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::headless_loader_block_t*), "_LOADER_PARAMETER_EXTENSION.HeadlessLoaderBlock", headless_loader_block, 0x180, 0x40, true, 0xa929aaece406db6)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::smbios3_table_header_t*), "_LOADER_PARAMETER_EXTENSION.SMBiosEPSHeader", sm_bios_eps_header, 0x1c0, 0x40, true, 0x798e3e8ab94d52a1)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.DrvDBImage", drv_db_image, 0x200, 0x40, true, 0xe06d13add632890b)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.DrvDBSize", drv_db_size, 0x240, 0x20, true, 0x9bbae0cb7cba66cd)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.DrvDBPatchImage", drv_db_patch_image, 0x280, 0x40, true, 0xd398656eca9c2120)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.DrvDBPatchSize", drv_db_patch_size, 0x2c0, 0x20, true, 0x455c7fb4ab16c0ec)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::network_loader_block_t*), "_LOADER_PARAMETER_EXTENSION.NetworkLoaderBlock", network_loader_block, 0x300, 0x40, true, 0xf053063efd130d2f)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_EXTENSION.FirmwareDescriptorListHead", firmware_descriptor_list_head, 0x340, 0x80, true, 0xc39c061db594ef35)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.AcpiTable", acpi_table, 0x3c0, 0x40, true, 0x5834ae1d8529317)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.AcpiTableSize", acpi_table_size, 0x400, 0x20, true, 0xb743490e02d1e8ab)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.LastBootSucceeded", last_boot_succeeded, 0x420, 0x1, true, 0x97adef2f2751ff48, 1, uint32_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.LastBootShutdown", last_boot_shutdown, 0x421, 0x1, true, 0x81aeb8aab6521a68, 1, uint32_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.IoPortAccessSupported", io_port_access_supported, 0x422, 0x1, true, 0x6ed16e9b9b1dfec1, 1, uint32_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.BootDebuggerActive", boot_debugger_active, 0x423, 0x1, true, 0xf2de5e3b1316cdf0, 1, uint32_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.StrongCodeGuarantees", strong_code_guarantees, 0x424, 0x1, true, 0xab09ac76b1ff8511, 1, uint32_t)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.HardStrongCodeGuarantees", hard_strong_code_guarantees, 0x425, 0x1, true, 0x4945b9ec7c89b340, 1, uint32_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.SidSharingDisabled", sid_sharing_disabled, 0x426, 0x1, true, 0x9ccb32eaec87c2f4, 1, uint32_t)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.TpmInitialized", tpm_initialized, 0x427, 0x1, true, 0x308622b04ee1f9d7, 1, uint32_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.VsmConfigured", vsm_configured, 0x428, 0x1, true, 0xb2058130cc80bc32, 1, uint32_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.IumEnabled", ium_enabled, 0x429, 0x1, true, 0xd81a682501786f14, 1, uint32_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.IsSmbboot", is_smbboot, 0x42a, 0x1, true, 0xcc1861e4d9d9adf3, 1, uint32_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.BootLogEnabled", boot_log_enabled, 0x42b, 0x1, true, 0x1b2b70412a18aebc, 1, uint32_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.DriverVerifierEnabled", driver_verifier_enabled, 0x42c, 0x1, true, 0x5fca649f8bdc0860, 1, uint32_t)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.SuppressMonitorX", suppress_monitor_x, 0x42d, 0x1, true, 0x9a33d24b495c7d06, 1, uint32_t)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.KernelCetEnabled", kernel_cet_enabled, 0x42e, 0x1, true, 0x90e5d03abe3c35bf, 1, uint32_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.SuppressSmap", suppress_smap, 0x42f, 0x1, true, 0xd216e4dd1ca85ed1, 1, uint32_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_LOADER_PARAMETER_EXTENSION.FeatureSimulations", feature_simulations, 0x435, 0x6, true, 0xc7d20214b317227a, 6, uint32_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.MicrocodeSelfHosting", microcode_self_hosting, 0x43b, 0x1, true, 0xb440f0195bb2afe7, 1, uint32_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.XhciLegacyHandoffSkip", xhci_legacy_handoff_skip, 0x43c, 0x1, true, 0x793f3dd0481db62e, 1, uint32_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.DisableInsiderOptInHVCI", disable_insider_opt_in_hvci, 0x43d, 0x1, true, 0x24e299a7f305dcd5, 1, uint32_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.MicrocodeMinVerSupported", microcode_min_ver_supported, 0x43e, 0x1, true, 0xb36beb5bb7e8b98b, 1, uint32_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.GpuIommuEnabled", gpu_iommu_enabled, 0x43f, 0x1, true, 0x3d6740254904c31a, 1, uint32_t)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::loader_performance_data_t), "_LOADER_PARAMETER_EXTENSION.LoaderPerformanceData", loader_performance_data, 0x440, 0x0, true, 0x5e27c420495427b4)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_EXTENSION.BootApplicationPersistentData", boot_application_persistent_data, 0x740, 0x80, true, 0x4f8b2a6248ef667)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.WmdTestResult", wmd_test_result, 0x7c0, 0x40, true, 0xd78853456be7bf2e)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_LOADER_PARAMETER_EXTENSION.BootIdentifier", boot_identifier, 0x800, 0x80, true, 0x3e4ea2a985fa8b4)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.ResumePages", resume_pages, 0x880, 0x20, true, 0x32d7bf8173bac7e5)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.DumpHeader", dump_header, 0x8c0, 0x40, true, 0x6347e54da529d68a)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.BgContext", bg_context, 0x900, 0x40, true, 0x435890f8f94e4fcc)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.NumaLocalityInfo", numa_locality_info, 0x940, 0x40, true, 0xaa1dc96900a23609)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.NumaGroupAssignment", numa_group_assignment, 0x980, 0x40, true, 0xeaae14a44478af1e)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_EXTENSION.AttachedHives", attached_hives, 0x9c0, 0x80, true, 0xfc5b0c0466ae7015)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.MemoryCachingRequirementsCount", memory_caching_requirements_count, 0xa40, 0x20, true, 0x5f04365ea128df41)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.MemoryCachingRequirements", memory_caching_requirements, 0xa80, 0x40, true, 0x4ce0667c44458843)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct boot::entropy_ldr_result_t), "_LOADER_PARAMETER_EXTENSION.BootEntropyResult", boot_entropy_result, 0xac0, 0x40, true, 0x77b99f9ee68cfc4)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_EXTENSION.ProcessorCounterFrequency", processor_counter_frequency, 0x4e00, 0x40, true, 0xfee0598f743b792b)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::loader_parameter_hypervisor_extension_t), "_LOADER_PARAMETER_EXTENSION.HypervisorExtension", hypervisor_extension, 0x4e40, 0x0, true, 0x26357264beb1cf79)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_LOADER_PARAMETER_EXTENSION.HardwareConfigurationId", hardware_configuration_id, 0x5040, 0x80, true, 0x3297e7b47d21a419)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_EXTENSION.HalExtensionModuleList", hal_extension_module_list, 0x50c0, 0x80, true, 0x511564108e8db5de)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_LOADER_PARAMETER_EXTENSION.SystemTime", system_time, 0x5140, 0x40, true, 0x943976882e4b61b4)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_EXTENSION.TimeStampAtSystemTimeRead", time_stamp_at_system_time_read, 0x5180, 0x40, true, 0xcbacd8d193c3ed5a)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_EXTENSION.BootFlags", boot_flags, 0x51c0, 0x40, true, 0x977aa14b4408f21d)
#define _m057 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.DbgMenuOsSelection", dbg_menu_os_selection, 0x51c0, 0x1, true, 0x7dcaf2b971e0de1b, 1, uint64_t)
#define _m058 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.DbgHiberBoot", dbg_hiber_boot, 0x51c1, 0x1, true, 0x822d1ab0e7d76c2b, 1, uint64_t)
#define _m059 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.DbgSoftRestart", dbg_soft_restart, 0x51c2, 0x1, true, 0xe0b51149cd197c02, 1, uint64_t)
#define _m060 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.DbgMeasuredLaunch", dbg_measured_launch, 0x51c3, 0x1, true, 0xd5edf90abe7d98ac, 1, uint64_t)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_EXTENSION.InternalBootFlags", internal_boot_flags, 0x5200, 0x40, true, 0x2f6694c56c617e90)
#define _m062 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.DbgUtcBootTime", dbg_utc_boot_time, 0x5200, 0x1, true, 0xea3beabd9d80e33, 1, uint64_t)
#define _m063 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.DbgRtcBootTime", dbg_rtc_boot_time, 0x5201, 0x1, true, 0x6264a4717bd8dfd6, 1, uint64_t)
#define _m064 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.DbgNoLegacyServices", dbg_no_legacy_services, 0x5202, 0x1, true, 0xff52ebc56cd048df, 1, uint64_t)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.WfsFPData", wfs_fp_data, 0x5240, 0x40, true, 0xf489c013354adc7f)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.WfsFPDataSize", wfs_fp_data_size, 0x5280, 0x20, true, 0xf99cd39776717af2)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::loader_bugcheck_parameters_t), "_LOADER_PARAMETER_EXTENSION.BugcheckParameters", bugcheck_parameters, 0x52c0, 0x40, true, 0x38f6f969a670dd38)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.ApiSetSchema", api_set_schema, 0x5400, 0x40, true, 0xefb4d4bcdbb9fba0)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.ApiSetSchemaSize", api_set_schema_size, 0x5440, 0x20, true, 0x74de32cc3412347a)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_EXTENSION.ApiSetSchemaExtensions", api_set_schema_extensions, 0x5480, 0x80, true, 0xa3a52c2d4581f2ed)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_LOADER_PARAMETER_EXTENSION.AcpiBiosVersion", acpi_bios_version, 0x5500, 0x80, true, 0x2632225ab398ef0c)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_LOADER_PARAMETER_EXTENSION.SmbiosVersion", smbios_version, 0x5580, 0x80, true, 0x9a0e6fe31ce834d8)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_LOADER_PARAMETER_EXTENSION.EfiVersion", efi_version, 0x5600, 0x80, true, 0xb869baf5bfdb595f)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::debug_device_descriptor_t*), "_LOADER_PARAMETER_EXTENSION.KdDebugDevice", kd_debug_device, 0x5680, 0x40, true, 0xde499c12963eede9)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::offline_crashdump_configuration_table_v2_t), "_LOADER_PARAMETER_EXTENSION.OfflineCrashdumpConfigurationTable", offline_crashdump_configuration_table, 0x56c0, 0x0, true, 0xb3d6eb26daddc426)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_LOADER_PARAMETER_EXTENSION.ManufacturingProfile", manufacturing_profile, 0x57c0, 0x80, true, 0xfa71c6c61e1bf6ea)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.BbtBuffer", bbt_buffer, 0x5840, 0x40, true, 0x1e4f3b37ca49ad02)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_EXTENSION.XsaveAllowedFeatures", xsave_allowed_features, 0x5880, 0x40, true, 0xa8fae01dcff7aadf)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.XsaveFlags", xsave_flags, 0x58c0, 0x20, true, 0x96ebfed616f2a980)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.BootOptions", boot_options, 0x5900, 0x40, true, 0xf5ca8692078e6ca3)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.IumEnablement", ium_enablement, 0x5940, 0x20, true, 0x9d6b68081046b59)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.IumPolicy", ium_policy, 0x5960, 0x20, true, 0x4d360b57af341605)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_LOADER_PARAMETER_EXTENSION.IumStatus", ium_status, 0x5980, 0x20, true, 0xe43500a25a7af32)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.BootId", boot_id, 0x59a0, 0x20, true, 0x1f89b089caa3597d)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::loader_parameter_ci_extension_t*), "_LOADER_PARAMETER_EXTENSION.CodeIntegrityData", code_integrity_data, 0x59c0, 0x40, true, 0x6b932982279119cb)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.CodeIntegrityDataSize", code_integrity_data_size, 0x5a00, 0x20, true, 0x7f74f0179db804c4)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::loader_hive_recovery_info_t), "_LOADER_PARAMETER_EXTENSION.SystemHiveRecoveryInfo", system_hive_recovery_info, 0x5a20, 0xa0, true, 0xe415ae44b2a767ed)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.SoftRestartCount", soft_restart_count, 0x5ac0, 0x20, true, 0x4e2b4a8a6b75500a)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_LOADER_PARAMETER_EXTENSION.SoftRestartTime", soft_restart_time, 0x5b00, 0x40, true, 0xdc99f5a840113134)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.HypercallCodeVa", hypercall_code_va, 0x5b40, 0x40, true, 0xdf8e85a1f2a22c24)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.HalVirtualAddress", hal_virtual_address, 0x5b80, 0x40, true, 0x9f0a1234a98d9999)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_EXTENSION.HalNumberOfBytes", hal_number_of_bytes, 0x5bc0, 0x40, true, 0x94ca5ce49d4bf3e3)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::leap_second_data_t*), "_LOADER_PARAMETER_EXTENSION.LeapSecondData", leap_second_data, 0x5c00, 0x40, true, 0x4830badcc4cef3a0)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.MajorRelease", major_release, 0x5c40, 0x20, true, 0xd7c30a389b236bf4)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 224>), "_LOADER_PARAMETER_EXTENSION.NtBuildLab", nt_build_lab, 0x5c80, 0x0, true, 0x1cda3a45e5189e04)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 224>), "_LOADER_PARAMETER_EXTENSION.NtBuildLabEx", nt_build_lab_ex, 0x6380, 0x0, true, 0x99194a4eb359116f)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::loader_reset_reason_t), "_LOADER_PARAMETER_EXTENSION.ResetReason", reset_reason, 0x6a80, 0x80, true, 0xcdf0825665a187f1)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.MaxPciBusNumber", max_pci_bus_number, 0x6c00, 0x20, true, 0x9caa0a9e4a1545a9)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.FeatureSettings", feature_settings, 0x6c20, 0x20, true, 0x4fd7949e55db6a3f)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.HotPatchReserveSize", hot_patch_reserve_size, 0x6c40, 0x20, true, 0x5ac61edcb56c59be)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.RetpolineReserveSize", retpoline_reserve_size, 0x6c60, 0x20, true, 0xc1f813d19f466d24)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_mini_executive_t), "_LOADER_PARAMETER_EXTENSION.MiniExecutive", mini_executive, 0x6c80, 0x80, true, 0x6d52b6a00dc98835)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::vsm_performance_data_t), "_LOADER_PARAMETER_EXTENSION.VsmPerformanceData", vsm_performance_data, 0x6d00, 0x0, true, 0xc7c1b8f5d4122ba6)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::numa_memory_range_t*), "_LOADER_PARAMETER_EXTENSION.NumaMemoryRanges", numa_memory_ranges, 0x6f00, 0x40, true, 0xbfa0da9cc83ccf3f)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.NumaMemoryRangeCount", numa_memory_range_count, 0x6f40, 0x20, true, 0xec362c00a497f71d)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.IommuFaultPolicy", iommu_fault_policy, 0x6f60, 0x20, true, 0xd574d322a96e0c67)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::loader_feature_configuration_information_t), "_LOADER_PARAMETER_EXTENSION.FeatureConfigurationInformation", feature_configuration_information, 0x6f80, 0x40, true, 0xa70d69506c00e6f5)
#define _m110 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.PointerAuthKernelIpEnabled", pointer_auth_kernel_ip_enabled, 0x0, 0x0, false, 0x548525c89fe11a05, 1, uint32_t)
#define _m111 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.SplitLargeNumaNodes", split_large_numa_nodes, 0x0, 0x0, false, 0xf1a14d100cf89d3e, 1, uint32_t)
#define _m112 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.KernelCetAuditModeEnabled", kernel_cet_audit_mode_enabled, 0x0, 0x0, false, 0x548c3dc605a22a16, 1, uint32_t)
#define _m113 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.VerboseSELEnabled", verbose_sel_enabled, 0x0, 0x0, false, 0xc320752485aa48ee, 1, uint32_t)
#define _m114 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.EarlyCrashDumpEnabled", early_crash_dump_enabled, 0x0, 0x0, false, 0x2b4206c681820af1, 1, uint32_t)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_EXTENSION.PrmUpdateModuleList", prm_update_module_list, 0x0, 0x0, false, 0x65f748285838b3f2)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_EXTENSION.PrmFirmwareModuleList", prm_firmware_module_list, 0x0, 0x0, false, 0xf4c6921000cf7319)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::boot_config_t), "_LOADER_PARAMETER_EXTENSION.EtwBootConfig", etw_boot_config, 0x0, 0x0, false, 0x2e82eb22eb196b78)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct boot::firmware_ramdisk_info_t*), "_LOADER_PARAMETER_EXTENSION.FwRamdiskInfo", fw_ramdisk_info, 0x0, 0x0, false, 0xfd8575b76a7af58b)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.IpmiHwContext", ipmi_hw_context, 0x0, 0x0, false, 0xe4b1512bf4c94116)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_EXTENSION.IdleThreadShadowStack", idle_thread_shadow_stack, 0x0, 0x0, false, 0xcda09faba29ce0cc)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_EXTENSION.TransitionShadowStack", transition_shadow_stack, 0x0, 0x0, false, 0x9f6493fec54f6d91)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_LOADER_PARAMETER_EXTENSION.IstShadowStacksTable", ist_shadow_stacks_table, 0x0, 0x0, false, 0xdfddc17ee1f4e5e7)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_LOADER_PARAMETER_EXTENSION.ReservedForKernelCet", reserved_for_kernel_cet, 0x0, 0x0, false, 0x67ea2152c8a6db3f)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::memory_mirroring_data_t*), "_LOADER_PARAMETER_EXTENSION.MirroringData", mirroring_data, 0x0, 0x0, false, 0xcbc2698787556706)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_LOADER_PARAMETER_EXTENSION.Luid", luid, 0x0, 0x0, false, 0x910773f1ceaf5c45)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_installed_memory_t), "_LOADER_PARAMETER_EXTENSION.InstalledMemory", installed_memory, 0x0, 0x0, false, 0xfb59a029f6e78649)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LOADER_PARAMETER_EXTENSION.HotPatchList", hot_patch_list, 0x0, 0x0, false, 0xa10981113d75208)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.BSPMicrocodeData", bsp_microcode_data, 0x0, 0x0, false, 0xd88b145185aa0343)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.BSPMicrocodeDataSize", bsp_microcode_data_size, 0x0, 0x0, false, 0x4041c199a029ec76)
#define _m135 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_cimfs_information_t), "_LOADER_PARAMETER_EXTENSION.CimfsInformation", cimfs_information, 0x0, 0x0, false, 0xb3290f2f6788d827)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_LOADER_PARAMETER_EXTENSION.HalSoftRebootDatabase", hal_soft_reboot_database, 0x0, 0x0, false, 0x3a10495efa0f0d7d)
#define _m137 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOADER_PARAMETER_EXTENSION.KasanEnabled", kasan_enabled, 0x0, 0x0, false, 0x469417a95b862bb8, 1, uint32_t)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_EXTENSION.PerformanceDataFrequency", performance_data_frequency, 0x0, 0x0, false, 0x919a5cbdc4687606)
#define _n02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOADER_PARAMETER_EXTENSION.MiniExecutive.CodeBase", code_base, 0x0, 0x40, true, 0xdc3eed1315aeaad4)
#define _n03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PARAMETER_EXTENSION.MiniExecutive.CodeSize", code_size, 0x40, 0x40, true, 0x97712cd5f09cbf4f)
#define _n26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::installed_memory_range_t*), "_LOADER_PARAMETER_EXTENSION.InstalledMemory.Ranges", ranges, 0x0, 0x0, false, 0x6beda345d6cd1619)
#define _n27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.InstalledMemory.RangeCount", range_count, 0x0, 0x0, false, 0x9ec6777c479dcc9b)
#define _n32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_LOADER_PARAMETER_EXTENSION.CimfsInformation.TargetVolume", target_volume, 0x0, 0x0, false, 0x21f4aaebc379473f)
#define _n33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_LOADER_PARAMETER_EXTENSION.CimfsInformation.CimFiles", cim_files, 0x0, 0x0, false, 0x4b7f39920e77872)
#define _n34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_PARAMETER_EXTENSION.CimfsInformation.CimFilesCount", cim_files_count, 0x0, 0x0, false, 0xc04331f9efdaecf0)
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
#define _m128
#define _m129
#define _m130
#define _m131
#define _m135
#define _m136
#define _m137
#define _m138
#define _n02
#define _n03
#define _n26
#define _n27
#define _n32
#define _n33
#define _n34
#endif