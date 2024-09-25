#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dbgkd::debug_data_header64_t), "KDDEBUGGER_DATA64.Header", header, 0x0, 0xc0, true, 0x12c3e6f33446f8af)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KernBase", kern_base, 0xc0, 0x40, true, 0x583e15e452e5a0f6)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.BreakpointWithStatus", breakpoint_with_status, 0x100, 0x40, true, 0x3b1edee34332eace)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.SavedContext", saved_context, 0x140, 0x40, true, 0xc35fe80edde80a87)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.ThCallbackStack", th_callback_stack, 0x180, 0x10, true, 0x9f37c9a804602a18)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.NextCallback", next_callback, 0x190, 0x10, true, 0xd1598936a336830e)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.FramePointer", frame_pointer, 0x1a0, 0x10, true, 0x79aba078a720d931)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "KDDEBUGGER_DATA64.PaeEnabled", pae_enabled, 0x1b0, 0x1, true, 0x2be23c01c5a966fd, 1, uint16_t)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KiCallUserMode", ki_call_user_mode, 0x1c0, 0x40, true, 0x4c5912eb2052135d)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KeUserCallbackDispatcher", ke_user_callback_dispatcher, 0x200, 0x40, true, 0xc6521e43a9ab073d)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.PsLoadedModuleList", ps_loaded_module_list, 0x240, 0x40, true, 0x3ac693721b6a7d4c)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.PsActiveProcessHead", ps_active_process_head, 0x280, 0x40, true, 0xf9c003dbfd4743eb)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.PspCidTable", psp_cid_table, 0x2c0, 0x40, true, 0xeebdb42899f4b13f)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.ExpSystemResourcesList", exp_system_resources_list, 0x300, 0x40, true, 0xed7332e67df12da1)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.ExpPagedPoolDescriptor", exp_paged_pool_descriptor, 0x340, 0x40, true, 0x9d38f6c02da19931)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.ExpNumberOfPagedPools", exp_number_of_paged_pools, 0x380, 0x40, true, 0x629462a35c827393)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KeTimeIncrement", ke_time_increment, 0x3c0, 0x40, true, 0x741da907e6d39013)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KeBugCheckCallbackListHead", ke_bug_check_callback_list_head, 0x400, 0x40, true, 0x19043ce0cf92a57a)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KiBugcheckData", ki_bugcheck_data, 0x440, 0x40, true, 0x1aaea424df0b8681)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.IopErrorLogListHead", iop_error_log_list_head, 0x480, 0x40, true, 0x7660e8f2be426a93)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.ObpRootDirectoryObject", obp_root_directory_object, 0x4c0, 0x40, true, 0x3fd26fb58b3f9e09)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.ObpTypeObjectType", obp_type_object_type, 0x500, 0x40, true, 0x16a06f6dd3fe6d65)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmSystemCacheStart", mm_system_cache_start, 0x540, 0x40, true, 0xb42478b8ec25ee0d)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmSystemCacheEnd", mm_system_cache_end, 0x580, 0x40, true, 0xb753bc659b1f7738)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmSystemCacheWs", mm_system_cache_ws, 0x5c0, 0x40, true, 0x29aca4c8aaae919c)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmPfnDatabase", mm_pfn_database, 0x600, 0x40, true, 0xe1b3b1e597bb0764)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmSystemPtesStart", mm_system_ptes_start, 0x640, 0x40, true, 0xec1147159f2d8268)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmSystemPtesEnd", mm_system_ptes_end, 0x680, 0x40, true, 0xd5cfc3678ac17c06)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmSubsectionBase", mm_subsection_base, 0x6c0, 0x40, true, 0x53fbf2666644b36b)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmNumberOfPagingFiles", mm_number_of_paging_files, 0x700, 0x40, true, 0xb4d3876142802a88)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmLowestPhysicalPage", mm_lowest_physical_page, 0x740, 0x40, true, 0x5b392afd27e89bb4)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmHighestPhysicalPage", mm_highest_physical_page, 0x780, 0x40, true, 0xe6791ec94b389e1c)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmNumberOfPhysicalPages", mm_number_of_physical_pages, 0x7c0, 0x40, true, 0x1be267fd922b3c8c)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmMaximumNonPagedPoolInBytes", mm_maximum_non_paged_pool_in_bytes, 0x800, 0x40, true, 0xdb092938e8cec595)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmNonPagedSystemStart", mm_non_paged_system_start, 0x840, 0x40, true, 0xa3e0b14569d8515c)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmNonPagedPoolStart", mm_non_paged_pool_start, 0x880, 0x40, true, 0xda4478dedfc0b27a)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmNonPagedPoolEnd", mm_non_paged_pool_end, 0x8c0, 0x40, true, 0x9f0d280f64327933)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmPagedPoolStart", mm_paged_pool_start, 0x900, 0x40, true, 0x964371d57f0f2c9e)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmPagedPoolEnd", mm_paged_pool_end, 0x940, 0x40, true, 0xe176a141ad2b6480)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmPagedPoolInformation", mm_paged_pool_information, 0x980, 0x40, true, 0xa51368916a3eb95f)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmPageSize", mm_page_size, 0x9c0, 0x40, true, 0x36b733938b5cb1c5)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmSizeOfPagedPoolInBytes", mm_size_of_paged_pool_in_bytes, 0xa00, 0x40, true, 0xf04026bf3e070b0c)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmTotalCommitLimit", mm_total_commit_limit, 0xa40, 0x40, true, 0x1472d066bcc9866a)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmTotalCommittedPages", mm_total_committed_pages, 0xa80, 0x40, true, 0x564f237ce93bc61f)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmSharedCommit", mm_shared_commit, 0xac0, 0x40, true, 0xd3dfc12ee08c8f13)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmDriverCommit", mm_driver_commit, 0xb00, 0x40, true, 0x61a9084014832f1e)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmProcessCommit", mm_process_commit, 0xb40, 0x40, true, 0xef238a056ad04de2)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmPagedPoolCommit", mm_paged_pool_commit, 0xb80, 0x40, true, 0xe299aa73cf53cb87)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmExtendedCommit", mm_extended_commit, 0xbc0, 0x40, true, 0x4c46dc5757bffdf5)
#define _m049 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmZeroedPageListHead", mm_zeroed_page_list_head, 0xc00, 0x40, true, 0x3d835ac9dd7d5217)
#define _m050 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmFreePageListHead", mm_free_page_list_head, 0xc40, 0x40, true, 0xf89d70d6e434d896)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmStandbyPageListHead", mm_standby_page_list_head, 0xc80, 0x40, true, 0x85a4fa78bbe2113d)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmModifiedPageListHead", mm_modified_page_list_head, 0xcc0, 0x40, true, 0x3cc71bbbff994b51)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmModifiedNoWritePageListHead", mm_modified_no_write_page_list_head, 0xd00, 0x40, true, 0x564f9ffc8073e529)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmAvailablePages", mm_available_pages, 0xd40, 0x40, true, 0xa2eacbaa1db78004)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmResidentAvailablePages", mm_resident_available_pages, 0xd80, 0x40, true, 0x3f067ca476c1d19c)
#define _m056 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.PoolTrackTable", pool_track_table, 0xdc0, 0x40, true, 0x22ab224b4dfc1321)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.NonPagedPoolDescriptor", non_paged_pool_descriptor, 0xe00, 0x40, true, 0xd0a2ed8caf28112a)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmHighestUserAddress", mm_highest_user_address, 0xe40, 0x40, true, 0xedc42074ea44d95d)
#define _m059 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmSystemRangeStart", mm_system_range_start, 0xe80, 0x40, true, 0x8eff0b5393dd314b)
#define _m060 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmUserProbeAddress", mm_user_probe_address, 0xec0, 0x40, true, 0x577e0849f0841d8a)
#define _m061 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KdPrintCircularBuffer", kd_print_circular_buffer, 0xf00, 0x40, true, 0x5d43e43b7243d2e)
#define _m062 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KdPrintCircularBufferEnd", kd_print_circular_buffer_end, 0xf40, 0x40, true, 0xef76a5ba73c914aa)
#define _m063 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KdPrintWritePointer", kd_print_write_pointer, 0xf80, 0x40, true, 0xb86d42599dccd7f9)
#define _m064 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KdPrintRolloverCount", kd_print_rollover_count, 0xfc0, 0x40, true, 0xe0720e5be46aa119)
#define _m065 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmLoadedUserImageList", mm_loaded_user_image_list, 0x1000, 0x40, true, 0x97d94734e2f89f4)
#define _m066 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.NtBuildLab", nt_build_lab, 0x1040, 0x40, true, 0xba1940abb080fca2)
#define _m067 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KiNormalSystemCall", ki_normal_system_call, 0x1080, 0x40, true, 0x53e447d1315fb46d)
#define _m068 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KiProcessorBlock", ki_processor_block, 0x10c0, 0x40, true, 0xf0f6b79a65fa8027)
#define _m069 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmUnloadedDrivers", mm_unloaded_drivers, 0x1100, 0x40, true, 0x788747e557216556)
#define _m070 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmLastUnloadedDriver", mm_last_unloaded_driver, 0x1140, 0x40, true, 0x365c85d989c27a3e)
#define _m071 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmTriageActionTaken", mm_triage_action_taken, 0x1180, 0x40, true, 0xf4e86c17ec98d9f1)
#define _m072 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmSpecialPoolTag", mm_special_pool_tag, 0x11c0, 0x40, true, 0xd2de3759f634b39e)
#define _m073 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KernelVerifier", kernel_verifier, 0x1200, 0x40, true, 0x7168b4dbfc7b764b)
#define _m074 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmVerifierData", mm_verifier_data, 0x1240, 0x40, true, 0xbac9cba32079f18c)
#define _m075 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmAllocatedNonPagedPool", mm_allocated_non_paged_pool, 0x1280, 0x40, true, 0xc08e5492b9307c10)
#define _m076 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmPeakCommitment", mm_peak_commitment, 0x12c0, 0x40, true, 0xe7a31162f3dfd2f8)
#define _m077 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmTotalCommitLimitMaximum", mm_total_commit_limit_maximum, 0x1300, 0x40, true, 0x8e1037609e09a541)
#define _m078 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.CmNtCSDVersion", cm_nt_csd_version, 0x1340, 0x40, true, 0x55b6a10e25388575)
#define _m079 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmPhysicalMemoryBlock", mm_physical_memory_block, 0x1380, 0x40, true, 0xc3dceea9d65964c6)
#define _m080 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmSessionBase", mm_session_base, 0x13c0, 0x40, true, 0x8222ae7b46913648)
#define _m081 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmSessionSize", mm_session_size, 0x1400, 0x40, true, 0x4f523b035b601655)
#define _m082 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmSystemParentTablePage", mm_system_parent_table_page, 0x1440, 0x40, true, 0xece485ea0f0db455)
#define _m083 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmVirtualTranslationBase", mm_virtual_translation_base, 0x1480, 0x40, true, 0xae1382e8fea48ef3)
#define _m084 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetKThreadNextProcessor", offset_k_thread_next_processor, 0x14c0, 0x10, true, 0x391d99e7dd10873b)
#define _m085 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetKThreadTeb", offset_k_thread_teb, 0x14d0, 0x10, true, 0x5f770e21a55ed2cd)
#define _m086 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetKThreadKernelStack", offset_k_thread_kernel_stack, 0x14e0, 0x10, true, 0x860ac5e646ee0453)
#define _m087 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetKThreadInitialStack", offset_k_thread_initial_stack, 0x14f0, 0x10, true, 0xd949b92e7e77fb85)
#define _m088 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetKThreadApcProcess", offset_k_thread_apc_process, 0x1500, 0x10, true, 0x55f768b11b7867d2)
#define _m089 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetKThreadState", offset_k_thread_state, 0x1510, 0x10, true, 0x6ebd83795e890cc7)
#define _m090 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetKThreadBStore", offset_k_thread_b_store, 0x1520, 0x10, true, 0x4201071edddf021a)
#define _m091 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetKThreadBStoreLimit", offset_k_thread_b_store_limit, 0x1530, 0x10, true, 0x66b2fa67fa8b1c83)
#define _m092 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.SizeEProcess", size_e_process, 0x1540, 0x10, true, 0xc69db7e36c43b8fd)
#define _m093 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetEprocessPeb", offset_eprocess_peb, 0x1550, 0x10, true, 0x5ccb5a6505bb1a2)
#define _m094 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetEprocessParentCID", offset_eprocess_parent_cid, 0x1560, 0x10, true, 0x3c74e7e73785f9ab)
#define _m095 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetEprocessDirectoryTableBase", offset_eprocess_directory_table_base, 0x1570, 0x10, true, 0x2116908546e80ab7)
#define _m096 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.SizePrcb", size_prcb, 0x1580, 0x10, true, 0x9a374ee3d4eba4a5)
#define _m097 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPrcbDpcRoutine", offset_prcb_dpc_routine, 0x1590, 0x10, true, 0xc2b48637bb746684)
#define _m098 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPrcbCurrentThread", offset_prcb_current_thread, 0x15a0, 0x10, true, 0xffca4788e76c40be)
#define _m099 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPrcbMhz", offset_prcb_mhz, 0x15b0, 0x10, true, 0x17f7e760b950403e)
#define _m100 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPrcbCpuType", offset_prcb_cpu_type, 0x15c0, 0x10, true, 0x2c558eff2af9199c)
#define _m101 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPrcbVendorString", offset_prcb_vendor_string, 0x15d0, 0x10, true, 0x5c62a778e0bf0705)
#define _m102 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPrcbProcStateContext", offset_prcb_proc_state_context, 0x15e0, 0x10, true, 0x3554fcea203c8e64)
#define _m103 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPrcbNumber", offset_prcb_number, 0x15f0, 0x10, true, 0x7ee273e42097b03b)
#define _m104 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.SizeEThread", size_e_thread, 0x1600, 0x10, true, 0xbce7d9a0fa361fd1)
#define _m105 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KdPrintCircularBufferPtr", kd_print_circular_buffer_ptr, 0x1640, 0x40, true, 0xe4d84dce658e28bc)
#define _m106 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KdPrintBufferSize", kd_print_buffer_size, 0x1680, 0x40, true, 0x2ae269049b42c6d4)
#define _m107 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.KeLoaderBlock", ke_loader_block, 0x16c0, 0x40, true, 0x638d92ba45b12796)
#define _m108 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.SizePcr", size_pcr, 0x1700, 0x10, true, 0xe9013759aaaa0be6)
#define _m109 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPcrSelfPcr", offset_pcr_self_pcr, 0x1710, 0x10, true, 0x6e9415cd55ffd7aa)
#define _m110 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPcrCurrentPrcb", offset_pcr_current_prcb, 0x1720, 0x10, true, 0xeba6abe6422287b8)
#define _m111 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPcrContainedPrcb", offset_pcr_contained_prcb, 0x1730, 0x10, true, 0x38753ec8b278b061)
#define _m112 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPcrInitialBStore", offset_pcr_initial_b_store, 0x1740, 0x10, true, 0xbeefb98756c607db)
#define _m113 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPcrBStoreLimit", offset_pcr_b_store_limit, 0x1750, 0x10, true, 0x6c16c293108ce369)
#define _m114 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPcrInitialStack", offset_pcr_initial_stack, 0x1760, 0x10, true, 0xb2789d39801be955)
#define _m115 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPcrStackLimit", offset_pcr_stack_limit, 0x1770, 0x10, true, 0x82b3810e2d521021)
#define _m116 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPrcbPcrPage", offset_prcb_pcr_page, 0x1780, 0x10, true, 0xfeb455f542b39892)
#define _m117 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPrcbProcStateSpecialReg", offset_prcb_proc_state_special_reg, 0x1790, 0x10, true, 0x8dee0da043f78a53)
#define _m118 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.GdtR0Code", gdt_r0_code, 0x17a0, 0x10, true, 0xa5afd908f11ff979)
#define _m119 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.GdtR0Data", gdt_r0_data, 0x17b0, 0x10, true, 0x55779533966dad8a)
#define _m120 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.GdtR0Pcr", gdt_r0_pcr, 0x17c0, 0x10, true, 0x6cd398c7069344c7)
#define _m121 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.GdtR3Code", gdt_r3_code, 0x17d0, 0x10, true, 0xacb13542ecbc6fb2)
#define _m122 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.GdtR3Data", gdt_r3_data, 0x17e0, 0x10, true, 0xd1e50afea705b69c)
#define _m123 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.GdtR3Teb", gdt_r3_teb, 0x17f0, 0x10, true, 0x84a84e9aa9ddbacf)
#define _m124 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.GdtLdt", gdt_ldt, 0x1800, 0x10, true, 0x43c67b0ffb9ba56c)
#define _m125 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.GdtTss", gdt_tss, 0x1810, 0x10, true, 0x581883e1d49ca74d)
#define _m126 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.Gdt64R3CmCode", gdt64r3_cm_code, 0x1820, 0x10, true, 0x6e455ad5521b7d01)
#define _m127 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.Gdt64R3CmTeb", gdt64r3_cm_teb, 0x1830, 0x10, true, 0x5aac9f82c9105cba)
#define _m128 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.IopNumTriageDumpDataBlocks", iop_num_triage_dump_data_blocks, 0x1840, 0x40, true, 0x8457c96f6ec6b3cd)
#define _m129 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.IopTriageDumpDataBlocks", iop_triage_dump_data_blocks, 0x1880, 0x40, true, 0xa2009346fd8ecb23)
#define _m130 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.VfCrashDataBlock", vf_crash_data_block, 0x18c0, 0x40, true, 0x166170c18d17a8da)
#define _m131 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmBadPagesDetected", mm_bad_pages_detected, 0x1900, 0x40, true, 0xa5493eaa0d07d61e)
#define _m132 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.MmZeroedPageSingleBitErrorsDetected", mm_zeroed_page_single_bit_errors_detected, 0x1940, 0x40, true, 0x5a3ab9766622e485)
#define _m133 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "KDDEBUGGER_DATA64.EtwpDebuggerData", etwp_debugger_data, 0x1980, 0x40, true, 0x338143e0b65608c8)
#define _m134 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "KDDEBUGGER_DATA64.OffsetPrcbContext", offset_prcb_context, 0x19c0, 0x10, true, 0xb04e8ac934a39b23)
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
#endif