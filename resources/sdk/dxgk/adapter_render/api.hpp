#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::adapter_render
{
    // [AcquirePowerTransitionLockShared@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v20H2
    // dxgkrnl.sys .text:0x24228, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_power_transition_lock_shared;
    
    // [AddSyncObject@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xb200c, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) add_sync_object;
    
    // [ConfigureSysMm@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1fcda4, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) configure_sys_mm;
    
    // [ControlVSyncForLogging@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x14c6d8, 0x60098 bytes
    //
    _m3(sdk::unknown_ptr) control_v_sync_for_logging;
    
    // [DdiCreateCpuEvent@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2c7434, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) ddi_create_cpu_event;
    
    // [DdiDestroyCpuEvent@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2c886c, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) ddi_destroy_cpu_event;
    
    // [DdiPreemptCommand@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xa8d8, 0x60098 bytes
    //
    _m6(sdk::unknown_ptr) ddi_preempt_command;
    
    // [DdiSetAllocationBackingStore@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2cc264, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) ddi_set_allocation_backing_store;
    
    // [DdiSetFlipQueueLogBuffer@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2cc6f8, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) ddi_set_flip_queue_log_buffer;
    
    // [DestroyVirtualGpuState@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x15d33c, 0x60098 bytes
    //
    _m9(sdk::unknown_ptr) destroy_virtual_gpu_state;
    
    // [DisableIommuForDrt@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2c3e6c, 0x84380 bytes
    //
    _n0(sdk::unknown_ptr) disable_iommu_for_drt;
    
    // [EnableIommuForDrt@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2c4498, 0x84380 bytes
    //
    _n1(sdk::unknown_ptr) enable_iommu_for_drt;
    
    // [EnableIommuForSecureVgpu@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2c4510, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) enable_iommu_for_secure_vgpu;
    
    // [IommuBeginExclusiveAccess@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2c48a0, 0x84380 bytes
    //
    _n3(sdk::unknown_ptr) iommu_begin_exclusive_access;
    
    // [IommuEndExclusiveAccess@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2c48d0, 0x84380 bytes
    //
    _n4(sdk::unknown_ptr) iommu_end_exclusive_access;
    
    // [IommuOnDisable@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2c4900, 0x84380 bytes
    //
    _n5(sdk::unknown_ptr) iommu_on_disable;
    
    // [IommuOnEnable@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2c4940, 0x84380 bytes
    //
    _n6(sdk::unknown_ptr) iommu_on_enable;
    
    // [QueryVirtualFunctionLuid@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x358f04, 0x84380 bytes
    //
    _n7(sdk::unknown_ptr) query_virtual_function_luid;
    
    // [ReleasePowerTransitionLockShared@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v20H2
    // dxgkrnl.sys .text:0x24248, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) release_power_transition_lock_shared;
    
    // [RemoveFromCddPrimarySyncContextList@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xa86c, 0x60098 bytes
    //
    _n9(sdk::unknown_ptr) remove_from_cdd_primary_sync_context_list;
    
    // [ResetSchedulerFromTDR@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2c5040, 0x84380 bytes
    //
    _o0(sdk::unknown_ptr) reset_scheduler_from_tdr;
    
    // [RestartSchedulerFromTDR@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2c50d4, 0x84380 bytes
    //
    _o1(sdk::unknown_ptr) restart_scheduler_from_tdr;
    
    // [SetMitigatedRangesUpdateIrp@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x15d528, 0x60098 bytes
    //
    _o2(sdk::unknown_ptr) set_mitigated_ranges_update_irp;
    
    // [DdiRender@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 11
    // dxgkrnl.sys PAGE:0x14f76c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x158af0, 0x84380 bytes
    //
    _o3(sdk::unknown_ptr) ddi_render;
    
    // [EnableIoMmuIsolation@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x210e24, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x210fc4, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) enable_io_mmu_isolation;
    
    // [CreateVirtualGpu@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x229f8c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x357410, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22a0bc, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) create_virtual_gpu;
    
    // [DdiBeginExclusiveAccess@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2129f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c6270, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x212b90, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) ddi_begin_exclusive_access;
    
    // [DdiCreateHwQueue@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x213a5c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c767c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x213bfc, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) ddi_create_hw_queue;
    
    // [DdiDestroyHwQueue@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x214aec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c8aa0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x214c8c, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) ddi_destroy_hw_queue;
    
    // [DdiEndExclusiveAccess@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x215b14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c9c3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x215cb4, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) ddi_end_exclusive_access;
    
    // [DdiGetBackingResource@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22d37c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35b5e8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22d4ac, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) ddi_get_backing_resource;
    
    // [DdiGetMmioRangeCount@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22d994, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35bc04, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22dac4, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) ddi_get_mmio_range_count;
    
    // [DdiGetMmioRanges@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22db84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35bdec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22dcb4, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) ddi_get_mmio_ranges;
    
    // [DdiNotifyFocusPresent@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x39a78, 0x762b0 bytes
    // dxgkrnl.sys .text:0x47440, 0x84380 bytes
    // dxgkrnl.sys .text:0x39ca8, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) ddi_notify_focus_present;
    
    // [DdiPresentToHwQueue@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x217780, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21e980, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x217920, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) ddi_present_to_hw_queue;
    
    // [DdiResetHwEngine@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3a9b8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x48268, 0x84380 bytes
    // dxgkrnl.sys .text:0x3abe8, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) ddi_reset_hw_engine;
    
    // [DdiResumeContext@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2188c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cc020, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x218a68, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) ddi_resume_context;
    
    // [DdiResumeHwEngine@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3abcc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x48474, 0x84380 bytes
    // dxgkrnl.sys .text:0x3adfc, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) ddi_resume_hw_engine;
    
    // [DdiSetContextSchedulingProperties@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x218aec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cc4b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x218c8c, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) ddi_set_context_scheduling_properties;
    
    // [DdiSetSchedulingLogBuffer@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x219154, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ccdcc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2192f4, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) ddi_set_scheduling_log_buffer;
    
    // [DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x219fb4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cd6b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21a154, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) ddi_set_tracked_workload_power_level;
    
    // [DdiSetVirtualGpuResources@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22f944, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35dc28, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22fa74, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) ddi_set_virtual_gpu_resources;
    
    // [DdiSetVirtualMachineData@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x21a428, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cdb58, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21a5c8, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) ddi_set_virtual_machine_data;
    
    // [DdiSetupPriorityBands@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x21a64c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cdda4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21a7ec, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) ddi_setup_priority_bands;
    
    // [DdiSignalMonitoredFence@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x21a894, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21ec5a, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21aa34, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) ddi_signal_monitored_fence;
    
    // [DdiSubmitCommandToHwQueue@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3b6ac, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2e526, 0x84380 bytes
    // dxgkrnl.sys .text:0x3b8dc, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) ddi_submit_command_to_hw_queue;
    
    // [DdiSuspendContext@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x21ad4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce250, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21aeec, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) ddi_suspend_context;
    
    // [DdiValidateSubmitCommand@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1449d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d59a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1478e8, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) ddi_validate_submit_command;
    
    // [DisconnectFromDisplayAdapters@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x210a7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c40a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x210c1c, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) disconnect_from_display_adapters;
    
    // [FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x211118, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x161af4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2112b8, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) flush_present_references_and_disable_overlays;
    
    // [GetBackingResource@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22aa88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35804c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22abb8, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) get_backing_resource;
    
    // [GetDeviceLocation@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22ab64, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x358164, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22ac94, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) get_device_location;
    
    // [GetDisplayUMDFileName@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x21122c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c4778, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2113cc, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) get_display_umd_file_name;
    
    // [GetGpuPartitionInfo@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22ac34, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x358270, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22ad64, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) get_gpu_partition_info;
    
    // [GetKmdFileVersion@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x162440, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e121c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16c8b4, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) get_kmd_file_version;
    
    // [GetMmioRangeCount@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22ad48, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3583ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22ae78, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) get_mmio_range_count;
    
    // [GetMmioRanges@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22ae24, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3584c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22af54, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) get_mmio_ranges;
    
    // [GetResourceForBar@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22af00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3585dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22b030, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) get_resource_for_bar;
    
    // [GetUMDFileName@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x11c404, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d14cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xed074, 0x762b0 bytes
    //
    _r8(sdk::unknown_ptr) get_umd_file_name;
    
    // [GetVendorAndDevice@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22b080, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3587bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22b1b0, 0x762b0 bytes
    //
    _r9(sdk::unknown_ptr) get_vendor_and_device;
    
    // [GetVirtualGpuInfo@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22b158, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3588d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22b288, 0x762b0 bytes
    //
    _s0(sdk::unknown_ptr) get_virtual_gpu_info;
    
    // [GetVirtualGpuProfile@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22b254, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3589d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22b384, 0x762b0 bytes
    //
    _s1(sdk::unknown_ptr) get_virtual_gpu_profile;
    
    // [InitializeDisplayUserModeDriverNames@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16f71c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fc4c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16bfdc, 0x762b0 bytes
    //
    _s2(sdk::unknown_ptr) initialize_display_user_mode_driver_names;
    
    // [InitializeUserModeDriverNames@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16fc48, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fc9d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16c508, 0x762b0 bytes
    //
    _s3(sdk::unknown_ptr) initialize_user_mode_driver_names;
    
    // [IsCoreResourceSharedOwner@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2c60, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7380, 0x84380 bytes
    // dxgkrnl.sys .text:0x4000, 0x762b0 bytes
    //
    _s4(sdk::unknown_ptr) is_core_resource_shared_owner;
    
    // [IsProcessGpuAccessBlocked@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x115538, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a8cc4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x121ac8, 0x762b0 bytes
    //
    _s5(sdk::unknown_ptr) is_process_gpu_access_blocked;
    
    // [QueryMitigatedRangeCount@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22b454, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x358bc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22b584, 0x762b0 bytes
    //
    _s6(sdk::unknown_ptr) query_mitigated_range_count;
    
    // [QueryMitigatedRanges@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22b530, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x358cd8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22b660, 0x762b0 bytes
    //
    _s7(sdk::unknown_ptr) query_mitigated_ranges;
    
    // [QueryProbedBars@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22b60c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x358df0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22b73c, 0x762b0 bytes
    //
    _s8(sdk::unknown_ptr) query_probed_bars;
    
    // [QueryProcessAdapterInfo@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x211608, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c4a88, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2117a8, 0x762b0 bytes
    //
    _s9(sdk::unknown_ptr) query_process_adapter_info;
    
    // [ReadVirtualFunctionConfig@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22b6e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x358fc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22b814, 0x762b0 bytes
    //
    _t0(sdk::unknown_ptr) read_virtual_function_config;
    
    // [ReadVirtualFunctionConfigBlock@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22b7c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3590d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22b8f0, 0x762b0 bytes
    //
    _t1(sdk::unknown_ptr) read_virtual_function_config_block;
    
    // [RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2764, 0x762b0 bytes
    // dxgkrnl.sys .text:0x329c, 0x84380 bytes
    // dxgkrnl.sys .text:0x1c2c, 0x762b0 bytes
    //
    _t2(sdk::unknown_ptr) remove_from_cdd_primary_sync_context_list_safe;
    
    // [ResetVirtualFunction@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22b89c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x359364, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22b9cc, 0x762b0 bytes
    //
    _t3(sdk::unknown_ptr) reset_virtual_function;
    
    // [ResumeSchedulerForVidPnSource@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x211c44, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e1ae4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x211de4, 0x762b0 bytes
    //
    _t4(sdk::unknown_ptr) resume_scheduler_for_vid_pn_source;
    
    // [SetGpuPartitionCount@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22bb0c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x359660, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22bc3c, 0x762b0 bytes
    //
    _t5(sdk::unknown_ptr) set_gpu_partition_count;
    
    // [SetVirtualFunctionPowerState@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22bc6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3597f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22bd9c, 0x762b0 bytes
    //
    _t6(sdk::unknown_ptr) set_virtual_function_power_state;
    
    // [StopDisplayDevices@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x211fec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c54c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21218c, 0x762b0 bytes
    //
    _t7(sdk::unknown_ptr) stop_display_devices;
    
    // [WriteVirtualFunctionConfig@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22be14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3599d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22bf44, 0x762b0 bytes
    //
    _t8(sdk::unknown_ptr) write_virtual_function_config;
    
    // [WriteVirtualFunctionConfigBlock@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22bef0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x359af0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22c020, 0x762b0 bytes
    //
    _t9(sdk::unknown_ptr) write_virtual_function_config_block;
    
    // [AcquireOverlayId@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c5d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21046c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c3994, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21060c, 0x762b0 bytes
    //
    _u0(sdk::unknown_ptr) acquire_overlay_id;
    
    // [AddNtSharedAllocObject@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa7e8, 0x60098 bytes
    // dxgkrnl.sys .text:0x7380, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc3f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x86e0, 0x762b0 bytes
    //
    _u1(sdk::unknown_ptr) add_nt_shared_alloc_object;
    
    // [AddStablePowerReference@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c648, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2104ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c3a3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21068c, 0x762b0 bytes
    //
    _u2(sdk::unknown_ptr) add_stable_power_reference;
    
    // [ChangeVideoMemoryReservation@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c680, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x210534, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c3a84, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2106d4, 0x762b0 bytes
    //
    _u3(sdk::unknown_ptr) change_video_memory_reservation;
    
    // [CleanupPresentHistoryTokenQueue@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb206c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x153188, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e2bb8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x156668, 0x762b0 bytes
    //
    _u4(sdk::unknown_ptr) cleanup_present_history_token_queue;
    
    // [??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdaa44, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17f5bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fcf44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17914c, 0x762b0 bytes
    //
    _u5(sdk::unknown_ptr) construct_instance;
    
    // [CopyDListFileName@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c75c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2105cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c3b1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21076c, 0x762b0 bytes
    //
    _u6(sdk::unknown_ptr) copy_d_list_file_name;
    
    // [CopyUmdFileName@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb1f20, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11c380, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d1448, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xecff0, 0x762b0 bytes
    //
    _u7(sdk::unknown_ptr) copy_umd_file_name;
    
    // [CreateDevice@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb255c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdedb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b7454, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe8670, 0x762b0 bytes
    //
    _u8(sdk::unknown_ptr) create_device;
    
    // [CreateFormattingBuffer@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c7c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x210630, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c3b88, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2107d0, 0x762b0 bytes
    //
    _u9(sdk::unknown_ptr) create_formatting_buffer;
    
    // [CreateRenderCore@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xde1b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x167140, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f9f44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x175a58, 0x762b0 bytes
    //
    _v0(sdk::unknown_ptr) create_render_core;
    
    // [DdiAcquireSwizzlingRange@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14dc10, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x148d24, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15c1ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14c368, 0x762b0 bytes
    //
    _v1(sdk::unknown_ptr) ddi_acquire_swizzling_range;
    
    // [DdiBuildPagingBuffer@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb10e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xeb7e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x185f20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xf77b0, 0x762b0 bytes
    //
    _v2(sdk::unknown_ptr) ddi_build_paging_buffer;
    
    // [DdiCalibrateGpuClock@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1f0cc, 0x60098 bytes
    // dxgkrnl.sys .text:0x395cc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x46ae4, 0x84380 bytes
    // dxgkrnl.sys .text:0x397fc, 0x762b0 bytes
    //
    _v3(sdk::unknown_ptr) ddi_calibrate_gpu_clock;
    
    // [DdiCancelCommand@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14de3c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x212c1c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c64b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x212dbc, 0x762b0 bytes
    //
    _v4(sdk::unknown_ptr) ddi_cancel_command;
    
    // [DdiCloseAllocation@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb0804, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11ad44, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d1804, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xeecf0, 0x762b0 bytes
    //
    _v5(sdk::unknown_ptr) ddi_close_allocation;
    
    // [DdiCreateContext@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb0400, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x119424, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b4174, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xef154, 0x762b0 bytes
    //
    _v6(sdk::unknown_ptr) ddi_create_context;
    
    // [DdiCreateDevice@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb14f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11928c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b48d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe8d84, 0x762b0 bytes
    //
    _v7(sdk::unknown_ptr) ddi_create_device;
    
    // [DdiCreateOverlay@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14e6a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x213c9c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c78e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x213e3c, 0x762b0 bytes
    //
    _v8(sdk::unknown_ptr) ddi_create_overlay;
    
    // [DdiCreateProcess@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb0dc8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14b7e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b8b78, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14ad90, 0x762b0 bytes
    //
    _v9(sdk::unknown_ptr) ddi_create_process;
    
    // [DdiCreateVirtualGpu@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15a428, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22cf24, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35b164, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22d054, 0x762b0 bytes
    //
    _w0(sdk::unknown_ptr) ddi_create_virtual_gpu;
    
    // [DdiDescribeAllocation@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xafabc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe82c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x185630, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13e390, 0x762b0 bytes
    //
    _w1(sdk::unknown_ptr) ddi_describe_allocation;
    
    // [DdiDestroyAllocation@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb1328, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10ad30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19db40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x116d60, 0x762b0 bytes
    //
    _w2(sdk::unknown_ptr) ddi_destroy_allocation;
    
    // [DdiDestroyContext@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb029c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe3e38, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16b608, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdaa5c, 0x762b0 bytes
    //
    _w3(sdk::unknown_ptr) ddi_destroy_context;
    
    // [DdiDestroyDevice@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb0988, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe3070, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x171500, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd9c94, 0x762b0 bytes
    //
    _w4(sdk::unknown_ptr) ddi_destroy_device;
    
    // [DdiDestroyOverlay@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14e8c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x214d54, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c8d18, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x214ef4, 0x762b0 bytes
    //
    _w5(sdk::unknown_ptr) ddi_destroy_overlay;
    
    // [DdiDestroyProcess@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb0c94, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14e45c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x171704, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1512ec, 0x762b0 bytes
    //
    _w6(sdk::unknown_ptr) ddi_destroy_process;
    
    // [DdiDestroyVirtualGpu@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15adcc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22d144, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35b3a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22d274, 0x762b0 bytes
    //
    _w7(sdk::unknown_ptr) ddi_destroy_virtual_gpu;
    
    // [DdiFlipOverlay@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14eab4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x216014, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ca148, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2161b4, 0x762b0 bytes
    //
    _w8(sdk::unknown_ptr) ddi_flip_overlay;
    
    // [DdiFormatHistoryBuffer@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1f2f8, 0x60098 bytes
    // dxgkrnl.sys .text:0x3983c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x471e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x39a6c, 0x762b0 bytes
    //
    _w9(sdk::unknown_ptr) ddi_format_history_buffer;
    
    // [DdiGetDeviceLocation@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15af74, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22d56c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35b7d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22d69c, 0x762b0 bytes
    //
    _x0(sdk::unknown_ptr) ddi_get_device_location;
    
    // [DdiGetGpuPartitionInfo@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15b0ec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22d750, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35b9b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22d880, 0x762b0 bytes
    //
    _x1(sdk::unknown_ptr) ddi_get_gpu_partition_info;
    
    // [DdiGetResourceForBar@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15b34c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22dd74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35bfd4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22dea4, 0x762b0 bytes
    //
    _x2(sdk::unknown_ptr) ddi_get_resource_for_bar;
    
    // [DdiGetRootPageTableSize@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb0ffc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14dde0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dc498, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x150c70, 0x762b0 bytes
    //
    _x3(sdk::unknown_ptr) ddi_get_root_page_table_size;
    
    // [DdiGetStandardAllocationDriverData@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xafcac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1095c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cf84c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1155f4, 0x762b0 bytes
    //
    _x4(sdk::unknown_ptr) ddi_get_standard_allocation_driver_data;
    
    // [DdiGetVendorAndDevice@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15b4fc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22dfb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35c220, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22e0e0, 0x762b0 bytes
    //
    _x5(sdk::unknown_ptr) ddi_get_vendor_and_device;
    
    // [DdiGetVirtualGpuInfo@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15b674, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22e194, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35c400, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22e2c4, 0x762b0 bytes
    //
    _x6(sdk::unknown_ptr) ddi_get_virtual_gpu_info;
    
    // [DdiGetVirtualGpuProfile@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15b8a8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22e3d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35c654, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22e508, 0x762b0 bytes
    //
    _x7(sdk::unknown_ptr) ddi_get_virtual_gpu_profile;
    
    // [DdiMapCpuHostAperture@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd59dc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15bfac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e89e4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15edfc, 0x762b0 bytes
    //
    _x8(sdk::unknown_ptr) ddi_map_cpu_host_aperture;
    
    // [DdiOpenAllocation@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147e1c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x217070, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cae3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x217210, 0x762b0 bytes
    //
    _x9(sdk::unknown_ptr) ddi_open_allocation;
    
    // [DdiPatch@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14ecc8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x142f74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15b50c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x145e84, 0x762b0 bytes
    //
    _y0(sdk::unknown_ptr) ddi_patch;
    
    // [DdiPresent@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb05b4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x158a3c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e7090, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15b88c, 0x762b0 bytes
    //
    _y1(sdk::unknown_ptr) ddi_present;
    
    // [DdiQueryCurrentFence@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1f850, 0x60098 bytes
    // dxgkrnl.sys .text:0x3a0cc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x478e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x3a2fc, 0x762b0 bytes
    //
    _y2(sdk::unknown_ptr) ddi_query_current_fence;
    
    // [DdiQueryDependentEngineGroup@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1fa54, 0x60098 bytes
    // dxgkrnl.sys .text:0x3a310, 0x762b0 bytes
    // dxgkrnl.sys .text:0x47b5c, 0x84380 bytes
    // dxgkrnl.sys .text:0x3a540, 0x762b0 bytes
    //
    _y3(sdk::unknown_ptr) ddi_query_dependent_engine_group;
    
    // [DdiQueryEngineStatus@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1fc58, 0x60098 bytes
    // dxgkrnl.sys .text:0x3a554, 0x762b0 bytes
    // dxgkrnl.sys .text:0x47dd8, 0x84380 bytes
    // dxgkrnl.sys .text:0x3a784, 0x762b0 bytes
    //
    _y4(sdk::unknown_ptr) ddi_query_engine_status;
    
    // [DdiQueryMitigatedRangeCount@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15ba68, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22e614, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35c8a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22e744, 0x762b0 bytes
    //
    _y5(sdk::unknown_ptr) ddi_query_mitigated_range_count;
    
    // [DdiQueryMitigatedRanges@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15bbf8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22e800, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35ca88, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22e930, 0x762b0 bytes
    //
    _y6(sdk::unknown_ptr) ddi_query_mitigated_ranges;
    
    // [DdiQueryProbedBars@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15bdc4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22ea48, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35cce4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22eb78, 0x762b0 bytes
    //
    _y7(sdk::unknown_ptr) ddi_query_probed_bars;
    
    // [DdiQueryVirtualFunctionLuid@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15bf3c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22ec2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35cec4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22ed5c, 0x762b0 bytes
    //
    _y8(sdk::unknown_ptr) ddi_query_virtual_function_luid;
    
    // [DdiReadVirtualFunctionConfig@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15c0b4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22ee10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35d0a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22ef40, 0x762b0 bytes
    //
    _y9(sdk::unknown_ptr) ddi_read_virtual_function_config;
    
    // [DdiReadVirtualFunctionConfigBlock@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15c264, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22f04c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35d2f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22f17c, 0x762b0 bytes
    //
    _z0(sdk::unknown_ptr) ddi_read_virtual_function_config_block;
    
    // [DdiReleaseSwizzlingRange@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14f568, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14ede4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15cb20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x151e20, 0x762b0 bytes
    //
    _z1(sdk::unknown_ptr) ddi_release_swizzling_range;
    
    // [DdiRenderGdi@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147bb4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2181ac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cb8d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21834c, 0x762b0 bytes
    //
    _z2(sdk::unknown_ptr) ddi_render_gdi;
    
    // [DdiRenderKm@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14f9e4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10b714, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15c530, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x117744, 0x762b0 bytes
    //
    _z3(sdk::unknown_ptr) ddi_render_km;
    
    // [DdiResetEngine@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1fe5c, 0x60098 bytes
    // dxgkrnl.sys .text:0x3a798, 0x762b0 bytes
    // dxgkrnl.sys .text:0x48054, 0x84380 bytes
    // dxgkrnl.sys .text:0x3a9c8, 0x762b0 bytes
    //
    _z4(sdk::unknown_ptr) ddi_reset_engine;
    
    // [DdiResetFromTimeout@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14fc4c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x218438, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cbb78, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2185d8, 0x762b0 bytes
    //
    _z5(sdk::unknown_ptr) ddi_reset_from_timeout;
    
    // [DdiResetVirtualFunction@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15c414, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22f288, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35d53c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22f3b8, 0x762b0 bytes
    //
    _z6(sdk::unknown_ptr) ddi_reset_virtual_function;
    
    // [DdiRestartFromTimeout@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14fe50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x218680, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cbdcc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x218820, 0x762b0 bytes
    //
    _z7(sdk::unknown_ptr) ddi_restart_from_timeout;
    
    // [DdiSetGpuPartitionCount@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15c5c4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22f4c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35d788, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22f5f4, 0x762b0 bytes
    //
    _z8(sdk::unknown_ptr) ddi_set_gpu_partition_count;
    
    // [DdiSetRootPageTable@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb0f18, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x147fec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d79a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14b97c, 0x762b0 bytes
    //
    _z9(sdk::unknown_ptr) ddi_set_root_page_table;
    
    // [DdiSetStablePowerState@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1503f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21939c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cd018, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21953c, 0x762b0 bytes
    //
    _a0(sdk::unknown_ptr) ddi_set_stable_power_state;
    
    // [DdiSetVideoProtectedRegion@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1505bc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21a210, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cd924, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21a3b0, 0x762b0 bytes
    //
    _a1(sdk::unknown_ptr) ddi_set_video_protected_region;
    
    // [DdiSetVirtualFunctionPowerState@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15c850, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22f708, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35d9dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22f838, 0x762b0 bytes
    //
    _a2(sdk::unknown_ptr) ddi_set_virtual_function_power_state;
    
    // [DdiSetVirtualGpuVmBus@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15ca00, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22fb64, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35de64, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22fc94, 0x762b0 bytes
    //
    _a3(sdk::unknown_ptr) ddi_set_virtual_gpu_vm_bus;
    
    // [DdiStopCapture@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1507a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21ab08, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cdff0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21aca8, 0x762b0 bytes
    //
    _a4(sdk::unknown_ptr) ddi_stop_capture;
    
    // [DdiSubmitCommand@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa9ac, 0x60098 bytes
    // dxgkrnl.sys .text:0x146e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1b098, 0x84380 bytes
    // dxgkrnl.sys .text:0x14e70, 0x762b0 bytes
    //
    _a5(sdk::unknown_ptr) ddi_submit_command;
    
    // [DdiSubmitCommandVirtual@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb11f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xebe90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x186a70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xf7e60, 0x762b0 bytes
    //
    _a6(sdk::unknown_ptr) ddi_submit_command_virtual;
    
    // [DdiUnmapCpuHostAperture@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd58d4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15be44, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e886c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15ec94, 0x762b0 bytes
    //
    _a7(sdk::unknown_ptr) ddi_unmap_cpu_host_aperture;
    
    // [DdiUpdateOverlay@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1509a8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21b1dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce49c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b37c, 0x762b0 bytes
    //
    _a8(sdk::unknown_ptr) ddi_update_overlay;
    
    // [DdiValidateUpdateAllocationProperty@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150bcc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21b434, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce700, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b5d4, 0x762b0 bytes
    //
    _a9(sdk::unknown_ptr) ddi_validate_update_allocation_property;
    
    // [DdiVirtualGpuDriverEscape@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15cbd0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22fda8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35e0b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22fed8, 0x762b0 bytes
    //
    _b0(sdk::unknown_ptr) ddi_virtual_gpu_driver_escape;
    
    // [DdiWriteVirtualFunctionConfig@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15cda0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22ffec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35e30c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23011c, 0x762b0 bytes
    //
    _b1(sdk::unknown_ptr) ddi_write_virtual_function_config;
    
    // [DdiWriteVirtualFunctionConfigBlock@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15cf50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x230228, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35e59c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x230358, 0x762b0 bytes
    //
    _b2(sdk::unknown_ptr) ddi_write_virtual_function_config_block;
    
    // [DefaultDdiAcquireSwizzlingRange@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150dc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21b650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b7f0, 0x762b0 bytes
    //
    _b3(sdk::unknown_ptr) default_ddi_acquire_swizzling_range;
    
    // [DefaultDdiCreateOverlay@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150dc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21b650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b7f0, 0x762b0 bytes
    //
    _b4(sdk::unknown_ptr) default_ddi_create_overlay;
    
    // [DefaultDdiDestroyOverlay@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150dc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21b650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b7f0, 0x762b0 bytes
    //
    _b5(sdk::unknown_ptr) default_ddi_destroy_overlay;
    
    // [DefaultDdiFlipOverlay@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150dc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21b650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b7f0, 0x762b0 bytes
    //
    _b6(sdk::unknown_ptr) default_ddi_flip_overlay;
    
    // [DefaultDdiReleaseSwizzlingRange@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150dc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21b650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b7f0, 0x762b0 bytes
    //
    _b7(sdk::unknown_ptr) default_ddi_release_swizzling_range;
    
    // [DefaultDdiStopCapture@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150dc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21b650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b7f0, 0x762b0 bytes
    //
    _b8(sdk::unknown_ptr) default_ddi_stop_capture;
    
    // [DefaultDdiUpdateOverlay@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150dc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21b650, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ce940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21b7f0, 0x762b0 bytes
    //
    _b9(sdk::unknown_ptr) default_ddi_update_overlay;
    
    // [DeleteTerminationTracker@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6ded8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10a4ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19d360, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11651c, 0x762b0 bytes
    //
    _c0(sdk::unknown_ptr) delete_termination_tracker;
    
    // [Destroy@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c818, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2106a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c3c20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x210840, 0x762b0 bytes
    //
    _c1(sdk::unknown_ptr) destroy;
    
    // [DestroyDevice@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb2250, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe2834, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17ed64, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd96c4, 0x762b0 bytes
    //
    _c2(sdk::unknown_ptr) destroy_device;
    
    // [DestroyDeviceNoLocks@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb241c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe22c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16accc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd9250, 0x762b0 bytes
    //
    _c3(sdk::unknown_ptr) destroy_device_no_locks;
    
    // [DestroyDeviceNoLocksInternal@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb2380, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe2434, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16ae3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd93c0, 0x762b0 bytes
    //
    _c4(sdk::unknown_ptr) destroy_device_no_locks_internal;
    
    // [DestroyFormattingBuffer@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1eddc, 0x60098 bytes
    // dxgkrnl.sys .text:0x390d8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x46388, 0x84380 bytes
    // dxgkrnl.sys .text:0x39308, 0x762b0 bytes
    //
    _c5(sdk::unknown_ptr) destroy_formatting_buffer;
    
    // [??1ADAPTER_RENDER@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c4f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x210350, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c3898, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2104f0, 0x762b0 bytes
    //
    _c6(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyVirtualGpu@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15d100, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22a3e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x357944, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22a518, 0x762b0 bytes
    //
    _c7(sdk::unknown_ptr) destroy_virtual_gpu;
    
    // [DisableOverlays@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xafc38, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd8594, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x163134, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13dfc4, 0x762b0 bytes
    //
    _c8(sdk::unknown_ptr) disable_overlays;
    
    // [DisablePinnedHardware@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd7420, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15e11c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e9ff0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x160f6c, 0x762b0 bytes
    //
    _c9(sdk::unknown_ptr) disable_pinned_hardware;
    
    // [DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb0af0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xeba30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1860f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xf7a00, 0x762b0 bytes
    //
    _d0(sdk::unknown_ptr) dxgkrnl_log_build_paging_buffer_information;
    
    // [EnableClockCalibration@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xaffd8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x117430, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x172b9c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1239c0, 0x762b0 bytes
    //
    _d1(sdk::unknown_ptr) enable_clock_calibration;
    
    // [EnableFormattingBuffer@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c978, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x210df8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c446c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x210f98, 0x762b0 bytes
    //
    _d2(sdk::unknown_ptr) enable_formatting_buffer;
    
    // [EnsureVirtualGpuProcess@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15d3e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22a944, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x357eb8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22aa74, 0x762b0 bytes
    //
    _d3(sdk::unknown_ptr) ensure_virtual_gpu_process;
    
    // [FinalizeInitialization@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xda2b4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x162394, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2152a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16af98, 0x762b0 bytes
    //
    _d4(sdk::unknown_ptr) finalize_initialization;
    
    // [FindVirtualGpuByLuid@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15d458, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22a9a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x357f40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22aad4, 0x762b0 bytes
    //
    _d5(sdk::unknown_ptr) find_virtual_gpu_by_luid;
    
    // [FlushDeferredDestructions@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c99c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x210f88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c4588, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x211128, 0x762b0 bytes
    //
    _d6(sdk::unknown_ptr) flush_deferred_destructions;
    
    // [FlushScheduler@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xafe2c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12b74c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16fc7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x127fe0, 0x762b0 bytes
    //
    _d7(sdk::unknown_ptr) flush_scheduler;
    
    // [FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb1738, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11aed0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21e8c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xeee7c, 0x762b0 bytes
    //
    _d8(sdk::unknown_ptr) free_allocation_handle_and_wait_for_zero_references;
    
    // [FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb1670, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11af90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1afb34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xeef3c, 0x762b0 bytes
    //
    _d9(sdk::unknown_ptr) free_resource_handle_and_wait_for_zero_references;
    
    // [GdiNodeSupportsGpuVa@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1000, 0x60098 bytes
    // dxgkrnl.sys .text:0x3cf28, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4b020, 0x84380 bytes
    // dxgkrnl.sys .text:0x3d118, 0x762b0 bytes
    //
    _e0(sdk::unknown_ptr) gdi_node_supports_gpu_va;
    
    // [GetPresentHistoryTokenQueue@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb20e4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x136214, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c5d5c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x139744, 0x762b0 bytes
    //
    _e1(sdk::unknown_ptr) get_present_history_token_queue;
    
    // [GetUmdFileVersion@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb19e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11c488, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d11f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xed0f8, 0x762b0 bytes
    //
    _e2(sdk::unknown_ptr) get_umd_file_version;
    
    // [GetVidSchSibmitDataSize@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xaae8, 0x60098 bytes
    // dxgkrnl.sys .text:0x167f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1f584, 0x84380 bytes
    // dxgkrnl.sys .text:0x16f80, 0x762b0 bytes
    //
    _e3(sdk::unknown_ptr) get_vid_sch_sibmit_data_size;
    
    // [Initialize@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xda310, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x16edb8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fb9c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16b678, 0x762b0 bytes
    //
    _e4(sdk::unknown_ptr) initialize;
    
    // [InitializePowerManagement@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14caf0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2112ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20fe70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21148c, 0x762b0 bytes
    //
    _e5(sdk::unknown_ptr) initialize_power_management;
    
    // [IsClockCalibrationSupported@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xab34, 0x60098 bytes
    // dxgkrnl.sys .text:0x776c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x408c, 0x84380 bytes
    // dxgkrnl.sys .text:0x8acc, 0x762b0 bytes
    //
    _e6(sdk::unknown_ptr) is_clock_calibration_supported;
    
    // [IsMultiPlaneOverlaySupported@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb1fdc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x147d3c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b8638, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14a48c, 0x762b0 bytes
    //
    _e7(sdk::unknown_ptr) is_multi_plane_overlay_supported;
    
    // [NodeSupportsGpuVa@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa898, 0x60098 bytes
    // dxgkrnl.sys .text:0x2810, 0x762b0 bytes
    // dxgkrnl.sys .text:0x18f50, 0x84380 bytes
    // dxgkrnl.sys .text:0x1fe0, 0x762b0 bytes
    //
    _e8(sdk::unknown_ptr) node_supports_gpu_va;
    
    // [NotifyDeferredDestructionComplete@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb17f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x143184, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d1ac8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x146094, 0x762b0 bytes
    //
    _e9(sdk::unknown_ptr) notify_deferred_destruction_complete;
    
    // [NotifyDxgProcessDestroyed@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15d4d4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x22b31c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x358a98, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22b44c, 0x762b0 bytes
    //
    _f0(sdk::unknown_ptr) notify_dxg_process_destroyed;
    
    // [NotifyProcessFreeze@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb0214, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe01cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16b878, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd76cc, 0x762b0 bytes
    //
    _f1(sdk::unknown_ptr) notify_process_freeze;
    
    // [PageInAllDevices@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14cd44, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x211550, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c4998, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2116f0, 0x762b0 bytes
    //
    _f2(sdk::unknown_ptr) page_in_all_devices;
    
    // [PerformClockCalibration@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1eebc, 0x60098 bytes
    // dxgkrnl.sys .text:0x391ec, 0x762b0 bytes
    // dxgkrnl.sys .text:0x464ac, 0x84380 bytes
    // dxgkrnl.sys .text:0x3941c, 0x762b0 bytes
    //
    _f3(sdk::unknown_ptr) perform_clock_calibration;
    
    // [PopDeferredTracker@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb18c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10a448, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19d2bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x116478, 0x762b0 bytes
    //
    _f4(sdk::unknown_ptr) pop_deferred_tracker;
    
    // [PurgeSegments@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd7490, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x152a90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e42cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd6fe8, 0x762b0 bytes
    //
    _f5(sdk::unknown_ptr) purge_segments;
    
    // [QueryGpuMmuCaps@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb1948, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x150aa0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b9a98, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14aaf0, 0x762b0 bytes
    //
    _f6(sdk::unknown_ptr) query_gpu_mmu_caps;
    
    // [QueryVideoMemoryInfo@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14ce10, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd52ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15ca7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd597c, 0x762b0 bytes
    //
    _f7(sdk::unknown_ptr) query_video_memory_info;
    
    // [ReleaseOverlayId@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14ceac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21179c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c4bfc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21193c, 0x762b0 bytes
    //
    _f8(sdk::unknown_ptr) release_overlay_id;
    
    // [ReleaseStablePowerReference@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14cf14, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x211824, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c4ce0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2119c4, 0x762b0 bytes
    //
    _f9(sdk::unknown_ptr) release_stable_power_reference;
    
    // [ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1dd70, 0x60098 bytes
    // dxgkrnl.sys .text:0x36018, 0x762b0 bytes
    // dxgkrnl.sys .text:0x43fec, 0x84380 bytes
    // dxgkrnl.sys .text:0x36248, 0x762b0 bytes
    //
    _g0(sdk::unknown_ptr) release_stable_power_reference_without_lock;
    
    // [ReportState@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14cf3c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x211854, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c4d10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2119f4, 0x762b0 bytes
    //
    _g1(sdk::unknown_ptr) report_state;
    
    // [Reset@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14d00c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x211940, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c4e1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x211ae0, 0x762b0 bytes
    //
    _g2(sdk::unknown_ptr) reset;
    
    // [RestoreFromPurgeSegments@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd73a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15f89c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ed1f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1626ec, 0x762b0 bytes
    //
    _g3(sdk::unknown_ptr) restore_from_purge_segments;
    
    // [ResumeMemorySegments@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14d270, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x211be4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c5168, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x211d84, 0x762b0 bytes
    //
    _g4(sdk::unknown_ptr) resume_memory_segments;
    
    // [ResumeScheduler@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb00e8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12ba04, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16fa88, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x128298, 0x762b0 bytes
    //
    _g5(sdk::unknown_ptr) resume_scheduler;
    
    // [ResumeVidMmWorkerThread@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb01b8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12bae4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16fb5c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x128378, 0x762b0 bytes
    //
    _g6(sdk::unknown_ptr) resume_vid_mm_worker_thread;
    
    // [SignalCrossAdapterSyncObjects@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14d2f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x211cf0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c51c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x211e90, 0x762b0 bytes
    //
    _g7(sdk::unknown_ptr) signal_cross_adapter_sync_objects;
    
    // [Stop@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14d3a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x211dbc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c52a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x211f5c, 0x762b0 bytes
    //
    _g8(sdk::unknown_ptr) stop;
    
    // [SuspendMemorySegments@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14d598, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x212128, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c5604, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2122c8, 0x762b0 bytes
    //
    _g9(sdk::unknown_ptr) suspend_memory_segments;
    
    // [SuspendScheduler@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb0074, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12b95c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16f9dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1281f0, 0x762b0 bytes
    //
    _h0(sdk::unknown_ptr) suspend_scheduler;
    
    // [SuspendVidMmWorkerThread@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb015c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12ba84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16fafc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x128318, 0x762b0 bytes
    //
    _h1(sdk::unknown_ptr) suspend_vid_mm_worker_thread;
    
    // [TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14d628, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x212194, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ec230, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x212334, 0x762b0 bytes
    //
    _h2(sdk::unknown_ptr) try_acquire_device_lock_for_all_devices;
    
    // [TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14d6d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x212274, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ec820, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x212414, 0x762b0 bytes
    //
    _h3(sdk::unknown_ptr) try_release_device_lock_for_all_devices;
};
#include "magic/api.end.hpp"
