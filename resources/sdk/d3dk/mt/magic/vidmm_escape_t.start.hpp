#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::vidmmescapetype_t), "_D3DKMT_VIDMM_ESCAPE.Type", type, 0x0, 0x20, true, 0x59ee61bd3d034f2e)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.ProbeAndLock", probe_and_lock, 0x0, 0x1, true, 0x7076abef956eed60, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.SplitPoint", split_point, 0x1, 0x1, true, 0x7737761ed85e77f2, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.NoDemotion", no_demotion, 0x2, 0x1, true, 0x7e4b402f4c9395f4, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.SwizzlingAperture", swizzling_aperture, 0x3, 0x1, true, 0x3ec69ec22795ff07, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.PagingPathLockSubRange", paging_path_lock_sub_range, 0x4, 0x1, true, 0x26bd84d78ac247c1, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.PagingPathLockMinRange", paging_path_lock_min_range, 0x5, 0x1, true, 0x9fd9212d1e296483, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.ComplexLock", complex_lock, 0x6, 0x1, true, 0xccb14bb3d54dad67, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.FailVARotation", fail_va_rotation, 0x7, 0x1, true, 0x479a85e7b6cfc866, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.NoWriteCombined", no_write_combined, 0x8, 0x1, true, 0xc01aede3f67e0f47, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.NoPrePatching", no_pre_patching, 0x9, 0x1, true, 0x1e6da19b09a931b1, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.AlwaysRepatch", always_repatch, 0xa, 0x1, true, 0x427653f68aab1521, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.ExpectPreparationFailure", expect_preparation_failure, 0xb, 0x1, true, 0x140f7f7c9d24daea, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.FailUserModeVAMapping", fail_user_mode_va_mapping, 0xc, 0x1, true, 0x400ede4e00f1d072, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.NeverDiscardOfferedAllocation", never_discard_offered_allocation, 0xd, 0x1, true, 0x967b0fdbf4d6ee50, 1, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.AlwaysDiscardOfferedAllocation", always_discard_offered_allocation, 0xe, 0x1, true, 0x12fd85a7f2b12292, 1, uint32_t)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDMM_ESCAPE.SetFault.Value", value, 0x0, 0x20, true, 0x5f0971095c1a98e0)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_set_fault_t), "_D3DKMT_VIDMM_ESCAPE.SetFault", set_fault, 0x40, 0x20, true, 0x91ba569ab32efad9)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDMM_ESCAPE.Evict.ResourceHandle", resource_handle, 0x0, 0x20, true, 0x9a869a30db869a40)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDMM_ESCAPE.Evict.AllocationHandle", allocation_handle, 0x20, 0x20, true, 0x954ce273ca8790ca)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_VIDMM_ESCAPE.Evict.hProcess", h_process, 0x40, 0x40, true, 0x93393063c0d3a79b)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_evict_t), "_D3DKMT_VIDMM_ESCAPE.Evict", evict, 0x40, 0x80, true, 0xdf4b3e54042a796a)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VIDMM_ESCAPE.EvictByNtHandle.NtHandle", nt_handle, 0x0, 0x40, true, 0x25c9bbc9dd1d1001)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_evict_by_nt_handle_t), "_D3DKMT_VIDMM_ESCAPE.EvictByNtHandle", evict_by_nt_handle, 0x40, 0x40, true, 0xa953e4adf326d5ae)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDMM_ESCAPE.GetVads.GetNumVads.NumVads", num_vads, 0x0, 0x20, true, 0xcd69ecc38ebcf776)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u4_get_num_vads_t), "_D3DKMT_VIDMM_ESCAPE.GetVads.GetNumVads", get_num_vads, 0x0, 0x20, true, 0x4cda98bfccefc0f5)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::vad_desc_t), "_D3DKMT_VIDMM_ESCAPE.GetVads.GetVad", get_vad, 0x0, 0x40, true, 0x75c8939e7ed176f4)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::va_range_desc_t), "_D3DKMT_VIDMM_ESCAPE.GetVads.GetVadRange", get_vad_range, 0x0, 0x40, true, 0xeb2da4c9b180e9da)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::get_gpummu_caps_t), "_D3DKMT_VIDMM_ESCAPE.GetVads.GetGpuMmuCaps", get_gpu_mmu_caps, 0x0, 0x40, true, 0x3a42a5f9f3e1b203)
#define _m29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::get_pte_t), "_D3DKMT_VIDMM_ESCAPE.GetVads.GetPte", get_pte, 0x0, 0x80, true, 0xc0f334e7ae3bdd5c)
#define _m30 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::get_segment_caps_t), "_D3DKMT_VIDMM_ESCAPE.GetVads.GetSegmentCaps", get_segment_caps, 0x0, 0x40, true, 0xd7c23d5f73c635cf)
#define _m31 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::vad_escape_command_t), "_D3DKMT_VIDMM_ESCAPE.GetVads.Command", command, 0x2180, 0x20, true, 0x7909e474758b8b3e)
#define _m32 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_VIDMM_ESCAPE.GetVads.Status", status, 0x21a0, 0x20, true, 0x85a343cde739b843)
#define _m33 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_get_vads_t), "_D3DKMT_VIDMM_ESCAPE.GetVads", get_vads, 0x40, 0xc0, true, 0x86b3a1fee07a1a22)
#define _m34 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VIDMM_ESCAPE.SetBudget.LocalMemoryBudget", local_memory_budget, 0x0, 0x40, true, 0x3cc8bd2ac6c315b3)
#define _m35 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VIDMM_ESCAPE.SetBudget.SystemMemoryBudget", system_memory_budget, 0x40, 0x40, true, 0xa60d71c51b784b7)
#define _m36 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_set_budget_t), "_D3DKMT_VIDMM_ESCAPE.SetBudget", set_budget, 0x40, 0x80, true, 0xe5cce29efcc05c5b)
#define _m37 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_VIDMM_ESCAPE.SuspendProcess.hProcess", h_process, 0x0, 0x40, true, 0xf95c9438d5f4eed3)
#define _m38 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_VIDMM_ESCAPE.SuspendProcess.bAllowWakeOnSubmission", b_allow_wake_on_submission, 0x40, 0x20, true, 0x21673d8526e9f18e)
#define _m39 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u6_suspend_process_t), "_D3DKMT_VIDMM_ESCAPE.SuspendProcess", suspend_process, 0x40, 0x80, true, 0x25d6f5c484cc3f84)
#define _m40 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_VIDMM_ESCAPE.ResumeProcess.hProcess", h_process, 0x0, 0x40, true, 0xcbf62913da7ec0eb)
#define _m41 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u7_resume_process_t), "_D3DKMT_VIDMM_ESCAPE.ResumeProcess", resume_process, 0x40, 0x40, true, 0x9e3d98eaa38b459e)
#define _m42 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VIDMM_ESCAPE.GetBudget.NumBytesToTrim", num_bytes_to_trim, 0x0, 0x40, true, 0xa1323be977440541)
#define _m43 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u8_get_budget_t), "_D3DKMT_VIDMM_ESCAPE.GetBudget", get_budget, 0x40, 0x40, true, 0x2271518a178aed51)
#define _m44 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDMM_ESCAPE.SetTrimIntervals.MinTrimInterval", min_trim_interval, 0x0, 0x20, true, 0x63141b01d66943b6)
#define _m45 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDMM_ESCAPE.SetTrimIntervals.MaxTrimInterval", max_trim_interval, 0x20, 0x20, true, 0x16975720e6f75ada)
#define _m46 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDMM_ESCAPE.SetTrimIntervals.IdleTrimInterval", idle_trim_interval, 0x40, 0x20, true, 0x1cbeeac41e54fd60)
#define _m47 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u9_set_trim_intervals_t), "_D3DKMT_VIDMM_ESCAPE.SetTrimIntervals", set_trim_intervals, 0x40, 0x60, true, 0x7ddca026f441c67d)
#define _m48 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::eviction_criteria_t), "_D3DKMT_VIDMM_ESCAPE.EvictByCriteria", evict_by_criteria, 0x40, 0xc0, true, 0xf0bd9c63d10185d9)
#define _m49 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_VIDMM_ESCAPE.Wake.bFlush", b_flush, 0x0, 0x20, true, 0x18a2021265c89f37)
#define _m50 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_wake_t), "_D3DKMT_VIDMM_ESCAPE.Wake", wake, 0x40, 0x20, true, 0x395a14ee2f679418)
#define _m51 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::defrag_escape_operation_t), "_D3DKMT_VIDMM_ESCAPE.Defrag.Operation", operation, 0x0, 0x20, true, 0x1df96ae380fa2e86)
#define _m52 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDMM_ESCAPE.Defrag.SegmentId", segment_id, 0x20, 0x20, true, 0xb10ff069f172c148)
#define _m53 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VIDMM_ESCAPE.Defrag.TotalCommitted", total_committed, 0x40, 0x40, true, 0x6056c2a69a36664d)
#define _m54 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VIDMM_ESCAPE.Defrag.TotalFree", total_free, 0x80, 0x40, true, 0x4d4866aae83d52be)
#define _m55 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VIDMM_ESCAPE.Defrag.LargestGapBefore", largest_gap_before, 0xc0, 0x40, true, 0xcdb7d2b2d32766f4)
#define _m56 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VIDMM_ESCAPE.Defrag.LargestGapAfter", largest_gap_after, 0x100, 0x40, true, 0x1f8d4041c4d4f8fa)
#define _m57 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u11_defrag_t), "_D3DKMT_VIDMM_ESCAPE.Defrag", defrag, 0x40, 0x40, true, 0xca0d75e60ac97a0c)
#define _m58 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDMM_ESCAPE.DelayExecution.hPagingQueue", h_paging_queue, 0x0, 0x20, true, 0xd7855cca253575ce)
#define _m59 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDMM_ESCAPE.DelayExecution.PhysicalAdapterIndex", physical_adapter_index, 0x20, 0x20, true, 0xbfb11099bbf3b2d2)
#define _m60 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDMM_ESCAPE.DelayExecution.Milliseconds", milliseconds, 0x40, 0x20, true, 0xf6608497e3e81da)
#define _m61 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VIDMM_ESCAPE.DelayExecution.PagingFenceValue", paging_fence_value, 0x80, 0x40, true, 0x80c5cd615dd8060c)
#define _m62 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u12_delay_execution_t), "_D3DKMT_VIDMM_ESCAPE.DelayExecution", delay_execution, 0x40, 0xc0, true, 0x3a044d1f2b9e65f4)
#define _m63 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDMM_ESCAPE.VerifyIntegrity.SegmentId", segment_id, 0x0, 0x20, true, 0x1bb4e90a442f91c9)
#define _m64 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u13_verify_integrity_t), "_D3DKMT_VIDMM_ESCAPE.VerifyIntegrity", verify_integrity, 0x40, 0x20, true, 0x7c2a5c4e30ce154b)
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
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#define _m42
#define _m43
#define _m44
#define _m45
#define _m46
#define _m47
#define _m48
#define _m49
#define _m50
#define _m51
#define _m52
#define _m53
#define _m54
#define _m55
#define _m56
#define _m57
#define _m58
#define _m59
#define _m60
#define _m61
#define _m62
#define _m63
#define _m64
#endif