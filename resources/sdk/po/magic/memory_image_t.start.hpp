#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.Signature", signature, 0x0, 0x20, true, 0x3f93d4d7d6a4a712)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.ImageType", image_type, 0x20, 0x20, true, 0x14087bf9a43b8f3e)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.CheckSum", check_sum, 0x40, 0x20, true, 0xa6afab5920f52a16)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.LengthSelf", length_self, 0x60, 0x20, true, 0x1d5c8d419ed7d3f9)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.PageSelf", page_self, 0x80, 0x40, true, 0xa3edf4d1949f884c)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.PageSize", page_size, 0xc0, 0x20, true, 0x9e79ba36839b5f13)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "PO_MEMORY_IMAGE.SystemTime", system_time, 0x100, 0x40, true, 0x8bf6638d5f2a68aa)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.InterruptTime", interrupt_time, 0x140, 0x40, true, 0xcf1d779de42e9e2f)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.FeatureFlags", feature_flags, 0x180, 0x40, true, 0xefd4e6011a18db8c)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.HiberFlags", hiber_flags, 0x1c0, 0x8, true, 0x70fe1ba8510b15bf)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.NoHiberPtes", no_hiber_ptes, 0x1e0, 0x20, true, 0x995a09fcba526812)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.HiberVa", hiber_va, 0x200, 0x40, true, 0xdcbac5c771c01e6b)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.NoFreePages", no_free_pages, 0x240, 0x20, true, 0x4cafd88e21072b0b)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.FreeMapCheck", free_map_check, 0x260, 0x20, true, 0x4d31d615a4891464)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.WakeCheck", wake_check, 0x280, 0x20, true, 0xa0a62706d3cbcf1c)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.NumPagesForLoader", num_pages_for_loader, 0x2c0, 0x40, true, 0xf8bad0ed69a4e0ed)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.FirstSecureRestorePage", first_secure_restore_page, 0x300, 0x40, true, 0x973554812fdff761)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.FirstBootRestorePage", first_boot_restore_page, 0x340, 0x40, true, 0x67faafe091120e30)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.FirstKernelRestorePage", first_kernel_restore_page, 0x380, 0x40, true, 0x9e669a50065cc5e6)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.FirstChecksumRestorePage", first_checksum_restore_page, 0x3c0, 0x40, true, 0x30242c0e3fdae983)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.NoChecksumEntries", no_checksum_entries, 0x400, 0x40, true, 0xb83350b52025ae35)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::hiber_perf_t), "PO_MEMORY_IMAGE.PerfInfo", perf_info, 0x440, 0xc0, true, 0xe447c88800ee613d)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.FirmwareRuntimeInformationPages", firmware_runtime_information_pages, 0x1400, 0x20, true, 0xd9ce2e05c146f964)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "PO_MEMORY_IMAGE.FirmwareRuntimeInformation", firmware_runtime_information, 0x1440, 0x40, true, 0x2088f1a734eb4d03)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.NoBootLoaderLogPages", no_boot_loader_log_pages, 0x14a0, 0x20, true, 0x397ace97410f0b15)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 24>), "PO_MEMORY_IMAGE.BootLoaderLogPages", boot_loader_log_pages, 0x14c0, 0x0, true, 0x37b117544f3f9548)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.NotUsed", not_used, 0x1ac0, 0x20, true, 0x3bba35b8ec0b617)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.ResumeContextCheck", resume_context_check, 0x1ae0, 0x20, true, 0x4c9b72666ac582de)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.ResumeContextPages", resume_context_pages, 0x1b00, 0x20, true, 0x939b5d196fb920de)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.Hiberboot", hiberboot, 0x1b20, 0x8, true, 0xce421c1f4e2f6d67)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.HvEntryPoint", hv_entry_point, 0x1b80, 0x40, true, 0x2fe4a39e30cd4056)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.HvReservedTransitionAddress", hv_reserved_transition_address, 0x1bc0, 0x40, true, 0x465e069ce1d2da7b)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.HvReservedTransitionAddressSize", hv_reserved_transition_address_size, 0x1c00, 0x40, true, 0x38ebec9472f1db76)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.BootFlags", boot_flags, 0x1c40, 0x40, true, 0x5a1243085a90b6b0)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.HighestPhysicalPage", highest_physical_page, 0x1cc0, 0x40, true, 0x88bc3ec155ea6e80)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "PO_MEMORY_IMAGE.BitlockerKeyPfns", bitlocker_key_pfns, 0x1d00, 0x0, true, 0xa6a7bbc364fc7080)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.HardwareSignature", hardware_signature, 0x1e00, 0x20, true, 0xc9f794c82b0a1a1f)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "PO_MEMORY_IMAGE.SMBiosTablePhysicalAddress", sm_bios_table_physical_address, 0x1e40, 0x40, true, 0x6b2fbd05bc5056fc)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.SMBiosTableLength", sm_bios_table_length, 0x1e80, 0x20, true, 0xc9d9e500f44b17e4)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.SMBiosMajorVersion", sm_bios_major_version, 0x1ea0, 0x8, true, 0x36f6299c676bef31)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.SMBiosMinorVersion", sm_bios_minor_version, 0x1ea8, 0x8, true, 0x54505b975501a1e6)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.HiberSimulateFlags", hiber_simulate_flags, 0x1c8, 0x8, true, 0xef8459a1ce6cd4e2)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.SpareUlong", spare_ulong, 0x1480, 0x20, true, 0x47f1b81557745f0f)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.SecureLaunched", secure_launched, 0x1b28, 0x8, true, 0x48b21accefae71d6)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.SecureBoot", secure_boot, 0x1b30, 0x8, true, 0x7f080cfa85b5b554)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.HvPageTableRoot", hv_page_table_root, 0x1b40, 0x40, true, 0x713cf13a427f3b42)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.RestoreProcessorStateRoutine", restore_processor_state_routine, 0x1c80, 0x40, true, 0xc7a5588c2e172765)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.HiberResumeXhciHandoffSkip", hiber_resume_xhci_handoff_skip, 0x1eb0, 0x8, true, 0x8c78653a20bdf940)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.InitializeUSBCore", initialize_usb_core, 0x1eb8, 0x8, true, 0xd3419f844d177e97)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.ValidUSBCoreId", valid_usb_core_id, 0x1ec0, 0x8, true, 0x7125ca71eb7efb7a)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.USBCoreId", usb_core_id, 0x1ec8, 0x8, true, 0x9bb3067abb961b34)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.SkipMemoryMapValidation", skip_memory_map_validation, 0x1ed0, 0x8, true, 0x5c9014a464c87206)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.Fasr", fasr, 0x0, 0x0, false, 0x89d8562c70b341a3)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PO_MEMORY_IMAGE.SuppressResumePrompt", suppress_resume_prompt, 0x0, 0x0, false, 0x4a5de052da394535)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PO_MEMORY_IMAGE.SiLogOffset", si_log_offset, 0x0, 0x0, false, 0xf8bd5c004adab47d)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.HvCr3", hv_cr3, 0x0, 0x0, false, 0x2d6d4da242286a66)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PO_MEMORY_IMAGE.HalEntryPointPhysical", hal_entry_point_physical, 0x0, 0x0, false, 0x8586d8c1787a575a)
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
#endif