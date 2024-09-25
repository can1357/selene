#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB.InheritedAddressSpace", inherited_address_space, 0x0, 0x8, true, 0x242d3a5e9e8808cc)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB.ReadImageFileExecOptions", read_image_file_exec_options, 0x8, 0x8, true, 0x6717cf74083a6f05)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB.BeingDebugged", being_debugged, 0x10, 0x8, true, 0x8d848b096b1a6216)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB.BitField", bit_field, 0x18, 0x8, true, 0xf06b513561b825fd)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.ImageUsesLargePages", image_uses_large_pages, 0x18, 0x1, true, 0x9f9e2c7b2a40203b, 1, uint8_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.IsProtectedProcess", is_protected_process, 0x19, 0x1, true, 0xdcc05ea4d79688ce, 1, uint8_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.IsImageDynamicallyRelocated", is_image_dynamically_relocated, 0x1a, 0x1, true, 0x118ec5d984bcc70, 1, uint8_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.SkipPatchingUser32Forwarders", skip_patching_user32_forwarders, 0x1b, 0x1, true, 0xa34744109077ce28, 1, uint8_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.IsPackagedProcess", is_packaged_process, 0x1c, 0x1, true, 0x4097779c2a6b9a95, 1, uint8_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.IsAppContainer", is_app_container, 0x1d, 0x1, true, 0x223c023aa3feff05, 1, uint8_t)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.IsProtectedProcessLight", is_protected_process_light, 0x1e, 0x1, true, 0x44c9a67a88839f99, 1, uint8_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.IsLongPathAwareProcess", is_long_path_aware_process, 0x1f, 0x1, true, 0x36e57c1a8a330502, 1, uint8_t)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.Mutant", mutant, 0x40, 0x40, true, 0x95b15a644080ce83)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.ImageBaseAddress", image_base_address, 0x80, 0x40, true, 0xc142a085043f1532)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::peb_ldr_data_t*), "_PEB.Ldr", ldr, 0xc0, 0x40, true, 0x31597863b210b34a)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::user_process_parameters_t*), "_PEB.ProcessParameters", process_parameters, 0x100, 0x40, true, 0x45b8797abc34263d)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.SubSystemData", sub_system_data, 0x140, 0x40, true, 0x9849e2b9761a32e)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.ProcessHeap", process_heap, 0x180, 0x40, true, 0xbed45f5fd1ee2bc0)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t*), "_PEB.FastPebLock", fast_peb_lock, 0x1c0, 0x40, true, 0xac4e9d1e4a4ad452)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t*), "_PEB.AtlThunkSListPtr", atl_thunk_s_list_ptr, 0x200, 0x40, true, 0xf38317c866687f76)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.IFEOKey", ifeo_key, 0x240, 0x40, true, 0xdcb4255036928b76)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.CrossProcessFlags", cross_process_flags, 0x280, 0x20, true, 0x123f89590ea02d02)
#define _m022 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.ProcessInJob", process_in_job, 0x280, 0x1, true, 0xa2ccfbe6b3f87c47, 1, uint32_t)
#define _m023 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.ProcessInitializing", process_initializing, 0x281, 0x1, true, 0x94e63a9692d96c3c, 1, uint32_t)
#define _m024 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.ProcessUsingVEH", process_using_veh, 0x282, 0x1, true, 0xb150dc73b422deb6, 1, uint32_t)
#define _m025 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.ProcessUsingVCH", process_using_vch, 0x283, 0x1, true, 0x74af6ea5c31a575d, 1, uint32_t)
#define _m026 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.ProcessUsingFTH", process_using_fth, 0x284, 0x1, true, 0x77d9e3f33cc761eb, 1, uint32_t)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.KernelCallbackTable", kernel_callback_table, 0x2c0, 0x40, true, 0x80ff0be42beebcbe)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.UserSharedInfoPtr", user_shared_info_ptr, 0x2c0, 0x40, true, 0x462d2f95d2129397)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<uint32_t, sdk::array<uint32_t, 1>>), "_PEB.SystemReserved", system_reserved, 0x300, 0x20, true, 0xd15969583943f9e8)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.AtlThunkSListPtr32", atl_thunk_s_list_ptr32, 0x320, 0x20, true, 0xec0df177d47f03f9)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::api_set_namespace_t*, void*>), "_PEB.ApiSetMap", api_set_map, 0x340, 0x40, true, 0x6fef2e104a7ab888)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.TlsExpansionCounter", tls_expansion_counter, 0x380, 0x20, true, 0xe0943cd8cb3081c3)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct rtl::bitmap_t*>), "_PEB.TlsBitmap", tls_bitmap, 0x3c0, 0x40, true, 0x4099e2be9834445e)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_PEB.TlsBitmapBits", tls_bitmap_bits, 0x400, 0x40, true, 0x55f7844187155fad)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.ReadOnlySharedMemoryBase", read_only_shared_memory_base, 0x440, 0x40, true, 0x870c7a5c2f675998)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void**), "_PEB.ReadOnlyStaticServerData", read_only_static_server_data, 0x4c0, 0x40, true, 0xc27911ae7d1e87a1)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.AnsiCodePageData", ansi_code_page_data, 0x500, 0x40, true, 0xfada03e51d8491ba)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.OemCodePageData", oem_code_page_data, 0x540, 0x40, true, 0xa56280dda639761e)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.UnicodeCaseTableData", unicode_case_table_data, 0x580, 0x40, true, 0x62f8287441e0bd73)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.NumberOfProcessors", number_of_processors, 0x5c0, 0x20, true, 0x5e99ae55531012d4)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.NtGlobalFlag", nt_global_flag, 0x5e0, 0x20, true, 0xfef5db81f9f640a4)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB.CriticalSectionTimeout", critical_section_timeout, 0x600, 0x40, true, 0xb84083c657b67fc2)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB.HeapSegmentReserve", heap_segment_reserve, 0x640, 0x40, true, 0xfad9137684523911)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB.HeapSegmentCommit", heap_segment_commit, 0x680, 0x40, true, 0x28634ff682d2053d)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB.HeapDeCommitTotalFreeThreshold", heap_de_commit_total_free_threshold, 0x6c0, 0x40, true, 0xcaa0574bb3e944a2)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB.HeapDeCommitFreeBlockThreshold", heap_de_commit_free_block_threshold, 0x700, 0x40, true, 0x8d4495a0e32fea9d)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.NumberOfHeaps", number_of_heaps, 0x740, 0x20, true, 0x84b9a7dd5bed4cb5)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.MaximumNumberOfHeaps", maximum_number_of_heaps, 0x760, 0x20, true, 0x41029110f57008a0)
#define _m049 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void**), "_PEB.ProcessHeaps", process_heaps, 0x780, 0x40, true, 0xbb18c9a2d613e482)
#define _m050 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.GdiSharedHandleTable", gdi_shared_handle_table, 0x7c0, 0x40, true, 0x919b73a66ae86040)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.ProcessStarterHelper", process_starter_helper, 0x800, 0x40, true, 0x51b1228480705fd0)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.GdiDCAttributeList", gdi_dc_attribute_list, 0x840, 0x20, true, 0xca0dbc7a6c02aa32)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t*), "_PEB.LoaderLock", loader_lock, 0x880, 0x40, true, 0xfe58d5eea0fff1f2)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.OSMajorVersion", os_major_version, 0x8c0, 0x20, true, 0x1938a181d5a8202a)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.OSMinorVersion", os_minor_version, 0x8e0, 0x20, true, 0xecaa0aafe78582d6)
#define _m056 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB.OSBuildNumber", os_build_number, 0x900, 0x10, true, 0xc497f842fafc6666)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB.OSCSDVersion", oscsd_version, 0x910, 0x10, true, 0x24cbc2c32d9f6c57)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.OSPlatformId", os_platform_id, 0x920, 0x20, true, 0x8a105e68a1e78276)
#define _m059 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.ImageSubsystem", image_subsystem, 0x940, 0x20, true, 0x7dcf22fa04a7a396)
#define _m060 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.ImageSubsystemMajorVersion", image_subsystem_major_version, 0x960, 0x20, true, 0xaafd4098fc9796bb)
#define _m061 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.ImageSubsystemMinorVersion", image_subsystem_minor_version, 0x980, 0x20, true, 0xaf043b457a22e5d4)
#define _m062 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB.ActiveProcessAffinityMask", active_process_affinity_mask, 0x9c0, 0x40, true, 0xdf24a4eb6d07a135)
#define _m063 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 60>), "_PEB.GdiHandleBuffer", gdi_handle_buffer, 0xa00, 0x80, true, 0x1d26c887970709ed)
#define _m064 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, sdk::function<void()>*>), "_PEB.PostProcessInitRoutine", post_process_init_routine, 0x1180, 0x40, true, 0x824884731a827905)
#define _m065 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct rtl::bitmap_t*>), "_PEB.TlsExpansionBitmap", tls_expansion_bitmap, 0x11c0, 0x40, true, 0xaac925f1375f49dd)
#define _m066 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 32>), "_PEB.TlsExpansionBitmapBits", tls_expansion_bitmap_bits, 0x1200, 0x0, true, 0x6cca322868f16a2f)
#define _m067 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.SessionId", session_id, 0x1600, 0x20, true, 0x82dbe96ee26a6d64)
#define _m068 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB.AppCompatFlags", app_compat_flags, 0x1640, 0x40, true, 0x605fa7ce3cbbd390)
#define _m069 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB.AppCompatFlagsUser", app_compat_flags_user, 0x1680, 0x40, true, 0x2fd8b3f37d686048)
#define _m070 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.pShimData", p_shim_data, 0x16c0, 0x40, true, 0xba91241a70f2192a)
#define _m071 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.AppCompatInfo", app_compat_info, 0x1700, 0x40, true, 0x1ee157d31c1dfc5c)
#define _m072 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PEB.CSDVersion", csd_version, 0x1740, 0x80, true, 0x8b01e59903b14368)
#define _m073 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, const struct win::activation_context_data_t*>), "_PEB.ActivationContextData", activation_context_data, 0x17c0, 0x40, true, 0x744d0fe7a6807b53)
#define _m074 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct nt::assembly_storage_map_t*>), "_PEB.ProcessAssemblyStorageMap", process_assembly_storage_map, 0x1800, 0x40, true, 0xd7005ec2895f59b9)
#define _m075 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, const struct win::activation_context_data_t*>), "_PEB.SystemDefaultActivationContextData", system_default_activation_context_data, 0x1840, 0x40, true, 0xb0f4d2ad56790e62)
#define _m076 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct nt::assembly_storage_map_t*>), "_PEB.SystemAssemblyStorageMap", system_assembly_storage_map, 0x1880, 0x40, true, 0xccd186f5893d72f9)
#define _m077 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB.MinimumStackCommit", minimum_stack_commit, 0x18c0, 0x40, true, 0x67c8a309ab806ddd)
#define _m078 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.WerRegistrationData", wer_registration_data, 0x1ac0, 0x40, true, 0x2c6fe1686812c51b)
#define _m079 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.WerShipAssertPtr", wer_ship_assert_ptr, 0x1b00, 0x40, true, 0x7e137c4b54fd1a88)
#define _m080 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.pImageHeaderHash", p_image_header_hash, 0x1b80, 0x40, true, 0x6155e02ff528c1fa)
#define _m081 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.TracingFlags", tracing_flags, 0x1bc0, 0x20, true, 0x8e1eb3e6b59b5994)
#define _m082 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.HeapTracingEnabled", heap_tracing_enabled, 0x1bc0, 0x1, true, 0xb83df90a2dea4e89, 1, uint32_t)
#define _m083 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.CritSecTracingEnabled", crit_sec_tracing_enabled, 0x1bc1, 0x1, true, 0x6746ce7523b48cf3, 1, uint32_t)
#define _m084 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.LibLoaderTracingEnabled", lib_loader_tracing_enabled, 0x1bc2, 0x1, true, 0x8e700040cfd9cc2e, 1, uint32_t)
#define _m085 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint29_t), "_PEB.SpareTracingBits", spare_tracing_bits, 0x1bc3, 0x1d, true, 0x631ca9d198535a9f, 29, uint32_t)
#define _m086 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB.CsrServerReadOnlySharedMemoryBase", csr_server_read_only_shared_memory_base, 0x1c00, 0x40, true, 0x6ce95f5e8208d3e7)
#define _m087 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<struct rtl::critical_section_t*, uint64_t>), "_PEB.TppWorkerpListLock", tpp_workerp_list_lock, 0x1c40, 0x40, true, 0x6f88655aaceda997)
#define _m088 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PEB.TppWorkerpList", tpp_workerp_list, 0x1c80, 0x80, true, 0xdf91ea3bb3d47fa1)
#define _m089 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 128>), "_PEB.WaitOnAddressHashTable", wait_on_address_hash_table, 0x1d00, 0x0, true, 0xf8ec18c55122877)
#define _m090 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.ProcessPreviouslyThrottled", process_previously_throttled, 0x285, 0x1, true, 0xd0d999500510f9a8, 1, uint32_t)
#define _m091 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.ProcessCurrentlyThrottled", process_currently_throttled, 0x286, 0x1, true, 0x988699e9a40ca5b6, 1, uint32_t)
#define _m092 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.ProcessImagesHotPatched", process_images_hot_patched, 0x287, 0x1, true, 0xb900abb307656346, 1, uint32_t)
#define _m093 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB.SharedData", shared_data, 0x480, 0x40, true, 0x3387a035f78871ae)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 5>), "_PEB.SpareUlongs", spare_ulongs, 0x1a00, 0xa0, true, 0xb8efdb175419fe1d)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PEB.TelemetryCoverageHeader", telemetry_coverage_header, 0x3d00, 0x40, true, 0x5b211f4f5459a95d)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.CloudFileFlags", cloud_file_flags, 0x3d40, 0x20, true, 0x299cf910fe8593f9)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.CloudFileDiagFlags", cloud_file_diag_flags, 0x3d60, 0x20, true, 0x5d5947340f0343f)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_PEB.PlaceholderCompatibilityMode", placeholder_compatibility_mode, 0x3d80, 0x8, true, 0x2ccfe6873bc874bb)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 7>), "_PEB.PlaceholderCompatibilityModeReserved", placeholder_compatibility_mode_reserved, 0x3d88, 0x38, true, 0x9f46e9286bb0fa44)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::leap_second_data_t*), "_PEB.LeapSecondData", leap_second_data, 0x3dc0, 0x40, true, 0xa8510157e65ff6d)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.LeapSecondFlags", leap_second_flags, 0x3e00, 0x20, true, 0x26a04decca329339)
#define _m102 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB.SixtySecondEnabled", sixty_second_enabled, 0x3e00, 0x1, true, 0x8a9e298d045b6cca, 1, uint32_t)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.NtGlobalFlag2", nt_global_flag2, 0x3e20, 0x20, true, 0x20894c0a6f575ba6)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PEB.PatchLoaderData", patch_loader_data, 0x0, 0x0, false, 0x1ab4df4816300134)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::chpev2_process_info_t*), "_PEB.ChpeV2ProcessInfo", chpe_v2_process_info, 0x0, 0x0, false, 0x995d0eefb04a52f4)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.AppModelFeatureState", app_model_feature_state, 0x0, 0x0, false, 0x46184b333e344cd4)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB.ActiveCodePage", active_code_page, 0x0, 0x0, false, 0x61c686cb411e1299)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB.OemCodePage", oem_code_page, 0x0, 0x0, false, 0x29f795d727ab6293)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB.UseCaseMapping", use_case_mapping, 0x0, 0x0, false, 0xf049112b6c0c0b0f)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB.UnusedNlsField", unused_nls_field, 0x0, 0x0, false, 0x1eb32ee8b6d34d77)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PEB.EcCodeBitMap", ec_code_bit_map, 0x0, 0x0, false, 0xd2204d117e003304)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB.ExtendedFeatureDisableMask", extended_feature_disable_mask, 0x0, 0x0, false, 0x96c73feb0565ae98)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PEB.SparePvoid0", spare_pvoid0, 0x0, 0x0, false, 0xca6ba0f5f5b0d10d)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fls_callback_info_t*), "_PEB.FlsCallback", fls_callback, 0x0, 0x0, false, 0xb01a902ac6f52eee)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PEB.FlsListHead", fls_list_head, 0x0, 0x0, false, 0x81f3c2ca3f30a6ec)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PEB.FlsBitmap", fls_bitmap, 0x0, 0x0, false, 0x810ebbbdd2799d08)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_PEB.FlsBitmapBits", fls_bitmap_bits, 0x0, 0x0, false, 0x6bf50d22251a5ca)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB.FlsHighIndex", fls_high_index, 0x0, 0x0, false, 0x5c49186c418fd164)
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
#endif