#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_verifier_information_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.Legacy", legacy, 0x0, 0x80, true, 0xb770f34501fe3710)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.RaiseIrqls", raise_irqls, 0x480, 0x20, true, 0x8a3695ddcf15e9d7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.AcquireSpinLocks", acquire_spin_locks, 0x4a0, 0x20, true, 0x72e885f6b83b3b6e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.SynchronizeExecutions", synchronize_executions, 0x4c0, 0x20, true, 0x99ecd35b68997ef9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.AllocationsWithNoTag", allocations_with_no_tag, 0x4e0, 0x20, true, 0x89eadb5093ee5a5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.AllocationsFailed", allocations_failed, 0x500, 0x20, true, 0x1d29672dd250b2e7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.AllocationsFailedDeliberately", allocations_failed_deliberately, 0x520, 0x20, true, 0x8a4e0ed9852bfba5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.LockedBytes", locked_bytes, 0x540, 0x40, true, 0xac7aedcbec9a3540)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.PeakLockedBytes", peak_locked_bytes, 0x580, 0x40, true, 0xbf47fa377661dfea)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.MappedLockedBytes", mapped_locked_bytes, 0x5c0, 0x40, true, 0xc46457096c71bd82)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.PeakMappedLockedBytes", peak_mapped_locked_bytes, 0x600, 0x40, true, 0x55b10395f1214e24)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.MappedIoSpaceBytes", mapped_io_space_bytes, 0x640, 0x40, true, 0x94f55b907795dc01)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.PeakMappedIoSpaceBytes", peak_mapped_io_space_bytes, 0x680, 0x40, true, 0x4527fa894043b213)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.PagesForMdlBytes", pages_for_mdl_bytes, 0x6c0, 0x40, true, 0xeb22e0af308f3b72)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.PeakPagesForMdlBytes", peak_pages_for_mdl_bytes, 0x700, 0x40, true, 0xd9dd64e48fa2396b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.ContiguousMemoryBytes", contiguous_memory_bytes, 0x740, 0x40, true, 0x7340dfa9705d53fe)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.PeakContiguousMemoryBytes", peak_contiguous_memory_bytes, 0x780, 0x40, true, 0xd3d17fcbaebb6dce)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.ExecutePoolTypes", execute_pool_types, 0x7c0, 0x20, true, 0xdd8ea5ebda7ff126)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.ExecutePageProtections", execute_page_protections, 0x7e0, 0x20, true, 0x57a085881df89538)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.ExecutePageMappings", execute_page_mappings, 0x800, 0x20, true, 0x3eb47a73898b64a6)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.ExecuteWriteSections", execute_write_sections, 0x820, 0x20, true, 0x625bbdcc92ae8412)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.SectionAlignmentFailures", section_alignment_failures, 0x840, 0x20, true, 0xbc597b05268e1e40)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.IATInExecutableSection", iat_in_executable_section, 0x860, 0x20, true, 0xcb55d4f7a154d67f)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.UnsupportedRelocs", unsupported_relocs, 0x0, 0x0, false, 0x3793a0f47608e152)
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
#define _m23
#endif