#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgkp
{
    // [DxgkpDuplicateHandleLocal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004
    // dxgkrnl.sys PAGE:0x271f0c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) duplicate_handle_local;
    
    // [DxgkpExpandStackAndCreateStandardAllocation]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1a6980, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) expand_stack_and_create_standard_allocation;
    
    // [DxgkpGetAdapterDeviceDesc]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xa4b20, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) get_adapter_device_desc;
    
    // [DxgkpProcessOpmVmBusRequest]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2c5670, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) process_opm_vm_bus_request;
    
    // [DxgkpQueryTestInterface]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x344fa4, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) query_test_interface;
    
    // [DxgkpAdapterRefCallback]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x207890, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bb8c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x207a30, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) adapter_ref_callback;
    
    // [DxgkpCddSyncGPUAccess]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x140f30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ca1b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x143e40, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) cdd_sync_gpu_access;
    
    // [DxgkpCheckProcessForVirtualMachineManagementAccess]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22cea0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35b0e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22cfd0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) check_process_for_virtual_machine_management_access;
    
    // [DxgkpCopyAttributes]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25cc6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x302f8c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25cdcc, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) copy_attributes;
    
    // [DxgkpCopyFile]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25cd5c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3030c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25cebc, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) copy_file;
    
    // [DxgkpCopyMonitorLinkInfoToFlags]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x11c6e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1af8a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xed350, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) copy_monitor_link_info_to_flags;
    
    // [DxgkpCreateFile]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25d088, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3034b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25d1e8, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) create_file;
    
    // [DxgkpCreateSharedObjectFromHostDesc]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x233b1c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x363588, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x233c4c, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) create_shared_object_from_host_desc;
    
    // [DxgkpCreateSharedVmObjectsForExistingResource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x271cf0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x31c464, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x271e50, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) create_shared_vm_objects_for_existing_resource;
    
    // [DxgkpDelayPresentCddPrimary]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20d370, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x159020, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20d510, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) delay_present_cdd_primary;
    
    // [DxgkpDeleteFile]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25d1e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x303600, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25d344, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) delete_file;
    
    // [DxgkpDriverKnownEscape]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2623b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x308cb4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x262518, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) driver_known_escape;
    
    // [DxgkpDuplicateHandleToVm]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x271ff8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x31c6c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27206c, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) duplicate_handle_to_vm;
    
    // [DxgkpEscapeStopAdapters]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x207910, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bb940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x207ab0, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) escape_stop_adapters;
    
    // [DxgkpEscapeVidMmDelayExecution]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2626e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x309278, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x262840, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) escape_vid_mm_delay_execution;
    
    // [DxgkpFindDefaultRenderAdapterForSession]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15f408, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ecd44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x162258, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) find_default_render_adapter_for_session;
    
    // [DxgkpGetFileLastWriteTime]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25d254, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x303670, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25d3b4, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) get_file_last_write_time;
    
    // [DxgkpGetFileVersion]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1624ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20f1e4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16c960, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) get_file_version;
    
    // [DxgkpGetIndirectDisplayPairedAdapter]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x21c890, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21eee4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21c980, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) get_indirect_display_paired_adapter;
    
    // [DxgkpIsDrtEnabled]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25c0f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x302154, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25c258, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) is_drt_enabled;
    
    // [DxgkpPopulateFile]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25d3c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3037c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25d524, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) populate_file;
    
    // [DxgkpProcessBddFallbackRequest]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x207a2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bba60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x207bcc, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) process_bdd_fallback_request;
    
    // [DxgkpQueryHostDriverStoreAvailability]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2992c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x348604, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x299364, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) query_host_driver_store_availability;
    
    // [DxgkpQueryRegistry]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15ae40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d6a60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15dc90, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) query_registry;
    
    // [DxgkpRegistryQueryRoutine]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x21ca50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cfea0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21cb40, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) registry_query_routine;
    
    // [DxgkpSendTestVmBusCommand]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x234038, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x363b08, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x234168, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) send_test_vm_bus_command;
    
    // [DxgkpStopRenderAndSessionDisplayAdapters]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x207c6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bbd34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x207e0c, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) stop_render_and_session_display_adapters;
    
    // [DxgkpAdapterCheckStereoMode]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8cd1c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd4260, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15afec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd4750, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) adapter_check_stereo_mode;
    
    // [DxgkpBlitA8R8R8G8]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc40f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x145b90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15a754, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x148aa0, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) blit_a8r8r8g8;
    
    // [DxgkpCalibrateGpuTimerDpc]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x20990, 0x60098 bytes
    // dxgkrnl.sys .text:0x3c080, 0x762b0 bytes
    // dxgkrnl.sys .text:0x498e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x3c2b0, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) calibrate_gpu_timer_dpc;
    
    // [DxgkpComponentIdleListTimerDpc]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x10f50, 0x60098 bytes
    // dxgkrnl.sys .text:0x3c0a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x190e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x3c2d0, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) component_idle_list_timer_dpc;
    
    // [DxgkpConvertRects]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x159354, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x229280, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ded18, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2293b0, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) convert_rects;
    
    // [DxgkpCreateDodPresent]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xee454, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x161ae0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x206e4c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x184e48, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) create_dod_present;
    
    // [DxgkpDeferredDestructionWork]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xaf940, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10a2b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19d120, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1162e0, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) deferred_destruction_work;
    
    // [DxgkpFirstFrameTimerDpc]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x209a0, 0x60098 bytes
    // dxgkrnl.sys .text:0x3c0c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x49900, 0x84380 bytes
    // dxgkrnl.sys .text:0x3c2f0, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) first_frame_timer_dpc;
    
    // [DxgkpGetBilinearLineFromSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd9900, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2293f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2dee84, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x229524, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) get_bilinear_line_from_source;
    
    // [DxgkpGetDisplayModeList]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xcac4c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x119de0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c49b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x131edc, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) get_display_mode_list;
    
    // [DxgkpGetDodPrimaryInfo]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x184ce4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f864c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bd018, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f83bc, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) get_dod_primary_info;
    
    // [DxgkpGetPairingAdapters]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa4a80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xebd20, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x18e9a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xf7cf0, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) get_pairing_adapters;
    
    // [DxgkpProcessPowerPStateWork]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x151a40, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x21c9d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2cfe20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x21cac0, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) process_power_p_state_work;
    
    // [DxgkpProcessStatusChangeWork]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xcfd60, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x114fa0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d7500, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x121530, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) process_status_change_work;
    
    // [DxgkpProcessVSyncPhaseThread]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa5d00, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10ecd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cd330, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11ad00, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) process_v_sync_phase_thread;
    
    // [DxgkpVSyncPhaseTimerDpc]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xca00, 0x60098 bytes
    // dxgkrnl.sys .text:0x18130, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1ca20, 0x84380 bytes
    // dxgkrnl.sys .text:0x188c0, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) v_sync_phase_timer_dpc;
};
#include "magic/api.end.hpp"
