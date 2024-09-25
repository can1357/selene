#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.HiberIoTicks", hiber_io_ticks, 0x0, 0x40, true, 0x38c2b43668a484a4)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.HiberIoCpuTicks", hiber_io_cpu_ticks, 0x40, 0x40, true, 0x1b152c0150e4a0a)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.HiberInitTicks", hiber_init_ticks, 0x80, 0x40, true, 0xb5b1304d4cc55706)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.HiberHiberFileTicks", hiber_hiber_file_ticks, 0xc0, 0x40, true, 0x37e611a0dc3aa58b)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.HiberCompressTicks", hiber_compress_ticks, 0x100, 0x40, true, 0xb86d6ddacadb856b)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.HiberSharedBufferTicks", hiber_shared_buffer_ticks, 0x140, 0x40, true, 0xf4ac4d31abdab028)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.HiberChecksumTicks", hiber_checksum_ticks, 0x180, 0x40, true, 0xb7ce4815321c9066)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.HiberChecksumIoTicks", hiber_checksum_io_ticks, 0x1c0, 0x40, true, 0x3be7a77edbf372c9)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PO_HIBER_PERF.TotalHibernateTime", total_hibernate_time, 0x200, 0x40, true, 0x9d99e82178238bfe)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PO_HIBER_PERF.HibernateCompleteTimestamp", hibernate_complete_timestamp, 0x240, 0x40, true, 0x91f359bfc221dbcb)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_HIBER_PERF.POSTTime", post_time, 0x280, 0x20, true, 0x75a894c659c49dde)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_HIBER_PERF.ResumeBootMgrTime", resume_boot_mgr_time, 0x2a0, 0x20, true, 0xe6dbbd0d854cb24e)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_HIBER_PERF.BootmgrUserInputTime", bootmgr_user_input_time, 0x2c0, 0x20, true, 0x44827e9d38ca8f53)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeAppTicks", resume_app_ticks, 0x300, 0x40, true, 0x5f2762d81903e6aa)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeAppStartTimestamp", resume_app_start_timestamp, 0x340, 0x40, true, 0x13a2242975fa30a5)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeLibraryInitTicks", resume_library_init_ticks, 0x380, 0x40, true, 0xc1c1d37e48c67a07)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeInitTicks", resume_init_ticks, 0x3c0, 0x40, true, 0x27693d7098b5f4ba)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeRestoreImageStartTimestamp", resume_restore_image_start_timestamp, 0x400, 0x40, true, 0x2897c3632bc00d28)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeHiberFileTicks", resume_hiber_file_ticks, 0x440, 0x40, true, 0x5b11f9fefff54d6e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeIoTicks", resume_io_ticks, 0x480, 0x40, true, 0x51e7a29433858db1)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeDecompressTicks", resume_decompress_ticks, 0x4c0, 0x40, true, 0xe64a72fc192311bb)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeAllocateTicks", resume_allocate_ticks, 0x500, 0x40, true, 0xceee00c55d7f6140)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeUserInOutTicks", resume_user_in_out_ticks, 0x540, 0x40, true, 0x7b1112bf52f9210)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeMapTicks", resume_map_ticks, 0x580, 0x40, true, 0xc76cc42322e5c80b)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeUnmapTicks", resume_unmap_ticks, 0x5c0, 0x40, true, 0x465b38128c9ffbb4)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeChecksumTicks", resume_checksum_ticks, 0x600, 0x40, true, 0x35ea5ae6f6fc24cd)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeChecksumIoTicks", resume_checksum_io_ticks, 0x640, 0x40, true, 0x3441f7071db0bbaa)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeKernelSwitchTimestamp", resume_kernel_switch_timestamp, 0x680, 0x40, true, 0x3db315f598bcf026)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.WriteLogDataTimestamp", write_log_data_timestamp, 0x700, 0x40, true, 0xc75fa1debfa556fa)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelReturnFromHandler", kernel_return_from_handler, 0x740, 0x40, true, 0x51d618a0e134933d)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.TimeStampCounterAtSwitchTime", time_stamp_counter_at_switch_time, 0x780, 0x40, true, 0xee1b7f3beb835c52)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.SleeperThreadEnd", sleeper_thread_end, 0x840, 0x40, true, 0x8abfec27d155b02d)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelReturnSystemPowerStateTimestamp", kernel_return_system_power_state_timestamp, 0x8c0, 0x40, true, 0xf7f46b8d87edd7c)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.IoBoundedness", io_boundedness, 0x900, 0x40, true, 0x3fdf2bccb9fa772e)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelDecompressTicks", kernel_decompress_ticks, 0x940, 0x40, true, 0x13006c751bcd98b5)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelIoTicks", kernel_io_ticks, 0x980, 0x40, true, 0xed7aa4139a14b4d7)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelCopyTicks", kernel_copy_ticks, 0x9c0, 0x40, true, 0xfbde7d2ccfe15326)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ReadCheckCount", read_check_count, 0xa00, 0x40, true, 0x35222bfbd9fb8163)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelInitTicks", kernel_init_ticks, 0xa40, 0x40, true, 0xfc29a98e4e0b525)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelResumeHiberFileTicks", kernel_resume_hiber_file_ticks, 0xa80, 0x40, true, 0xc9511b63ecd453ff)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelIoCpuTicks", kernel_io_cpu_ticks, 0xac0, 0x40, true, 0x20d211000bf3862a)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelSharedBufferTicks", kernel_shared_buffer_ticks, 0xb00, 0x40, true, 0xb7cbbf03eda9fd2)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelAnimationTicks", kernel_animation_ticks, 0xb40, 0x40, true, 0x7b8291aa8cfcc9ac)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelChecksumTicks", kernel_checksum_ticks, 0xb80, 0x40, true, 0x16be8fe7d020944d)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelChecksumIoTicks", kernel_checksum_io_ticks, 0xbc0, 0x40, true, 0x4b224148d5ad2d95)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PO_HIBER_PERF.AnimationStart", animation_start, 0xc00, 0x40, true, 0x87f5651624c83322)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PO_HIBER_PERF.AnimationStop", animation_stop, 0xc40, 0x40, true, 0x1abdbbc4056bb2fb)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_HIBER_PERF.DeviceResumeTime", device_resume_time, 0xc80, 0x20, true, 0xd73e88a65f724c73)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.SecurePagesProcessed", secure_pages_processed, 0xcc0, 0x40, true, 0x22a0dddc52ab4b88)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.BootPagesProcessed", boot_pages_processed, 0xd00, 0x40, true, 0x1d1ae86faf3ed36)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelPagesProcessed", kernel_pages_processed, 0xd40, 0x40, true, 0x5d5b17ef46c5f497)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.BootBytesWritten", boot_bytes_written, 0xd80, 0x40, true, 0xf97686b35f0a7dd5)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelBytesWritten", kernel_bytes_written, 0xdc0, 0x40, true, 0x663fe933fee3fc83)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.BootPagesWritten", boot_pages_written, 0xe00, 0x40, true, 0x511d9f53752af367)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.KernelPagesWritten", kernel_pages_written, 0xe40, 0x40, true, 0xd8a27b5801f7047)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.BytesWritten", bytes_written, 0xe80, 0x40, true, 0x43b9b60bce342d04)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_HIBER_PERF.PagesWritten", pages_written, 0xec0, 0x20, true, 0x310456ad327c5d8f)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_HIBER_PERF.FileRuns", file_runs, 0xee0, 0x20, true, 0x7bdca0ca9b25a4b1)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_HIBER_PERF.NoMultiStageResumeReason", no_multi_stage_resume_reason, 0xf00, 0x20, true, 0xec9bb09ae031c6e1)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_HIBER_PERF.MaxHuffRatio", max_huff_ratio, 0xf20, 0x20, true, 0x371d5942ed0bb12d)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.AdjustedTotalResumeTime", adjusted_total_resume_time, 0xf40, 0x40, true, 0x46fb0fc16bd37167)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.ResumeCompleteTimestamp", resume_complete_timestamp, 0xf80, 0x40, true, 0x6b240cfa6dff9522)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.HalTscOffset", hal_tsc_offset, 0x7c0, 0x40, true, 0x97be76ca458419c)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.HvlTscOffset", hvl_tsc_offset, 0x800, 0x40, true, 0x4a8526a11f9ce804)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.CyclesPerMs", cycles_per_ms, 0x6c0, 0x40, true, 0x517d980e4f6875d2)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.PostCmosUpdateTimestamp", post_cmos_update_timestamp, 0x880, 0x40, true, 0x7896364fa779067d)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.WinresumeExitTimestamp", winresume_exit_timestamp, 0x0, 0x0, false, 0x9ba09d6ac728131d)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.TcbLoaderStartTimestamp", tcb_loader_start_timestamp, 0x0, 0x0, false, 0x89a0b8889f84b57f)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.TcbLoaderEndTimestamp", tcb_loader_end_timestamp, 0x0, 0x0, false, 0x44d4f49050cdf6e6)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.RemappedPageLookupCycles", remapped_page_lookup_cycles, 0x0, 0x0, false, 0xeebacea36d368790)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.TcbLaunchPrepareCycles", tcb_launch_prepare_cycles, 0x0, 0x0, false, 0x4f6abfc1f2dc4a42)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.TcbLaunchPrepareDataCycles", tcb_launch_prepare_data_cycles, 0x0, 0x0, false, 0xb10400103a7a2131)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.TcbRestoreStateCycles", tcb_restore_state_cycles, 0x0, 0x0, false, 0x1e5a8dad94e35d7c)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.DecryptVsmPagesPhase0Cycles", decrypt_vsm_pages_phase0_cycles, 0x0, 0x0, false, 0x7e86b33b2364302a)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.DecryptVsmPagesPhase1Cycles", decrypt_vsm_pages_phase1_cycles, 0x0, 0x0, false, 0x1fbb9028e28761f9)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.DecryptVsmPagesPhase2Cycles", decrypt_vsm_pages_phase2_cycles, 0x0, 0x0, false, 0xfa9dd0d87cb2c43b)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.TcbLoaderAuthenticateCycles", tcb_loader_authenticate_cycles, 0x0, 0x0, false, 0xe892279c0c5e1841)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.TcbLoaderDecryptCycles", tcb_loader_decrypt_cycles, 0x0, 0x0, false, 0x1f87333d9d7237ed)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_HIBER_PERF.TcbLoaderValidateCycles", tcb_loader_validate_cycles, 0x0, 0x0, false, 0xb58362ba0c1aacb9)
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
#endif