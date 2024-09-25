#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_HIBER_CONTEXT.Reset", reset, 0x0, 0x8, true, 0x3069185aa359c944)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_HIBER_CONTEXT.HiberFlags", hiber_flags, 0x8, 0x8, true, 0xed01d5ea5ada6244)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_HIBER_CONTEXT.WroteHiberFile", wrote_hiber_file, 0x10, 0x8, true, 0x8736cd5288c84225)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_HIBER_CONTEXT.KernelPhaseVerificationActive", kernel_phase_verification_active, 0x18, 0x8, true, 0xf16650d2dc331d55)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_POP_HIBER_CONTEXT.InitializationFinished", initialization_finished, 0x20, 0x8, true, 0x4b9487ad682191a0)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_HIBER_CONTEXT.NextTableLockHeld", next_table_lock_held, 0x40, 0x20, true, 0x27d848ba98c1f67)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_HIBER_CONTEXT.BootPhaseFinishedBarrier", boot_phase_finished_barrier, 0x60, 0x20, true, 0xea65c9bd11bdb3e)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_HIBER_CONTEXT.KernelResumeFinishedBarrier", kernel_resume_finished_barrier, 0x80, 0x20, true, 0x95b56abaa88e1ed1)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_HIBER_CONTEXT.HvCaptureReadyBarrier", hv_capture_ready_barrier, 0xa0, 0x20, true, 0x8f4e74e9dbe98619)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_HIBER_CONTEXT.HvCaptureCompletedBarrier", hv_capture_completed_barrier, 0xc0, 0x20, true, 0x2f9e38406551187a)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_HIBER_CONTEXT.MapFrozen", map_frozen, 0xe0, 0x8, true, 0x3234a01ba1e1bff6)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_POP_HIBER_CONTEXT.DiscardMap", discard_map, 0x100, 0x80, true, 0xb5ec63882cd4a202)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_POP_HIBER_CONTEXT.KernelPhaseMap", kernel_phase_map, 0x100, 0x80, true, 0x7ed9be1c4854fc7a)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_POP_HIBER_CONTEXT.BootPhaseMap", boot_phase_map, 0x180, 0x80, true, 0x771aeefeb721834e)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_HIBER_CONTEXT.ClonedRanges", cloned_ranges, 0x200, 0x80, true, 0x545bd3537769e2fb)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_HIBER_CONTEXT.ClonedRangeCount", cloned_range_count, 0x280, 0x20, true, 0xc43b01e83f540db7)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_HIBER_CONTEXT.ClonedPageCount", cloned_page_count, 0x2c0, 0x40, true, 0xd5c7b3ae3c83737f)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t*), "_POP_HIBER_CONTEXT.CurrentMap", current_map, 0x300, 0x40, true, 0x2f814784701dd9ca)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_POP_HIBER_CONTEXT.NextCloneRange", next_clone_range, 0x340, 0x40, true, 0xf2119fcf8c0a118e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_HIBER_CONTEXT.NextPreserve", next_preserve, 0x380, 0x40, true, 0xc6a79d1efdefaeef)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_POP_HIBER_CONTEXT.LoaderMdl", loader_mdl, 0x3c0, 0x40, true, 0x11e0d46591f72a6a)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_POP_HIBER_CONTEXT.AllocatedMdl", allocated_mdl, 0x400, 0x40, true, 0xb1548fc1fb8e3471)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_HIBER_CONTEXT.PagesOut", pages_out, 0x440, 0x40, true, 0xe39945833edbdb12)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_HIBER_CONTEXT.IoPages", io_pages, 0x480, 0x40, true, 0x49139b06c5ee7d3a)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_HIBER_CONTEXT.IoPagesCount", io_pages_count, 0x4c0, 0x20, true, 0x97dec7ff681643c8)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_HIBER_CONTEXT.CurrentMcb", current_mcb, 0x500, 0x40, true, 0x46438019a48fc1e4)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dump_stack_context_t*), "_POP_HIBER_CONTEXT.DumpStack", dump_stack, 0x540, 0x40, true, 0xa126e95e293a37)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kprocessor_state_t*), "_POP_HIBER_CONTEXT.WakeState", wake_state, 0x580, 0x40, true, 0x7d936512226c471f)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_HIBER_CONTEXT.IoProgress", io_progress, 0x5c0, 0x20, true, 0xf2a4d6604aa1c68a)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_HIBER_CONTEXT.Status", status, 0x5e0, 0x20, true, 0xe111a332cd5761bc)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_HIBER_CONTEXT.GraphicsProc", graphics_proc, 0x600, 0x20, true, 0xa240bf16bdfcf0c7)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::memory_image_t*), "_POP_HIBER_CONTEXT.MemoryImage", memory_image, 0x640, 0x40, true, 0x7e548c0faacace13)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_POP_HIBER_CONTEXT.PerformanceStats", performance_stats, 0x680, 0x40, true, 0x373e9bda42e7fde)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_POP_HIBER_CONTEXT.BootLoaderLogMdl", boot_loader_log_mdl, 0x6c0, 0x40, true, 0x39861e838706c4f1)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_POP_HIBER_CONTEXT.FirmwareRuntimeInformationMdl", firmware_runtime_information_mdl, 0x700, 0x40, true, 0x28c69462d435ec93)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_HIBER_CONTEXT.FirmwareRuntimeInformationVa", firmware_runtime_information_va, 0x740, 0x40, true, 0xe1ddef88263ee6a0)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_HIBER_CONTEXT.ResumeContext", resume_context, 0x780, 0x40, true, 0xc3ebcd67b469fe68)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_HIBER_CONTEXT.ResumeContextPages", resume_context_pages, 0x7c0, 0x20, true, 0x536d4bd56bbdc194)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_HIBER_CONTEXT.SecurePages", secure_pages, 0x7e0, 0x20, true, 0x85d703abdffcaee7)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_HIBER_CONTEXT.ProcessorCount", processor_count, 0x800, 0x20, true, 0x4398395bc40dab8f)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::per_processor_context_t*), "_POP_HIBER_CONTEXT.ProcessorContext", processor_context, 0x840, 0x40, true, 0xe160574123b99c19)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_POP_HIBER_CONTEXT.ProdConsBuffer", prod_cons_buffer, 0x880, 0x40, true, 0xda1cea05d43fac7e)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_HIBER_CONTEXT.ProdConsSize", prod_cons_size, 0x8c0, 0x20, true, 0x5132c40235e039ea)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_HIBER_CONTEXT.MaxDataPages", max_data_pages, 0x8e0, 0x20, true, 0xec73896bfa3ba4fb)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_HIBER_CONTEXT.ExtraBuffer", extra_buffer, 0x900, 0x40, true, 0xf174e23f0f628e4)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_HIBER_CONTEXT.ExtraBufferSize", extra_buffer_size, 0x940, 0x40, true, 0x222eae3aa0cdfa90)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_HIBER_CONTEXT.ExtraMapVa", extra_map_va, 0x980, 0x40, true, 0x9fd5b50c6b5b28d7)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_HIBER_CONTEXT.BitlockerKeyPFN", bitlocker_key_pfn, 0x9c0, 0x40, true, 0x94985bf839c2528f)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::io_info_t), "_POP_HIBER_CONTEXT.IoInfo", io_info, 0xa00, 0x80, true, 0x541b5ea700b4dfe7)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_POP_HIBER_CONTEXT.IoChecksums", io_checksums, 0xd80, 0x40, true, 0xc9754f03f7592617)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_HIBER_CONTEXT.IoChecksumsSize", io_checksums_size, 0xdc0, 0x40, true, 0xdc7989d7a774c0b9)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_HIBER_CONTEXT.HardwareConfigurationSignature", hardware_configuration_signature, 0xe00, 0x20, true, 0x7288f31c43f0fddf)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_HIBER_CONTEXT.IumEnabled", ium_enabled, 0xe20, 0x8, true, 0xd1eb6278a34c3223)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_HIBER_CONTEXT.SecureBoot", secure_boot, 0xe28, 0x8, true, 0x87a23520ad03f9e3)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_HIBER_CONTEXT.SiLogOffset", si_log_offset, 0x0, 0x0, false, 0x76fe37d73e4e7c83)
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
#endif