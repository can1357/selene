#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB64.InheritedAddressSpace", inherited_address_space, 0x0, 0x8, true, 0x7da6979e180fa265)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB64.ReadImageFileExecOptions", read_image_file_exec_options, 0x8, 0x8, true, 0x9e39642a3fb22c0b)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB64.BeingDebugged", being_debugged, 0x10, 0x8, true, 0x1641282954944ebb)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB64.BitField", bit_field, 0x18, 0x8, true, 0xa04b4afba9227bef)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.ImageUsesLargePages", image_uses_large_pages, 0x18, 0x1, true, 0x166f50e5b2fc4612, 1, uint8_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.IsProtectedProcess", is_protected_process, 0x19, 0x1, true, 0x83e2eae17a42ca1c, 1, uint8_t)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.IsImageDynamicallyRelocated", is_image_dynamically_relocated, 0x1a, 0x1, true, 0x821c59938fc6e545, 1, uint8_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.SkipPatchingUser32Forwarders", skip_patching_user32_forwarders, 0x1b, 0x1, true, 0xf31356d9a21f58ab, 1, uint8_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.IsPackagedProcess", is_packaged_process, 0x1c, 0x1, true, 0x42a30757438c4cf2, 1, uint8_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.IsAppContainer", is_app_container, 0x1d, 0x1, true, 0xd7f692514f777960, 1, uint8_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.IsProtectedProcessLight", is_protected_process_light, 0x1e, 0x1, true, 0xc4433b3c2234fcc3, 1, uint8_t)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.IsLongPathAwareProcess", is_long_path_aware_process, 0x1f, 0x1, true, 0xd65aeff91d55412a, 1, uint8_t)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.Mutant", mutant, 0x40, 0x40, true, 0x3c0238f76c0246e3)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.ImageBaseAddress", image_base_address, 0x80, 0x40, true, 0x8f0084f46a41806b)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.Ldr", ldr, 0xc0, 0x40, true, 0x324d9f7bd0a60897)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.ProcessParameters", process_parameters, 0x100, 0x40, true, 0x2c1272ab07cfb7cf)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.SubSystemData", sub_system_data, 0x140, 0x40, true, 0x3a4ddb8bacb98b76)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.ProcessHeap", process_heap, 0x180, 0x40, true, 0x2bfee30d03092ab6)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.FastPebLock", fast_peb_lock, 0x1c0, 0x40, true, 0x36e84a9bb2c184df)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.AtlThunkSListPtr", atl_thunk_s_list_ptr, 0x200, 0x40, true, 0x39dc643c5dbe5f6f)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.IFEOKey", ifeo_key, 0x240, 0x40, true, 0xe111374bf8576afc)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.CrossProcessFlags", cross_process_flags, 0x280, 0x20, true, 0x9204189f0b786b7e)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.ProcessInJob", process_in_job, 0x280, 0x1, true, 0xf5a30f7a9f79b087, 1, uint32_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.ProcessInitializing", process_initializing, 0x281, 0x1, true, 0x40f6bb326275c46e, 1, uint32_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.ProcessUsingVEH", process_using_veh, 0x282, 0x1, true, 0xaee04b26540468ab, 1, uint32_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.ProcessUsingVCH", process_using_vch, 0x283, 0x1, true, 0xee01fdc1a18f9eab, 1, uint32_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.ProcessUsingFTH", process_using_fth, 0x284, 0x1, true, 0xcd5c38aaedbb5975, 1, uint32_t)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.KernelCallbackTable", kernel_callback_table, 0x2c0, 0x40, true, 0x1f7abb37f044f359)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.UserSharedInfoPtr", user_shared_info_ptr, 0x2c0, 0x40, true, 0x935348e765c056e8)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint32_t, 1>, uint32_t>), "_PEB64.SystemReserved", system_reserved, 0x300, 0x20, true, 0xe4594a3d80217831)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.AtlThunkSListPtr32", atl_thunk_s_list_ptr32, 0x320, 0x20, true, 0x813e92b8efbd4007)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.ApiSetMap", api_set_map, 0x340, 0x40, true, 0x61f034201b10cadc)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.TlsExpansionCounter", tls_expansion_counter, 0x380, 0x20, true, 0x1907365d1d7d6d1e)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.TlsBitmap", tls_bitmap, 0x3c0, 0x40, true, 0xe168f424c721a650)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_PEB64.TlsBitmapBits", tls_bitmap_bits, 0x400, 0x40, true, 0xeef2a520b2fc607f)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.ReadOnlySharedMemoryBase", read_only_shared_memory_base, 0x440, 0x40, true, 0x871606478efd6315)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.ReadOnlyStaticServerData", read_only_static_server_data, 0x4c0, 0x40, true, 0xca5db8cd9a135616)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.AnsiCodePageData", ansi_code_page_data, 0x500, 0x40, true, 0xc16f37852ca9990f)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.OemCodePageData", oem_code_page_data, 0x540, 0x40, true, 0x5f06a2247f4e571a)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.UnicodeCaseTableData", unicode_case_table_data, 0x580, 0x40, true, 0x3b3d5a48f5eab97)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.NumberOfProcessors", number_of_processors, 0x5c0, 0x20, true, 0x34550943262d0c3f)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.NtGlobalFlag", nt_global_flag, 0x5e0, 0x20, true, 0xfd81519810fd5209)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PEB64.CriticalSectionTimeout", critical_section_timeout, 0x600, 0x40, true, 0x25ec6c89906a627b)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.HeapSegmentReserve", heap_segment_reserve, 0x640, 0x40, true, 0x6f84d957f30c39e4)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.HeapSegmentCommit", heap_segment_commit, 0x680, 0x40, true, 0xdcbc7deb417fa4b)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.HeapDeCommitTotalFreeThreshold", heap_de_commit_total_free_threshold, 0x6c0, 0x40, true, 0xf782b519044a1d51)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.HeapDeCommitFreeBlockThreshold", heap_de_commit_free_block_threshold, 0x700, 0x40, true, 0x3114ea708a581fc9)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.NumberOfHeaps", number_of_heaps, 0x740, 0x20, true, 0x356291a02fb57d47)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.MaximumNumberOfHeaps", maximum_number_of_heaps, 0x760, 0x20, true, 0x829a830097237227)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.ProcessHeaps", process_heaps, 0x780, 0x40, true, 0xe7e139f5d190b011)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.GdiSharedHandleTable", gdi_shared_handle_table, 0x7c0, 0x40, true, 0xf44d1d522924a163)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.ProcessStarterHelper", process_starter_helper, 0x800, 0x40, true, 0x2b095864f7293463)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.GdiDCAttributeList", gdi_dc_attribute_list, 0x840, 0x20, true, 0x1e0cceeea77ee043)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.LoaderLock", loader_lock, 0x880, 0x40, true, 0xd7cc9281a91c6d61)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.OSMajorVersion", os_major_version, 0x8c0, 0x20, true, 0x4bc25db980a44d77)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.OSMinorVersion", os_minor_version, 0x8e0, 0x20, true, 0x20696db16b0fef1c)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB64.OSBuildNumber", os_build_number, 0x900, 0x10, true, 0x8eb1f241a0cfa1b7)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB64.OSCSDVersion", oscsd_version, 0x910, 0x10, true, 0x20b2cf22e36350f6)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.OSPlatformId", os_platform_id, 0x920, 0x20, true, 0x9cfa80330beadc73)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.ImageSubsystem", image_subsystem, 0x940, 0x20, true, 0xef6f893c33224ba5)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.ImageSubsystemMajorVersion", image_subsystem_major_version, 0x960, 0x20, true, 0xa319b7cb72bd3479)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.ImageSubsystemMinorVersion", image_subsystem_minor_version, 0x980, 0x20, true, 0x3b24cf86a60dac77)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.ActiveProcessAffinityMask", active_process_affinity_mask, 0x9c0, 0x40, true, 0x1e8189ae8297d83d)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 60>), "_PEB64.GdiHandleBuffer", gdi_handle_buffer, 0xa00, 0x80, true, 0x5853ed28e59d36dd)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.PostProcessInitRoutine", post_process_init_routine, 0x1180, 0x40, true, 0xb57e5d5f517c4d03)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.TlsExpansionBitmap", tls_expansion_bitmap, 0x11c0, 0x40, true, 0xb636d49a582b1238)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 32>), "_PEB64.TlsExpansionBitmapBits", tls_expansion_bitmap_bits, 0x1200, 0x0, true, 0xc7a26b02794deba4)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.SessionId", session_id, 0x1600, 0x20, true, 0x43382b4a6752c684)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.AppCompatFlags", app_compat_flags, 0x1640, 0x40, true, 0xca1098d89729ac9c)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.AppCompatFlagsUser", app_compat_flags_user, 0x1680, 0x40, true, 0xbea6fe8e7b33a15b)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.pShimData", p_shim_data, 0x16c0, 0x40, true, 0x1f31e63af83d06d0)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.AppCompatInfo", app_compat_info, 0x1700, 0x40, true, 0x23a9c9a56ae36920)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_PEB64.CSDVersion", csd_version, 0x1740, 0x80, true, 0x456ed114817cd354)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.ActivationContextData", activation_context_data, 0x17c0, 0x40, true, 0x2d8e44a5779d7b50)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.ProcessAssemblyStorageMap", process_assembly_storage_map, 0x1800, 0x40, true, 0xa53308e4ddf3474e)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.SystemDefaultActivationContextData", system_default_activation_context_data, 0x1840, 0x40, true, 0xaaae2ce23943f6d7)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.SystemAssemblyStorageMap", system_assembly_storage_map, 0x1880, 0x40, true, 0xef36f4db5638125c)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.MinimumStackCommit", minimum_stack_commit, 0x18c0, 0x40, true, 0x1a0ebf7f995fd58f)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.WerRegistrationData", wer_registration_data, 0x1ac0, 0x40, true, 0x132d5400f751e60e)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.WerShipAssertPtr", wer_ship_assert_ptr, 0x1b00, 0x40, true, 0x8c6c6ace42a3e104)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.pImageHeaderHash", p_image_header_hash, 0x1b80, 0x40, true, 0xd567c810fc3fc1f3)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.TracingFlags", tracing_flags, 0x1bc0, 0x20, true, 0xd044695e116de268)
#define _m082 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.HeapTracingEnabled", heap_tracing_enabled, 0x1bc0, 0x1, true, 0xcb7c24cf2209981b, 1, uint32_t)
#define _m083 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.CritSecTracingEnabled", crit_sec_tracing_enabled, 0x1bc1, 0x1, true, 0xd420078727dfb72d, 1, uint32_t)
#define _m084 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.LibLoaderTracingEnabled", lib_loader_tracing_enabled, 0x1bc2, 0x1, true, 0x3c1abbe5fdfdcc50, 1, uint32_t)
#define _m085 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint29_t), "_PEB64.SpareTracingBits", spare_tracing_bits, 0x1bc3, 0x1d, true, 0x9610263280e7fbe8, 29, uint32_t)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.CsrServerReadOnlySharedMemoryBase", csr_server_read_only_shared_memory_base, 0x1c00, 0x40, true, 0x87a8050822c2f843)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.TppWorkerpListLock", tpp_workerp_list_lock, 0x1c40, 0x40, true, 0xa6926f8678c85cf9)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry64_t), "_PEB64.TppWorkerpList", tpp_workerp_list, 0x1c80, 0x80, true, 0x387ecc706d1d3f35)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 128>), "_PEB64.WaitOnAddressHashTable", wait_on_address_hash_table, 0x1d00, 0x0, true, 0x54d39d73b509818b)
#define _m090 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.ProcessPreviouslyThrottled", process_previously_throttled, 0x285, 0x1, true, 0xd7bfde747c0553a8, 1, uint32_t)
#define _m091 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.ProcessCurrentlyThrottled", process_currently_throttled, 0x286, 0x1, true, 0x1d1a08473202e7fb, 1, uint32_t)
#define _m092 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.ProcessImagesHotPatched", process_images_hot_patched, 0x287, 0x1, true, 0x4907527bd9379b7b, 1, uint32_t)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.SharedData", shared_data, 0x480, 0x40, true, 0x9ebd25bf483e8cf5)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 5>), "_PEB64.SpareUlongs", spare_ulongs, 0x1a00, 0xa0, true, 0xc3caaf573a9008a2)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.TelemetryCoverageHeader", telemetry_coverage_header, 0x3d00, 0x40, true, 0xe55cc99c360471a)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.CloudFileFlags", cloud_file_flags, 0x3d40, 0x20, true, 0xb0c05edc908e426e)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.CloudFileDiagFlags", cloud_file_diag_flags, 0x3d60, 0x20, true, 0xf978eaad5d33d101)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_PEB64.PlaceholderCompatibilityMode", placeholder_compatibility_mode, 0x3d80, 0x8, true, 0xc99f5fffd300a473)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 7>), "_PEB64.PlaceholderCompatibilityModeReserved", placeholder_compatibility_mode_reserved, 0x3d88, 0x38, true, 0xd0d2350625153b92)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.LeapSecondData", leap_second_data, 0x3dc0, 0x40, true, 0xae078e8ba5a4ed28)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.LeapSecondFlags", leap_second_flags, 0x3e00, 0x20, true, 0x295e84bde02e21f3)
#define _m102 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PEB64.SixtySecondEnabled", sixty_second_enabled, 0x3e00, 0x1, true, 0xa1ae67acc80a41d7, 1, uint32_t)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.NtGlobalFlag2", nt_global_flag2, 0x3e20, 0x20, true, 0x10f2fd6501361489)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.SparePvoid0", spare_pvoid0, 0x0, 0x0, false, 0x7675688f80b7c0af)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.FlsCallback", fls_callback, 0x0, 0x0, false, 0xbfec14260d07027b)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry64_t), "_PEB64.FlsListHead", fls_list_head, 0x0, 0x0, false, 0x2fc0ea625db7d90d)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.FlsBitmap", fls_bitmap, 0x0, 0x0, false, 0x6a7f3755a466ef93)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_PEB64.FlsBitmapBits", fls_bitmap_bits, 0x0, 0x0, false, 0xe71a4b70ec053bee)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.FlsHighIndex", fls_high_index, 0x0, 0x0, false, 0xb80a2c947cf5b5fa)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.PatchLoaderData", patch_loader_data, 0x0, 0x0, false, 0x6cd8bfa8e2b20b0e)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.ChpeV2ProcessInfo", chpe_v2_process_info, 0x0, 0x0, false, 0xa601dade39943a8e)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB64.AppModelFeatureState", app_model_feature_state, 0x0, 0x0, false, 0x27f1d8be15c6f941)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB64.ActiveCodePage", active_code_page, 0x0, 0x0, false, 0xca2d1c59a4916ec9)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB64.OemCodePage", oem_code_page, 0x0, 0x0, false, 0x7250b4acd8dfc0f2)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB64.UseCaseMapping", use_case_mapping, 0x0, 0x0, false, 0x759efa545893c327)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEB64.UnusedNlsField", unused_nls_field, 0x0, 0x0, false, 0x9af12789a59521d6)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.EcCodeBitMap", ec_code_bit_map, 0x0, 0x0, false, 0x60cf73ae240c0cc)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEB64.ExtendedFeatureDisableMask", extended_feature_disable_mask, 0x0, 0x0, false, 0x2e3c9dc50892512c)
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