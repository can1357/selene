#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB32.InheritedAddressSpace", inherited_address_space, 0x0, 0x8, true, 0xa105d7d2c58afc5c)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB32.ReadImageFileExecOptions", read_image_file_exec_options, 0x8, 0x8, true, 0x721fd73ca8f73fb)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB32.BeingDebugged", being_debugged, 0x10, 0x8, true, 0xf6744d6dfe1f1226)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB32.BitField", bit_field, 0x18, 0x8, true, 0x8d0e83bd34480635)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.ImageUsesLargePages", image_uses_large_pages, 0x18, 0x1, true, 0xf502ad04a99df0d9, 1, uint8_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.IsProtectedProcess", is_protected_process, 0x19, 0x1, true, 0x65d0983bf2c436c8, 1, uint8_t)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.IsImageDynamicallyRelocated", is_image_dynamically_relocated, 0x1a, 0x1, true, 0x5b86c1620f6a0afb, 1, uint8_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.SkipPatchingUser32Forwarders", skip_patching_user32_forwarders, 0x1b, 0x1, true, 0x5e94bb2e2238ae0, 1, uint8_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.IsPackagedProcess", is_packaged_process, 0x1c, 0x1, true, 0x36397c3b5c901e71, 1, uint8_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.IsAppContainer", is_app_container, 0x1d, 0x1, true, 0x5e08b31f92310af7, 1, uint8_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.IsProtectedProcessLight", is_protected_process_light, 0x1e, 0x1, true, 0x6151eb90f5020c60, 1, uint8_t)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.IsLongPathAwareProcess", is_long_path_aware_process, 0x1f, 0x1, true, 0xb4c8c063b517ef6d, 1, uint8_t)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.Mutant", mutant, 0x20, 0x20, true, 0x11ae1268bf7a4ee8)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ImageBaseAddress", image_base_address, 0x40, 0x20, true, 0xc097aa60bafb472)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.Ldr", ldr, 0x60, 0x20, true, 0x4c2e3ec3649b28a7)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ProcessParameters", process_parameters, 0x80, 0x20, true, 0x694e67eafcbed863)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.SubSystemData", sub_system_data, 0xa0, 0x20, true, 0x2a4665adfa613bfa)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ProcessHeap", process_heap, 0xc0, 0x20, true, 0xf6a4a93a6c00da20)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.FastPebLock", fast_peb_lock, 0xe0, 0x20, true, 0xe02cd341cfd21597)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.AtlThunkSListPtr", atl_thunk_s_list_ptr, 0x100, 0x20, true, 0xd63fc55fc28058fc)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.IFEOKey", ifeo_key, 0x120, 0x20, true, 0xe4934e068ccbba0e)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.CrossProcessFlags", cross_process_flags, 0x140, 0x20, true, 0xe202d38893ef84fb)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.ProcessInJob", process_in_job, 0x140, 0x1, true, 0x97fb1591b3ee7753, 1, uint32_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.ProcessInitializing", process_initializing, 0x141, 0x1, true, 0xf91989f440a2a3f6, 1, uint32_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.ProcessUsingVEH", process_using_veh, 0x142, 0x1, true, 0x63383f1efdea0691, 1, uint32_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.ProcessUsingVCH", process_using_vch, 0x143, 0x1, true, 0xeb5c04bf8f15b2f1, 1, uint32_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.ProcessUsingFTH", process_using_fth, 0x144, 0x1, true, 0x9e2f868a5d528c0c, 1, uint32_t)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.KernelCallbackTable", kernel_callback_table, 0x160, 0x20, true, 0x881feabb4d795e14)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.UserSharedInfoPtr", user_shared_info_ptr, 0x160, 0x20, true, 0xce093dfc612995c9)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint32_t, 1>, uint32_t>), "_PEB32.SystemReserved", system_reserved, 0x180, 0x20, true, 0xf434405cdfc7819b)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.AtlThunkSListPtr32", atl_thunk_s_list_ptr32, 0x1a0, 0x20, true, 0xedd212f8fb425c66)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ApiSetMap", api_set_map, 0x1c0, 0x20, true, 0xa22c621dcd2d7810)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.TlsExpansionCounter", tls_expansion_counter, 0x1e0, 0x20, true, 0xde6b2dc5298d36ea)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.TlsBitmap", tls_bitmap, 0x200, 0x20, true, 0x776584a32256f62c)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_PEB32.TlsBitmapBits", tls_bitmap_bits, 0x220, 0x40, true, 0xbe084543f524c42b)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ReadOnlySharedMemoryBase", read_only_shared_memory_base, 0x260, 0x20, true, 0x9743ef414749963e)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ReadOnlyStaticServerData", read_only_static_server_data, 0x2a0, 0x20, true, 0xf1af996dd451188c)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.AnsiCodePageData", ansi_code_page_data, 0x2c0, 0x20, true, 0x7ad20afefab10e1d)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.OemCodePageData", oem_code_page_data, 0x2e0, 0x20, true, 0x6800d6150ae71821)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.UnicodeCaseTableData", unicode_case_table_data, 0x300, 0x20, true, 0xbb689d871d8f0911)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.NumberOfProcessors", number_of_processors, 0x320, 0x20, true, 0x694b70cb5cfa7111)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.NtGlobalFlag", nt_global_flag, 0x340, 0x20, true, 0xed1fd8e235fb6e8d)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PEB32.CriticalSectionTimeout", critical_section_timeout, 0x380, 0x40, true, 0xea7185189f5ddad9)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.HeapSegmentReserve", heap_segment_reserve, 0x3c0, 0x20, true, 0xc3faf82d4c84a9cc)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.HeapSegmentCommit", heap_segment_commit, 0x3e0, 0x20, true, 0xdc66fb65b3f35ec8)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.HeapDeCommitTotalFreeThreshold", heap_de_commit_total_free_threshold, 0x400, 0x20, true, 0x825c93ae50d0842e)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.HeapDeCommitFreeBlockThreshold", heap_de_commit_free_block_threshold, 0x420, 0x20, true, 0xde3baf738ab5c1d8)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.NumberOfHeaps", number_of_heaps, 0x440, 0x20, true, 0x6c324929e053ca90)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.MaximumNumberOfHeaps", maximum_number_of_heaps, 0x460, 0x20, true, 0xcf5573fe98ed751b)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ProcessHeaps", process_heaps, 0x480, 0x20, true, 0x163a819c391f14fc)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.GdiSharedHandleTable", gdi_shared_handle_table, 0x4a0, 0x20, true, 0x33b4676f865d2243)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ProcessStarterHelper", process_starter_helper, 0x4c0, 0x20, true, 0xb4974f26fddc303)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.GdiDCAttributeList", gdi_dc_attribute_list, 0x4e0, 0x20, true, 0xc37700ddb9ab6902)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.LoaderLock", loader_lock, 0x500, 0x20, true, 0x91d6441d4c6e850c)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.OSMajorVersion", os_major_version, 0x520, 0x20, true, 0xdd49cee6b82b4b91)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.OSMinorVersion", os_minor_version, 0x540, 0x20, true, 0xe652a3088ba281cf)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB32.OSBuildNumber", os_build_number, 0x560, 0x10, true, 0xb16298d6cf35feea)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB32.OSCSDVersion", oscsd_version, 0x570, 0x10, true, 0x9ab3497bf670aeba)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.OSPlatformId", os_platform_id, 0x580, 0x20, true, 0xf3f35f42e9930117)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ImageSubsystem", image_subsystem, 0x5a0, 0x20, true, 0x974eeb63a024021c)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ImageSubsystemMajorVersion", image_subsystem_major_version, 0x5c0, 0x20, true, 0x1dd828a53ae30c1d)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ImageSubsystemMinorVersion", image_subsystem_minor_version, 0x5e0, 0x20, true, 0xbd6ddfb86587d7aa)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ActiveProcessAffinityMask", active_process_affinity_mask, 0x600, 0x20, true, 0xcdf8a863ec81b8ab)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 34>), "_PEB32.GdiHandleBuffer", gdi_handle_buffer, 0x620, 0x40, true, 0x35e1598b922b77b4)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.PostProcessInitRoutine", post_process_init_routine, 0xa60, 0x20, true, 0x4d25f10a924caf18)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.TlsExpansionBitmap", tls_expansion_bitmap, 0xa80, 0x20, true, 0xddb5669ccafdc555)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 32>), "_PEB32.TlsExpansionBitmapBits", tls_expansion_bitmap_bits, 0xaa0, 0x0, true, 0xcf6377f6cc49d67d)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.SessionId", session_id, 0xea0, 0x20, true, 0x3f509e62d1642d7)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB32.AppCompatFlags", app_compat_flags, 0xec0, 0x40, true, 0xfbd80e6a8bd798de)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB32.AppCompatFlagsUser", app_compat_flags_user, 0xf00, 0x40, true, 0xfb658e29f1b8e976)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.pShimData", p_shim_data, 0xf40, 0x20, true, 0x6670847bd6213097)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.AppCompatInfo", app_compat_info, 0xf60, 0x20, true, 0x9d5f4827f65e4241)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view32), "_PEB32.CSDVersion", csd_version, 0xf80, 0x40, true, 0xd8997127b046f6dd)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ActivationContextData", activation_context_data, 0xfc0, 0x20, true, 0xace73b3a30ce379e)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ProcessAssemblyStorageMap", process_assembly_storage_map, 0xfe0, 0x20, true, 0xc100fd13f99911a)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.SystemDefaultActivationContextData", system_default_activation_context_data, 0x1000, 0x20, true, 0xed3c072e42e90a9a)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.SystemAssemblyStorageMap", system_assembly_storage_map, 0x1020, 0x20, true, 0x56464ca88cf014b2)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.MinimumStackCommit", minimum_stack_commit, 0x1040, 0x20, true, 0x84ebff253a7af83f)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.WerRegistrationData", wer_registration_data, 0x1180, 0x20, true, 0xa8700ec032e61e36)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.WerShipAssertPtr", wer_ship_assert_ptr, 0x11a0, 0x20, true, 0x5bad94b730a30367)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.pImageHeaderHash", p_image_header_hash, 0x11e0, 0x20, true, 0xaec7809d46c6b5d7)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.TracingFlags", tracing_flags, 0x1200, 0x20, true, 0x6a0b4af0f4827f2a)
#define _m082 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.HeapTracingEnabled", heap_tracing_enabled, 0x1200, 0x1, true, 0x7eda169d86fa7fda, 1, uint32_t)
#define _m083 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.CritSecTracingEnabled", crit_sec_tracing_enabled, 0x1201, 0x1, true, 0xc5592c5d11341e35, 1, uint32_t)
#define _m084 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.LibLoaderTracingEnabled", lib_loader_tracing_enabled, 0x1202, 0x1, true, 0xb326ed543ed6a13e, 1, uint32_t)
#define _m085 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint29_t), "_PEB32.SpareTracingBits", spare_tracing_bits, 0x1203, 0x1d, true, 0x8e35fddc49a0fbbe, 29, uint32_t)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB32.CsrServerReadOnlySharedMemoryBase", csr_server_read_only_shared_memory_base, 0x1240, 0x40, true, 0x61f358f9ee16d63c)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.TppWorkerpListLock", tpp_workerp_list_lock, 0x1280, 0x20, true, 0x76acaa004e391b88)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry32_t), "_PEB32.TppWorkerpList", tpp_workerp_list, 0x12a0, 0x40, true, 0xb6c8097af7f41890)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 128>), "_PEB32.WaitOnAddressHashTable", wait_on_address_hash_table, 0x12e0, 0x0, true, 0x2753b35b4ec23550)
#define _m090 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.ProcessPreviouslyThrottled", process_previously_throttled, 0x145, 0x1, true, 0xfdf70e01da70c608, 1, uint32_t)
#define _m091 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.ProcessCurrentlyThrottled", process_currently_throttled, 0x146, 0x1, true, 0x8fa8f88db210eb81, 1, uint32_t)
#define _m092 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.ProcessImagesHotPatched", process_images_hot_patched, 0x147, 0x1, true, 0x27ebd375edc161c, 1, uint32_t)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.SharedData", shared_data, 0x280, 0x20, true, 0x28f0912bb79d69b8)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 5>), "_PEB32.SpareUlongs", spare_ulongs, 0x10e0, 0xa0, true, 0x27835140c1151817)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.TelemetryCoverageHeader", telemetry_coverage_header, 0x22e0, 0x20, true, 0x3b0a95611a3825d8)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.CloudFileFlags", cloud_file_flags, 0x2300, 0x20, true, 0x1624bfec1e0471ce)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.CloudFileDiagFlags", cloud_file_diag_flags, 0x2320, 0x20, true, 0xfe16837e4d08cdf)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_PEB32.PlaceholderCompatibilityMode", placeholder_compatibility_mode, 0x2340, 0x8, true, 0x39bd769197943894)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 7>), "_PEB32.PlaceholderCompatibilityModeReserved", placeholder_compatibility_mode_reserved, 0x2348, 0x38, true, 0xd54e01769f4fbfcf)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.LeapSecondData", leap_second_data, 0x2380, 0x20, true, 0x1e5122227b35e351)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.LeapSecondFlags", leap_second_flags, 0x23a0, 0x20, true, 0x7ce696b010b222f1)
#define _m102 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB32.SixtySecondEnabled", sixty_second_enabled, 0x23a0, 0x1, true, 0x228534f6b7d4bb55, 1, uint32_t)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.NtGlobalFlag2", nt_global_flag2, 0x23c0, 0x20, true, 0xca75605a05c20258)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.SparePvoid0", spare_pvoid0, 0x0, 0x0, false, 0x4e4cabb4656bbfe)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.FlsCallback", fls_callback, 0x0, 0x0, false, 0x58fc69841dc59e85)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry32_t), "_PEB32.FlsListHead", fls_list_head, 0x0, 0x0, false, 0x99076e88e2e242e9)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.FlsBitmap", fls_bitmap, 0x0, 0x0, false, 0x599bee1ad5692196)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_PEB32.FlsBitmapBits", fls_bitmap_bits, 0x0, 0x0, false, 0x64968c6983b3149c)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.FlsHighIndex", fls_high_index, 0x0, 0x0, false, 0xc9e4a5f8523c358d)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.PatchLoaderData", patch_loader_data, 0x0, 0x0, false, 0xf25bd7c04bb73f95)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.ChpeV2ProcessInfo", chpe_v2_process_info, 0x0, 0x0, false, 0xbd04ec16798eb114)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB32.AppModelFeatureState", app_model_feature_state, 0x0, 0x0, false, 0x27581c2ca979b094)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB32.ActiveCodePage", active_code_page, 0x0, 0x0, false, 0xe68e6f50b1cc6139)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB32.OemCodePage", oem_code_page, 0x0, 0x0, false, 0x3570b1b5f53b2a70)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB32.UseCaseMapping", use_case_mapping, 0x0, 0x0, false, 0xc20fd3de48a3fb98)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB32.UnusedNlsField", unused_nls_field, 0x0, 0x0, false, 0xd0a8bd5250312bf0)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB32.ExtendedFeatureDisableMask", extended_feature_disable_mask, 0x0, 0x0, false, 0x1f560a680a3eb90)
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
#endif