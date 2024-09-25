#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::interrupt_type_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.InterruptType", interrupt_type, 0x0, 0x20, true, 0x7cb1ef8741df8172)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaCompleted.SubmissionFenceId", submission_fence_id, 0x0, 0x20, true, 0x1d2478cc7b9227e9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaCompleted.NodeOrdinal", node_ordinal, 0x20, 0x20, true, 0x3f952d4aee5587e6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaCompleted.EngineOrdinal", engine_ordinal, 0x40, 0x20, true, 0x391dc0d0e9a54ba8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_dma_completed_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaCompleted", dma_completed, 0x40, 0x60, true, 0xac8d744d4190ed97)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPreempted.PreemptionFenceId", preemption_fence_id, 0x0, 0x20, true, 0xed33da6c3f193728)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPreempted.LastCompletedFenceId", last_completed_fence_id, 0x20, 0x20, true, 0xc09177f7205689c3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPreempted.NodeOrdinal", node_ordinal, 0x40, 0x20, true, 0xdceb8a89dc9807d8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPreempted.EngineOrdinal", engine_ordinal, 0x60, 0x20, true, 0xa32605afedfe7245)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_dma_preempted_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPreempted", dma_preempted, 0x40, 0x80, true, 0xe0b8d72866bcc0ee)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaFaulted.FaultedFenceId", faulted_fence_id, 0x0, 0x20, true, 0x86dd1f8d16165cce)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaFaulted.Status", status, 0x20, 0x20, true, 0xe1981e7e9a567761)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaFaulted.NodeOrdinal", node_ordinal, 0x40, 0x20, true, 0x55c6aa2b2d1c022b)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaFaulted.EngineOrdinal", engine_ordinal, 0x60, 0x20, true, 0xa75f6de49fcef50a)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_dma_faulted_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaFaulted", dma_faulted, 0x40, 0x80, true, 0x281e971bc4a05cb7)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsync.VidPnTargetId", vid_pn_target_id, 0x0, 0x20, true, 0x236b95cc1deb2b2c)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsync.PhysicalAddress", physical_address, 0x40, 0x40, true, 0xdecac172373f00c8)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsync.PhysicalAdapterMask", physical_adapter_mask, 0x80, 0x20, true, 0xe565c57af5d1dc3f)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_crtc_vsync_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsync", crtc_vsync, 0x40, 0xc0, true, 0xdfd063703745fe5)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DisplayOnlyVsync.VidPnTargetId", vid_pn_target_id, 0x0, 0x20, true, 0x7af8370eeabf163a)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u4_display_only_vsync_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DisplayOnlyVsync", display_only_vsync, 0x40, 0x20, true, 0xcd78d823373ac7d0)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay.VidPnTargetId", vid_pn_target_id, 0x0, 0x20, true, 0x22108f11b96bb5f)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay.PhysicalAdapterMask", physical_adapter_mask, 0x20, 0x20, true, 0x914031be7a50a578)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay.MultiPlaneOverlayVsyncInfoCount", multi_plane_overlay_vsync_info_count, 0x40, 0x20, true, 0x3fef50534785b8df)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_vsync_info_t*), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo", p_multi_plane_overlay_vsync_info, 0x80, 0x40, true, 0x7ce27412730c5320)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_crtc_vsync_with_multi_plane_overlay_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay", crtc_vsync_with_multi_plane_overlay, 0x40, 0xc0, true, 0x7d2ee3fa59b7fbd)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::arg::cb::present_displayonly_progress_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DisplayOnlyPresentProgress", display_only_present_progress, 0x40, 0x40, true, 0xd8e007ecb32eff87)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.MiracastEncodeChunkCompleted.VidPnTargetId", vid_pn_target_id, 0x0, 0x20, true, 0x362063b6c66a5ed7)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::miracast_chunk_info_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.MiracastEncodeChunkCompleted.ChunkInfo", chunk_info, 0x40, 0xc0, true, 0xef6ea4092448ae66)
#define _m29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.MiracastEncodeChunkCompleted.pPrivateDriverData", p_private_driver_data, 0x100, 0x40, true, 0x1476ff7a20452645)
#define _m30 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.MiracastEncodeChunkCompleted.PrivateDataDriverSize", private_data_driver_size, 0x140, 0x20, true, 0xae082c8dd999756f)
#define _m31 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.MiracastEncodeChunkCompleted.Status", status, 0x160, 0x20, true, 0x5bad35fb56c6a5bf)
#define _m32 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u6_miracast_encode_chunk_completed_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.MiracastEncodeChunkCompleted", miracast_encode_chunk_completed, 0x40, 0x80, true, 0x423495d71221654)
#define _m33 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPageFaulted.FaultedFenceId", faulted_fence_id, 0x0, 0x20, true, 0x3e667fbc7e3ee456)
#define _m34 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPageFaulted.FaultedPrimitiveAPISequenceNumber", faulted_primitive_api_sequence_number, 0x40, 0x40, true, 0x4ba5a3cb24c3d813)
#define _m35 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::render_pipeline_stage_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPageFaulted.FaultedPipelineStage", faulted_pipeline_stage, 0x80, 0x20, true, 0xcabf8074bc21c052)
#define _m36 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPageFaulted.FaultedBindTableEntry", faulted_bind_table_entry, 0xa0, 0x20, true, 0xc4b2f276b13d94ba)
#define _m37 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::page_fault_flags_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPageFaulted.PageFaultFlags", page_fault_flags, 0xc0, 0x20, true, 0xfd2d32fb88882d1)
#define _m38 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPageFaulted.FaultedVirtualAddress", faulted_virtual_address, 0x100, 0x40, true, 0xd1756f3730b3c8b0)
#define _m39 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPageFaulted.NodeOrdinal", node_ordinal, 0x140, 0x20, true, 0xb96ca7a0c408849)
#define _m40 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPageFaulted.EngineOrdinal", engine_ordinal, 0x160, 0x20, true, 0x71cc553c9c86242f)
#define _m41 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPageFaulted.PageTableLevel", page_table_level, 0x180, 0x20, true, 0xd819a42c09062fe1)
#define _m42 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::fault_error_code_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPageFaulted.FaultErrorCode", fault_error_code, 0x1a0, 0x20, true, 0x377ef5c66bdd280)
#define _m43 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPageFaulted.FaultedProcessHandle", faulted_process_handle, 0x1c0, 0x40, true, 0xa3193986a4ce4833)
#define _m44 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u7_dma_page_faulted_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPageFaulted", dma_page_faulted, 0x40, 0x0, true, 0x723a026fe4bf9881)
#define _m45 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay2.VidPnTargetId", vid_pn_target_id, 0x0, 0x20, true, 0xb86ba51a6f99fc56)
#define _m46 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay2.PhysicalAdapterMask", physical_adapter_mask, 0x20, 0x20, true, 0xa92ea56d4fd02ce5)
#define _m47 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay2.MultiPlaneOverlayVsyncInfoCount", multi_plane_overlay_vsync_info_count, 0x40, 0x20, true, 0xeb9bc9a8b60721d2)
#define _m48 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_vsync_info2_t*), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay2.pMultiPlaneOverlayVsyncInfo", p_multi_plane_overlay_vsync_info, 0x80, 0x40, true, 0x774ae955bf7df909)
#define _m49 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay2.GpuFrequency", gpu_frequency, 0xc0, 0x40, true, 0x7ca3e93e5d23f2ce)
#define _m50 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay2.GpuClockCounter", gpu_clock_counter, 0x100, 0x40, true, 0xcc8a8e67f4d0a1a)
#define _m51 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u8_crtc_vsync_with_multi_plane_overlay2_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay2", crtc_vsync_with_multi_plane_overlay2, 0x40, 0x40, true, 0x107ac47667d84741)
#define _m52 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.MonitoredFenceSignaled.NodeOrdinal", node_ordinal, 0x0, 0x20, true, 0x4de12d03eb6b69d0)
#define _m53 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.MonitoredFenceSignaled.EngineOrdinal", engine_ordinal, 0x20, 0x20, true, 0x8255c8c900ba44de)
#define _m54 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u9_monitored_fence_signaled_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.MonitoredFenceSignaled", monitored_fence_signaled, 0x40, 0x40, true, 0x953d10de8a317cdc)
#define _m55 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwContextListSwitchCompleted.NodeOrdinal", node_ordinal, 0x0, 0x20, true, 0x26491a552401e645)
#define _m56 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwContextListSwitchCompleted.EngineOrdinal", engine_ordinal, 0x20, 0x20, true, 0x874d48cc80fe0952)
#define _m57 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwContextListSwitchCompleted.ContextSwitchFence", context_switch_fence, 0x40, 0x40, true, 0xbc799cf90d3a990)
#define _m58 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_hw_context_list_switch_completed_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwContextListSwitchCompleted", hw_context_list_switch_completed, 0x40, 0x80, true, 0xdf5a51ae330643b1)
#define _m59 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.FaultedFenceId", faulted_fence_id, 0x0, 0x40, true, 0xcbb4efd2ff186376)
#define _m60 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.FaultedVirtualAddress", faulted_virtual_address, 0x40, 0x40, true, 0xab8e5ea1bc5aa44c)
#define _m61 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.FaultedPrimitiveAPISequenceNumber", faulted_primitive_api_sequence_number, 0x80, 0x40, true, 0x2ffe2cef50ced016)
#define _m62 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.FaultedHwQueue", faulted_hw_queue, 0xc0, 0x40, true, 0x29217b0e3ed44525)
#define _m63 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.FaultedHwContext", faulted_hw_context, 0xc0, 0x40, true, 0x2b0f0c838402da9c)
#define _m64 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.FaultedProcessHandle", faulted_process_handle, 0xc0, 0x40, true, 0x65127604af0a6149)
#define _m65 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.NodeOrdinal", node_ordinal, 0x100, 0x20, true, 0x2ce455efffce9e15)
#define _m66 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.EngineOrdinal", engine_ordinal, 0x120, 0x20, true, 0x88a73bc8898788d9)
#define _m67 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::render_pipeline_stage_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.FaultedPipelineStage", faulted_pipeline_stage, 0x140, 0x20, true, 0x76a8345df31cf3ad)
#define _m68 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.FaultedBindTableEntry", faulted_bind_table_entry, 0x160, 0x20, true, 0x9ef9883598150490)
#define _m69 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::page_fault_flags_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.PageFaultFlags", page_fault_flags, 0x180, 0x20, true, 0x51819bb816016ff9)
#define _m70 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.PageTableLevel", page_table_level, 0x1a0, 0x20, true, 0x25a5555f5ae4dc63)
#define _m71 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::fault_error_code_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.FaultErrorCode", fault_error_code, 0x1c0, 0x20, true, 0xdcc9e4847a793afe)
#define _m72 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u11_hw_queue_page_faulted_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted", hw_queue_page_faulted, 0x40, 0x0, true, 0x68071306c97e682d)
#define _m73 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.PeriodicMonitoredFenceSignaled.VidPnTargetId", vid_pn_target_id, 0x0, 0x20, true, 0xd7d090d679cc16df)
#define _m74 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.PeriodicMonitoredFenceSignaled.NotificationID", notification_id, 0x20, 0x20, true, 0x1452328caf8a789f)
#define _m75 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u12_periodic_monitored_fence_signaled_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.PeriodicMonitoredFenceSignaled", periodic_monitored_fence_signaled, 0x40, 0x40, true, 0xcc012dbec4a9e31d)
#define _m76 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.SchedulingLogInterrupt.NodeOrdinal", node_ordinal, 0x0, 0x20, true, 0x9d30631b604893e)
#define _m77 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.SchedulingLogInterrupt.EngineOrdinal", engine_ordinal, 0x20, 0x20, true, 0x141f2a9fe5085691)
#define _m78 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u9_monitored_fence_signaled_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.SchedulingLogInterrupt", scheduling_log_interrupt, 0x40, 0x40, true, 0xe876c9d9dccd6378)
#define _m79 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.GpuEngineTimeout.NodeOrdinal", node_ordinal, 0x0, 0x20, true, 0x12246ba2be0b2797)
#define _m80 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.GpuEngineTimeout.EngineOrdinal", engine_ordinal, 0x20, 0x20, true, 0x1b1d001e5f8416f0)
#define _m81 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u9_monitored_fence_signaled_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.GpuEngineTimeout", gpu_engine_timeout, 0x40, 0x40, true, 0xf8400bbca0a7e487)
#define _m82 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.SuspendContextCompleted.hContext", h_context, 0x0, 0x40, true, 0xcefe5272cb56cbc2)
#define _m83 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.SuspendContextCompleted.ContextSuspendFence", context_suspend_fence, 0x40, 0x40, true, 0xafe0bb05b321a763)
#define _m84 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u13_suspend_context_completed_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.SuspendContextCompleted", suspend_context_completed, 0x40, 0x80, true, 0xf31fb5af2001c8bd)
#define _m85 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::cb::notify_interrupt_data_flags_t), "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.Flags", flags, 0x240, 0x20, true, 0x5f532660a754026d)
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
#define _m65
#define _m66
#define _m67
#define _m68
#define _m69
#define _m70
#define _m71
#define _m72
#define _m73
#define _m74
#define _m75
#define _m76
#define _m77
#define _m78
#define _m79
#define _m80
#define _m81
#define _m82
#define _m83
#define _m84
#define _m85
#endif